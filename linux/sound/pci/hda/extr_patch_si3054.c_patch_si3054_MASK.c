
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si3054_spec {int dummy; } ;
struct hda_codec {int patch_ops; struct si3054_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct si3054_spec* FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_3)
{
 struct si3054_spec *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_3->spec = VAR_4;
 VAR_3->patch_ops = VAR_2;
 return 0;
}
