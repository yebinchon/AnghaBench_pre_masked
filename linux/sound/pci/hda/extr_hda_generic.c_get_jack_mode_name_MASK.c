
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,char*,int) ;
 int FUNC_1 (struct hda_codec*,int ,int *,char*,size_t,int*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1,
          char *VAR_2, size_t VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_0->spec;
 int VAR_5 = 0;

 FUNC_1(VAR_0, VAR_1, &VAR_4->autocfg, VAR_2, VAR_3, &VAR_5);
 FUNC_2(VAR_2, " Jack Mode", VAR_3);

 for (; FUNC_0(VAR_0, VAR_2, VAR_5); VAR_5++)
  ;
}
