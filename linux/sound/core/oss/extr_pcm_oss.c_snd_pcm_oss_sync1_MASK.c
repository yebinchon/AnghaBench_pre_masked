
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct snd_pcm_substream {int pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {scalar_t__ buffer_used; int buffer; } ;
struct snd_pcm_runtime {int sleep; TYPE_2__* status; TYPE_1__ oss; } ;
typedef int ssize_t ;
typedef scalar_t__ snd_pcm_state_t ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 long FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct snd_pcm_substream*,int ,size_t,int) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_8, size_t VAR_9)
{
 struct snd_pcm_runtime *VAR_10;
 ssize_t VAR_11 = 0;
 snd_pcm_state_t VAR_12;
 long VAR_13;
 wait_queue_entry_t VAR_14;

 VAR_10 = VAR_8->runtime;
 FUNC_1(&VAR_14, VAR_7);
 FUNC_0(&VAR_10->sleep, &VAR_14);



 while (1) {
  VAR_11 = FUNC_8(VAR_8, VAR_10->oss.buffer, VAR_9, 1);
  if (VAR_11 > 0) {
   VAR_10->oss.buffer_used = 0;
   VAR_11 = 0;
   break;
  }
  if (VAR_11 != 0 && VAR_11 != -VAR_0)
   break;
  VAR_11 = 0;
  FUNC_6(VAR_5);
  FUNC_9(VAR_8);
  VAR_12 = VAR_10->status->state;
  FUNC_10(VAR_8);
  if (VAR_12 != VAR_4) {
   FUNC_6(VAR_6);
   break;
  }
  VAR_13 = FUNC_5(10 * VAR_3);
  if (FUNC_7(VAR_7)) {
   VAR_11 = -VAR_2;
   break;
  }
  if (VAR_13 == 0) {
   FUNC_3(VAR_8->pcm,
    "OSS sync error - DMA timeout\n");
   VAR_11 = -VAR_1;
   break;
  }
 }
 FUNC_4(&VAR_10->sleep, &VAR_14);
 return VAR_11;
}
