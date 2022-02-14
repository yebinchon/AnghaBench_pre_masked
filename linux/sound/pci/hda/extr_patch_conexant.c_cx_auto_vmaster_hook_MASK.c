
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int eapds; int num_eapds; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 struct hda_codec *VAR_2 = VAR_0;
 struct conexant_spec *VAR_3 = VAR_2->spec;

 FUNC_0(VAR_2, VAR_3->num_eapds, VAR_3->eapds, VAR_1);
}
