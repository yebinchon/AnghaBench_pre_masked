
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__ multi_ios; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_gen_spec*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;

 if (VAR_3->multi_ios > 0) {
  if (!FUNC_0(VAR_3, ((void*)0), &VAR_1))
   return -VAR_0;
 }
 return 0;
}
