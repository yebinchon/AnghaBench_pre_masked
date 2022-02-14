
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_percpu_free {scalar_t__ obj_free; int free_objs; } ;
struct debug_obj {int node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct debug_obj* FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct debug_percpu_free* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct debug_obj *VAR_12)
{
 struct debug_obj *VAR_13[VAR_0];
 struct debug_percpu_free *VAR_14;
 int VAR_15 = 0;
 unsigned long VAR_16;
 bool VAR_17;

 FUNC_3(VAR_16);
 if (!VAR_4)
  goto free_to_obj_pool;




 VAR_14 = FUNC_6(&VAR_10);
 if (VAR_14->obj_free < VAR_2) {
  FUNC_1(&VAR_12->node, &VAR_14->free_objs);
  VAR_14->obj_free++;
  FUNC_2(VAR_16);
  return;
 }





 for (; VAR_15 < VAR_0; VAR_15++) {
  VAR_13[VAR_15] = FUNC_0(&VAR_14->free_objs);
  if (!VAR_13[VAR_15])
   break;
  VAR_14->obj_free--;
 }

free_to_obj_pool:
 FUNC_4(&VAR_11);
 VAR_17 = (VAR_7 > VAR_3) && VAR_4 &&
        (VAR_5 < VAR_1);
 VAR_8--;

 if (VAR_17) {
  VAR_5++;
  FUNC_1(&VAR_12->node, &VAR_9);
  if (VAR_15) {
   VAR_5 += VAR_15;
   VAR_8 -= VAR_15;
   while (VAR_15) {
    FUNC_1(&VAR_13[--VAR_15]->node,
            &VAR_9);
   }
  }

  if ((VAR_7 > VAR_3) &&
      (VAR_5 < VAR_1)) {
   int VAR_18;




   for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
    VAR_12 = FUNC_0(&VAR_6);
    FUNC_1(&VAR_12->node, &VAR_9);
    VAR_7--;
    VAR_5++;
   }
  }
 } else {
  VAR_7++;
  FUNC_1(&VAR_12->node, &VAR_6);
  if (VAR_15) {
   VAR_7 += VAR_15;
   VAR_8 -= VAR_15;
   while (VAR_15) {
    FUNC_1(&VAR_13[--VAR_15]->node,
            &VAR_6);
   }
  }
 }
 FUNC_5(&VAR_11);
 FUNC_2(VAR_16);
}
