
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_12__ {int pos; int key; int data; } ;
struct TYPE_11__ {TYPE_5__* iterator; } ;
struct TYPE_13__ {TYPE_3__ current; TYPE_2__ inner; } ;
typedef TYPE_4__ spl_dual_it_object ;
struct TYPE_14__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* get_current_key ) (TYPE_5__*,int *) ;int * (* get_current_data ) (TYPE_5__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int * FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline int FUNC_9(spl_dual_it_object *VAR_3, int VAR_4)
{
 zval *VAR_5;

 FUNC_4(VAR_3);
 if (!VAR_4 || FUNC_5(VAR_3) == VAR_1) {
  VAR_5 = VAR_3->inner.iterator->funcs->get_current_data(VAR_3->inner.iterator);
  if (VAR_5) {
   FUNC_1(&VAR_3->current.data, VAR_5);
  }

  if (VAR_3->inner.iterator->funcs->get_current_key) {
   VAR_3->inner.iterator->funcs->get_current_key(VAR_3->inner.iterator, &VAR_3->current.key);
   if (FUNC_0(VAR_2)) {
    FUNC_8(&VAR_3->current.key);
    FUNC_3(&VAR_3->current.key);
   }
  } else {
   FUNC_2(&VAR_3->current.key, VAR_3->current.pos);
  }
  return FUNC_0(VAR_2) ? VAR_0 : VAR_1;
 }
 return VAR_0;
}
