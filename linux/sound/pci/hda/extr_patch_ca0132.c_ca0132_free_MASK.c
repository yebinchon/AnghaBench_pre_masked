
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; TYPE_1__* bus; } ;
struct ca0132_spec {struct ca0132_spec* spec_init_verbs; scalar_t__ mem_base; int base_exit_verbs; int unsol_hp_work; } ;
struct TYPE_2__ {int pci; } ;







 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ca0132_spec*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (struct hda_codec*,int ) ;
 int FUNC_12 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_13(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;

 FUNC_3(&VAR_1->unsol_hp_work);
 FUNC_10(VAR_0);
 switch (FUNC_2(VAR_1)) {
 case 129:
  FUNC_8(VAR_0);
  break;
 case 128:
  FUNC_12(VAR_0);
  break;
 case 131:
  FUNC_6(VAR_0);
  break;
 case 132:
  FUNC_0(VAR_0);
  break;
 case 130:
  FUNC_7(VAR_0);
  break;
 default:
  break;
 }

 FUNC_11(VAR_0, VAR_1->base_exit_verbs);
 FUNC_1(VAR_0);

 FUNC_9(VAR_0);




 FUNC_4(VAR_1->spec_init_verbs);
 FUNC_4(VAR_0->spec);
}
