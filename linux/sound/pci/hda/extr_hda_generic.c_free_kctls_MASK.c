
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int name; } ;
struct TYPE_2__ {int used; struct snd_kcontrol_new* list; } ;
struct hda_gen_spec {TYPE_1__ kctls; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct hda_gen_spec *VAR_0)
{
 if (VAR_0->kctls.list) {
  struct snd_kcontrol_new *VAR_1 = VAR_0->kctls.list;
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->kctls.used; VAR_2++)
   FUNC_0(VAR_1[VAR_2].name);
 }
 FUNC_1(&VAR_0->kctls);
}
