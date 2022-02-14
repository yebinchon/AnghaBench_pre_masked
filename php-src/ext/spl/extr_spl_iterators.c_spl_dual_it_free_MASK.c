
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int zchildren; int zstr; } ;
struct TYPE_13__ {TYPE_4__ caching; } ;
struct TYPE_11__ {int key; int data; } ;
struct TYPE_10__ {TYPE_7__* iterator; } ;
struct TYPE_14__ {scalar_t__ dit_type; TYPE_5__ u; TYPE_3__ current; TYPE_2__ inner; } ;
typedef TYPE_6__ spl_dual_it_object ;
struct TYPE_15__ {TYPE_1__* funcs; } ;
struct TYPE_9__ {int (* invalidate_current ) (TYPE_7__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(spl_dual_it_object *VAR_3)
{
 if (VAR_3->inner.iterator && VAR_3->inner.iterator->funcs->invalidate_current) {
  VAR_3->inner.iterator->funcs->invalidate_current(VAR_3->inner.iterator);
 }
 if (FUNC_1(VAR_3->current.data) != VAR_2) {
  FUNC_3(&VAR_3->current.data);
  FUNC_0(&VAR_3->current.data);
 }
 if (FUNC_1(VAR_3->current.key) != VAR_2) {
  FUNC_3(&VAR_3->current.key);
  FUNC_0(&VAR_3->current.key);
 }
 if (VAR_3->dit_type == VAR_0 || VAR_3->dit_type == VAR_1) {
  if (FUNC_1(VAR_3->u.caching.zstr) != VAR_2) {
   FUNC_3(&VAR_3->u.caching.zstr);
   FUNC_0(&VAR_3->u.caching.zstr);
  }
  if (FUNC_1(VAR_3->u.caching.zchildren) != VAR_2) {
   FUNC_3(&VAR_3->u.caching.zchildren);
   FUNC_0(&VAR_3->u.caching.zchildren);
  }
 }
}
