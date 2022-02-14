
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_object_get_properties_t ;
typedef int zend_long ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_1__* ce; } ;
struct TYPE_9__ {int ar_flags; scalar_t__ ht_iter; int array; TYPE_2__ std; } ;
typedef TYPE_3__ spl_array_object ;
struct TYPE_10__ {int name; } ;
struct TYPE_7__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,int ,char*,int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(zval *VAR_10, spl_array_object *VAR_11, zval *VAR_12, zend_long VAR_13, int VAR_14) {
 if (FUNC_11(VAR_12) != VAR_1 && FUNC_11(VAR_12) != VAR_0) {
  FUNC_13(VAR_6, "Passed variable is not an array or object", 0);
  return;
 }

 if (FUNC_11(VAR_12) == VAR_0) {
  FUNC_15(&VAR_11->array);
  if (FUNC_9(VAR_12) == 1) {
   FUNC_2(&VAR_11->array, VAR_12);
  } else {

   FUNC_1(&VAR_11->array, FUNC_12(FUNC_4(VAR_12)));
  }
 } else {
  if (FUNC_7(VAR_12) == &VAR_8 || FUNC_7(VAR_12) == &VAR_7) {
   FUNC_15(&VAR_11->array);
   if (VAR_14) {
    spl_array_object *VAR_15 = FUNC_10(VAR_12);
    VAR_13 = VAR_15->ar_flags & ~VAR_2;
   }
   if (FUNC_8(VAR_10) == FUNC_8(VAR_12)) {
    VAR_13 |= VAR_3;
    FUNC_3(&VAR_11->array);
   } else {
    VAR_13 |= VAR_4;
    FUNC_2(&VAR_11->array, VAR_12);
   }
  } else {
   zend_object_get_properties_t VAR_16 = FUNC_6(VAR_12, VAR_5);
   if (VAR_16 != VAR_9) {
    FUNC_14(VAR_6, 0,
     "Overloaded object of type %s is not compatible with %s",
     FUNC_0(FUNC_5(VAR_12)->name), FUNC_0(VAR_11->std.ce->name));
    return;
   }
   FUNC_15(&VAR_11->array);
   FUNC_2(&VAR_11->array, VAR_12);
  }
 }

 VAR_11->ar_flags &= ~VAR_3 & ~VAR_4;
 VAR_11->ar_flags |= VAR_13;
 VAR_11->ht_iter = (uint32_t)-1;
}
