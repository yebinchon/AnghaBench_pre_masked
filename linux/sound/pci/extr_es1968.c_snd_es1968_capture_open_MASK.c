
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {scalar_t__ period_bytes_max; scalar_t__ buffer_bytes_max; } ;
struct snd_pcm_runtime {TYPE_3__ hw; struct esschan* private_data; } ;
struct esschan {int* apu; int list; TYPE_2__* mixbuf; int mode; struct snd_pcm_substream* substream; scalar_t__ running; scalar_t__* apu_mode; } ;
struct es1968 {int substream_lock; int substream_list; } ;
struct TYPE_4__ {int area; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct es1968*) ;
 int FUNC_1 (struct esschan*) ;
 struct esschan* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct es1968*,int ) ;
 TYPE_3__ VAR_7 ;
 int FUNC_6 (struct es1968*,int) ;
 TYPE_2__* FUNC_7 (struct es1968*,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ) ;
 struct es1968* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_8)
{
 struct snd_pcm_runtime *VAR_9 = VAR_8->runtime;
 struct es1968 *VAR_10 = FUNC_9(VAR_8);
 struct esschan *VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_5(VAR_10, VAR_1);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_13 = FUNC_5(VAR_10, VAR_2);
 if (VAR_13 < 0) {
  FUNC_6(VAR_10, VAR_12);
  return VAR_13;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  FUNC_6(VAR_10, VAR_12);
  FUNC_6(VAR_10, VAR_13);
  return -VAR_0;
 }

 VAR_11->apu[0] = VAR_12;
 VAR_11->apu[1] = VAR_12 + 1;
 VAR_11->apu[2] = VAR_13;
 VAR_11->apu[3] = VAR_13 + 1;
 VAR_11->apu_mode[0] = 0;
 VAR_11->apu_mode[1] = 0;
 VAR_11->apu_mode[2] = 0;
 VAR_11->apu_mode[3] = 0;
 VAR_11->running = 0;
 VAR_11->substream = VAR_8;
 VAR_11->mode = VAR_4;


 if ((VAR_11->mixbuf = FUNC_7(VAR_10, VAR_3)) == ((void*)0)) {
  FUNC_6(VAR_10, VAR_12);
  FUNC_6(VAR_10, VAR_13);
  FUNC_1(VAR_11);
                return -VAR_0;
        }
 FUNC_4(VAR_11->mixbuf->buf.area, 0, VAR_3);

 VAR_9->private_data = VAR_11;
 VAR_9->hw = VAR_7;
 VAR_9->hw.buffer_bytes_max = VAR_9->hw.period_bytes_max =
  FUNC_0(VAR_10) - 1024;
 FUNC_8(VAR_9, 0, VAR_6);

 FUNC_10(&VAR_10->substream_lock);
 FUNC_3(&VAR_11->list, &VAR_10->substream_list);
 FUNC_11(&VAR_10->substream_lock);

 return 0;
}
