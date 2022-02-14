
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int iface; } ;
struct snd_emu10k1_fx8010_control_gpr {int vcount; int count; int* gpr; int* value; int max; int translation; int tlv; scalar_t__ min; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static void
FUNC_1(struct snd_emu10k1_fx8010_control_gpr *VAR_6,
    const char *VAR_7, int VAR_8, int VAR_9)
{
 VAR_6->id.iface = VAR_2;
 FUNC_0(VAR_6->id.name, VAR_7);
 VAR_6->vcount = VAR_6->count = 2;
 VAR_6->gpr[0] = VAR_8 + 0; VAR_6->value[0] = VAR_9;
 VAR_6->gpr[1] = VAR_8 + 1; VAR_6->value[1] = VAR_9;
 if (VAR_3) {
  VAR_6->min = 0;
  VAR_6->max = 0x7fffffff;
  VAR_6->tlv = VAR_4;
  VAR_6->translation = VAR_0;
 } else {
  VAR_6->min = 0;
  VAR_6->max = 100;
  VAR_6->tlv = VAR_5;
  VAR_6->translation = VAR_1;
 }
}
