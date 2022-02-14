
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (struct hda_codec*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->autocfg, ((void*)0), 0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, &VAR_1->autocfg);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
