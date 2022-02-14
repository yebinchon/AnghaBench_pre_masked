
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low; } ;
struct snd_sf_zone {struct snd_sf_zone* next_zone; struct snd_sf_zone* next_instr; TYPE_1__ v; int instr; int bank; } ;
struct snd_sf_list {struct snd_sf_zone** presets; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct snd_sf_list *VAR_0, struct snd_sf_zone *VAR_1)
{
 int VAR_2;
 struct snd_sf_zone *VAR_3;

 if ((VAR_2 = FUNC_0(VAR_1->bank, VAR_1->instr, VAR_1->v.low)) < 0)
  return;
 for (VAR_3 = VAR_0->presets[VAR_2]; VAR_3; VAR_3 = VAR_3->next_instr) {
  while (VAR_3->next_instr == VAR_1) {
   VAR_3->next_instr = VAR_1->next_instr;
   VAR_1 = VAR_1->next_zone;
   if (VAR_1 == ((void*)0))
    return;
  }
 }
}
