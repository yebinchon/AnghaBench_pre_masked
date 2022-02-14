
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gus_voice {int number; struct gus_pcm_private* private_data; } ;
struct TYPE_2__ {unsigned short pcm_volume_level_left; unsigned short pcm_volume_level_right; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;
struct gus_pcm_private {int flags; int final_volume; int * substream; struct snd_gus_voice** pvoices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ) ;
 int FUNC_2 (struct snd_gus_card*,int ,unsigned short) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct snd_gus_card * VAR_3,
      struct snd_gus_voice * VAR_4)
{
 unsigned short VAR_5;
 int VAR_6;
 struct gus_pcm_private *VAR_7 = VAR_4->private_data;


 FUNC_3(&VAR_3->reg_lock);
 FUNC_1(VAR_3, VAR_4->number);
 FUNC_0(VAR_3, VAR_1);
 FUNC_4(&VAR_3->reg_lock);
 if (VAR_7 == ((void*)0))
  return;

 if (!(VAR_7->flags & VAR_0))
  return;

 VAR_6 = VAR_7->pvoices[0] == VAR_4 ? 0 : 1;
 if (VAR_7->substream == ((void*)0))
  return;
 VAR_5 = !VAR_6 ? VAR_3->gf1.pcm_volume_level_left : VAR_3->gf1.pcm_volume_level_right;
 FUNC_3(&VAR_3->reg_lock);
 FUNC_1(VAR_3, VAR_4->number);
 FUNC_2(VAR_3, VAR_2, VAR_5);
 VAR_7->final_volume = 1;
 FUNC_4(&VAR_3->reg_lock);
}
