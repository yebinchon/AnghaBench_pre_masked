
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int eapds; int num_eapds; int dynamic_eapd; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_1->spec;
 FUNC_2(VAR_1);
 if (!VAR_2->dynamic_eapd)
  FUNC_0(VAR_1, VAR_2->num_eapds, VAR_2->eapds, 1);

 FUNC_1(VAR_1, VAR_0);

 return 0;
}
