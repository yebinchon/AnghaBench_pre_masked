
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subsystem_id; } ;
struct hda_codec {TYPE_1__ core; struct ca0132_spec* spec; } ;
struct ca0132_spec {int quirk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;

 switch (VAR_3->core.subsystem_id) {
 case 0x11020033:
  VAR_4->quirk = VAR_1;
  break;
 case 0x1102003f:
  VAR_4->quirk = VAR_2;
  break;
 default:
  VAR_4->quirk = VAR_0;
  break;
 }
}
