
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int iface; } ;
struct snd_emu10k1_fx8010_control_gpr {int vcount; int count; int* gpr; int* value; int max; int translation; scalar_t__ min; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static void
FUNC_1(struct snd_emu10k1_fx8010_control_gpr *VAR_2,
          const char *VAR_3, int VAR_4, int VAR_5)
{
 VAR_2->id.iface = VAR_1;
 FUNC_0(VAR_2->id.name, VAR_3);
 VAR_2->vcount = VAR_2->count = 2;
 VAR_2->gpr[0] = VAR_4 + 0; VAR_2->value[0] = VAR_5;
 VAR_2->gpr[1] = VAR_4 + 1; VAR_2->value[1] = VAR_5;
 VAR_2->min = 0;
 VAR_2->max = 1;
 VAR_2->translation = VAR_0;
}
