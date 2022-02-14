
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zval ;
struct TYPE_16__ {TYPE_6__* ce; int * iterator; int zobject; } ;
struct TYPE_14__ {TYPE_7__* iterator; } ;
struct TYPE_15__ {TYPE_2__ append; } ;
struct TYPE_17__ {TYPE_4__ inner; TYPE_3__ u; } ;
typedef TYPE_5__ spl_dual_it_object ;
struct TYPE_19__ {TYPE_1__* funcs; } ;
struct TYPE_18__ {int * (* get_iterator ) (TYPE_6__*,int *,int ) ;} ;
struct TYPE_13__ {scalar_t__ (* valid ) (TYPE_7__*) ;int * (* get_current_data ) (TYPE_7__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int * FUNC_7 (TYPE_7__*) ;
 int * FUNC_8 (TYPE_6__*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(spl_dual_it_object *VAR_2)
{
 FUNC_4(VAR_2);

 if (!FUNC_2(VAR_2->inner.zobject)) {
  FUNC_10(&VAR_2->inner.zobject);
  FUNC_1(&VAR_2->inner.zobject);
  VAR_2->inner.ce = ((void*)0);
  if (VAR_2->inner.iterator) {
   FUNC_9(VAR_2->inner.iterator);
   VAR_2->inner.iterator = ((void*)0);
  }
 }
 if (VAR_2->u.append.iterator->funcs->valid(VAR_2->u.append.iterator) == VAR_1) {
  zval *VAR_3;

  VAR_3 = VAR_2->u.append.iterator->funcs->get_current_data(VAR_2->u.append.iterator);
  FUNC_0(&VAR_2->inner.zobject, VAR_3);
  VAR_2->inner.ce = FUNC_3(VAR_3);
  VAR_2->inner.iterator = VAR_2->inner.ce->get_iterator(VAR_2->inner.ce, VAR_3, 0);
  FUNC_5(VAR_2);
  return VAR_1;
 } else {
  return VAR_0;
 }
}
