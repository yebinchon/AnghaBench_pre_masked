
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct crush_weight_set {int * weights; int size; } ;
struct crush_choose_arg {size_t weight_set_size; int * ids; int ids_size; struct crush_weight_set* weight_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**,void*,size_t,int ) ;
 void* FUNC_3 (void**,void*,int *) ;
 int VAR_3 ;
 struct crush_weight_set* FUNC_4 (size_t,int,int ) ;

__attribute__((used)) static int FUNC_5(void **VAR_4, void *VAR_5, struct crush_choose_arg *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4, VAR_5, VAR_6->weight_set_size, VAR_3);
 if (VAR_6->weight_set_size) {
  u32 VAR_8;

  VAR_6->weight_set = FUNC_4(VAR_6->weight_set_size,
      sizeof(*VAR_6->weight_set),
      VAR_2);
  if (!VAR_6->weight_set)
   return -VAR_1;

  for (VAR_8 = 0; VAR_8 < VAR_6->weight_set_size; VAR_8++) {
   struct crush_weight_set *VAR_9 = &VAR_6->weight_set[VAR_8];

   VAR_9->weights = FUNC_3(VAR_4, VAR_5, &VAR_9->size);
   if (FUNC_0(VAR_9->weights)) {
    VAR_7 = FUNC_1(VAR_9->weights);
    VAR_9->weights = ((void*)0);
    return VAR_7;
   }
  }
 }

 VAR_6->ids = FUNC_3(VAR_4, VAR_5, &VAR_6->ids_size);
 if (FUNC_0(VAR_6->ids)) {
  VAR_7 = FUNC_1(VAR_6->ids);
  VAR_6->ids = ((void*)0);
  return VAR_7;
 }

 return 0;

e_inval:
 return -VAR_0;
}
