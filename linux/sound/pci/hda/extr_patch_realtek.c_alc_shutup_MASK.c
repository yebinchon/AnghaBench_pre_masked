
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int (* shutup ) (struct hda_codec*) ;} ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,char*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static inline void FUNC_3(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 if (!FUNC_1(VAR_0, "shutup"))
  return;

 if (VAR_1 && VAR_1->shutup)
  VAR_1->shutup(VAR_0);
 else
  FUNC_0(VAR_0);
}
