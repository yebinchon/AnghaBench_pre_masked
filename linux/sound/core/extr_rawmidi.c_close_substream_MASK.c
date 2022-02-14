
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t stream; int * pid; scalar_t__ append; scalar_t__ opened; TYPE_2__* runtime; TYPE_1__* ops; scalar_t__ active_sensing; scalar_t__ use_count; } ;
struct snd_rawmidi {TYPE_3__* streams; } ;
struct TYPE_6__ {int substream_opened; } ;
struct TYPE_5__ {int (* private_free ) (struct snd_rawmidi_substream*) ;} ;
struct TYPE_4__ {int (* close ) (struct snd_rawmidi_substream*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_3 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_4 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_5 (struct snd_rawmidi_substream*) ;
 int FUNC_6 (struct snd_rawmidi_substream*) ;
 int FUNC_7 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_8(struct snd_rawmidi *VAR_2,
       struct snd_rawmidi_substream *VAR_3,
       int VAR_4)
{
 if (--VAR_3->use_count)
  return;

 if (VAR_4) {
  if (VAR_3->stream == VAR_1)
   FUNC_2(VAR_3, 0);
  else {
   if (VAR_3->active_sensing) {
    unsigned char VAR_5 = 0xfe;



    FUNC_3(VAR_3, &VAR_5, 1);
   }
   if (FUNC_1(VAR_3) == -VAR_0)
    FUNC_4(VAR_3, 0);
  }
 }
 VAR_3->ops->close(VAR_3);
 if (VAR_3->runtime->private_free)
  VAR_3->runtime->private_free(VAR_3);
 FUNC_5(VAR_3);
 VAR_3->opened = 0;
 VAR_3->append = 0;
 FUNC_0(VAR_3->pid);
 VAR_3->pid = ((void*)0);
 VAR_2->streams[VAR_3->stream].substream_opened--;
}
