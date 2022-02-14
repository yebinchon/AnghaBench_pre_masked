
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_3__* ops; struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {int info; } ;
struct snd_pcm_runtime {TYPE_2__ hw; struct snd_pcm_substream* trigger_master; TYPE_1__* status; } ;
struct TYPE_6__ {int (* trigger ) (struct snd_pcm_substream*,int ) ;} ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 void* VAR_1 ;


 void* VAR_2 ;

 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*,void*) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*,void*) ;
 int FUNC_5 (struct snd_pcm_substream*,int) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 if (VAR_5->stream == VAR_3) {
  switch (VAR_7->status->state) {
  case 130:

   if (! FUNC_3(VAR_5)) {
    FUNC_1(VAR_5, VAR_1);
    FUNC_4(VAR_5, VAR_1);
   } else {
    VAR_7->status->state = VAR_2;
   }
   break;
  case 129:
   VAR_7->status->state = VAR_1;
   break;
  case 128:
   VAR_7->status->state = VAR_2;
   break;
  default:
   break;
  }
 } else {

  if (VAR_7->status->state == 129) {
   int VAR_8 = FUNC_0(VAR_7) > 0 ?
    VAR_1 : VAR_2;
   FUNC_2(VAR_5, VAR_8);
   FUNC_5(VAR_5, VAR_8);
  }
 }

 if (VAR_7->status->state == VAR_1 &&
     VAR_7->trigger_master == VAR_5 &&
     (VAR_7->hw.info & VAR_0))
  return VAR_5->ops->trigger(VAR_5,
            VAR_4);

 return 0;
}
