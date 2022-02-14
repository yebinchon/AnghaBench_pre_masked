
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int eapds; int num_eapds; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct conexant_spec *VAR_1 = VAR_0->spec;



 FUNC_0(VAR_0, VAR_1->num_eapds, VAR_1->eapds, 0);
 FUNC_1(VAR_0);
}
