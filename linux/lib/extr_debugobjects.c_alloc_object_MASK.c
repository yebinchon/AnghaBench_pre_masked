
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_percpu_free {int obj_free; int free_objs; } ;
struct debug_obj_descr {int dummy; } ;
struct debug_obj {int node; scalar_t__ astate; int state; struct debug_obj_descr* descr; void* object; } ;
struct debug_bucket {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct debug_obj* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct debug_percpu_free* FUNC_5 (int *) ;

__attribute__((used)) static struct debug_obj *
FUNC_6(void *VAR_10, struct debug_bucket *VAR_11, struct debug_obj_descr *VAR_12)
{
 struct debug_percpu_free *VAR_13 = FUNC_5(&VAR_8);
 struct debug_obj *VAR_14;

 if (FUNC_2(VAR_2)) {
  VAR_14 = FUNC_0(&VAR_13->free_objs);
  if (VAR_14) {
   VAR_13->obj_free--;
   goto init_obj;
  }
 }

 FUNC_3(&VAR_9);
 VAR_14 = FUNC_0(&VAR_3);
 if (VAR_14) {
  VAR_7++;
  VAR_4--;





  if (FUNC_2(VAR_2)) {
   int VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
    struct debug_obj *VAR_16;

    VAR_16 = FUNC_0(&VAR_3);
    if (!VAR_16)
     break;
    FUNC_1(&VAR_16->node,
            &VAR_13->free_objs);
    VAR_13->obj_free++;
    VAR_7++;
    VAR_4--;
   }
  }

  if (VAR_7 > VAR_5)
   VAR_5 = VAR_7;

  if (VAR_4 < VAR_6)
   VAR_6 = VAR_4;
 }
 FUNC_4(&VAR_9);

init_obj:
 if (VAR_14) {
  VAR_14->object = VAR_10;
  VAR_14->descr = VAR_12;
  VAR_14->state = VAR_1;
  VAR_14->astate = 0;
  FUNC_1(&VAR_14->node, &VAR_11->list);
 }
 return VAR_14;
}
