
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int coef0; } ;


 unsigned int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 if (!VAR_1->coef0)
  VAR_1->coef0 = FUNC_0(VAR_0, 0);
 return VAR_1->coef0;
}
