
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_bucket_uniform {int dummy; } ;
struct crush_bucket_tree {int dummy; } ;
struct crush_bucket_straw2 {int dummy; } ;
struct crush_bucket_straw {int dummy; } ;
struct crush_bucket_list {int dummy; } ;
struct crush_bucket {int alg; } ;







 int FUNC_0 (struct crush_bucket_list*) ;
 int FUNC_1 (struct crush_bucket_straw*) ;
 int FUNC_2 (struct crush_bucket_straw2*) ;
 int FUNC_3 (struct crush_bucket_tree*) ;
 int FUNC_4 (struct crush_bucket_uniform*) ;

void FUNC_5(struct crush_bucket *VAR_0)
{
 switch (VAR_0->alg) {
 case 128:
  FUNC_4((struct crush_bucket_uniform *)VAR_0);
  break;
 case 132:
  FUNC_0((struct crush_bucket_list *)VAR_0);
  break;
 case 129:
  FUNC_3((struct crush_bucket_tree *)VAR_0);
  break;
 case 131:
  FUNC_1((struct crush_bucket_straw *)VAR_0);
  break;
 case 130:
  FUNC_2((struct crush_bucket_straw2 *)VAR_0);
  break;
 }
}
