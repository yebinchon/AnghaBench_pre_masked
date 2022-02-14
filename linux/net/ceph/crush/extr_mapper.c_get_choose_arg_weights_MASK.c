
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crush_choose_arg {int weight_set_size; TYPE_1__* weight_set; } ;
struct crush_bucket_straw2 {int * item_weights; } ;
typedef int __u32 ;
struct TYPE_2__ {int * weights; } ;



__attribute__((used)) static __u32 *FUNC_0(const struct crush_bucket_straw2 *VAR_0,
         const struct crush_choose_arg *VAR_1,
         int VAR_2)
{
 if (!VAR_1 || !VAR_1->weight_set)
  return VAR_0->item_weights;

 if (VAR_2 >= VAR_1->weight_set_size)
  VAR_2 = VAR_1->weight_set_size - 1;
 return VAR_1->weight_set[VAR_2].weights;
}
