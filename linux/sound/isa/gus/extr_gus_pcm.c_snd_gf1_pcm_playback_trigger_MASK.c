
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct gus_pcm_private* private_data; } ;
struct snd_gus_card {int dummy; } ;
struct gus_pcm_private {TYPE_1__** pvoices; int lock; int flags; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_gus_card*,int,int) ;
 struct snd_gus_card* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
     int VAR_5)
{
 struct snd_gus_card *VAR_6 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 struct gus_pcm_private *VAR_8 = VAR_7->private_data;
 int VAR_9;

 if (VAR_5 == VAR_2) {
  FUNC_0(VAR_4);
 } else if (VAR_5 == VAR_3) {
  FUNC_3(&VAR_8->lock);
  VAR_8->flags &= ~VAR_1;
  FUNC_4(&VAR_8->lock);
  VAR_9 = VAR_8->pvoices[0]->number;
  FUNC_1(VAR_6, VAR_9, VAR_9);
  if (VAR_8->pvoices[1]) {
   VAR_9 = VAR_8->pvoices[1]->number;
   FUNC_1(VAR_6, VAR_9, VAR_9);
  }
 } else {
  return -VAR_0;
 }
 return 0;
}
