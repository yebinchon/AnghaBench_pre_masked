
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_bucket_uniform {int item_weight; } ;
struct crush_bucket_tree {int* node_weights; } ;
struct crush_bucket_straw2 {int* item_weights; } ;
struct crush_bucket_straw {int* item_weights; } ;
struct crush_bucket_list {int* item_weights; } ;
struct crush_bucket {scalar_t__ size; int alg; } ;
typedef scalar_t__ __u32 ;







 size_t FUNC_0 (int) ;

int FUNC_1(const struct crush_bucket *VAR_0, int VAR_1)
{
 if ((__u32)VAR_1 >= VAR_0->size)
  return 0;

 switch (VAR_0->alg) {
 case 128:
  return ((struct crush_bucket_uniform *)VAR_0)->item_weight;
 case 132:
  return ((struct crush_bucket_list *)VAR_0)->item_weights[VAR_1];
 case 129:
  return ((struct crush_bucket_tree *)VAR_0)->node_weights[FUNC_0(VAR_1)];
 case 131:
  return ((struct crush_bucket_straw *)VAR_0)->item_weights[VAR_1];
 case 130:
  return ((struct crush_bucket_straw2 *)VAR_0)->item_weights[VAR_1];
 }
 return 0;
}
