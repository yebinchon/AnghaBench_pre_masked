
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {TYPE_5__* iterator; } ;
struct TYPE_11__ {int ce; } ;
struct TYPE_12__ {TYPE_2__ inner; TYPE_3__ std; } ;
typedef TYPE_4__ spl_dual_it_object ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_9__ {int (* move_forward ) (TYPE_5__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ,int *,char*,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(zval *VAR_3, spl_dual_it_object *VAR_4)
{
 zval VAR_5;

 while (FUNC_3(VAR_4, 1) == VAR_1) {
  FUNC_6(FUNC_1(VAR_3), VAR_4->std.ce, ((void*)0), "accept", &VAR_5);
  if (FUNC_2(VAR_5) != VAR_0) {
   if (FUNC_7(&VAR_5)) {
    FUNC_8(&VAR_5);
    return;
   }
   FUNC_8(&VAR_5);
  }
  if (FUNC_0(VAR_2)) {
   return;
  }
  VAR_4->inner.iterator->funcs->move_forward(VAR_4->inner.iterator);
 }
 FUNC_4(VAR_4);
}
