
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int patch_ops; struct ad198x_spec* spec; } ;
struct ad198x_spec {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ad198x_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_3)
{
 struct ad198x_spec *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->spec = VAR_4;
 FUNC_1(&VAR_4->gen);
 VAR_3->patch_ops = VAR_2;
 return 0;
}
