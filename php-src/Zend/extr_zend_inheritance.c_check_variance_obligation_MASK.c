
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_6__ {scalar_t__ type; int parent_prop; int child_prop; int parent_fn; int child_fn; TYPE_1__* dependency_ce; } ;
typedef TYPE_2__ variance_obligation ;
typedef scalar_t__ inheritance_status ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(zval *VAR_10) {
 variance_obligation *VAR_11 = FUNC_3(VAR_10);
 if (VAR_11->type == VAR_4) {
  zend_class_entry *VAR_12 = VAR_11->dependency_ce;
  if (VAR_12->ce_flags & VAR_7) {
   FUNC_7(VAR_12);
  }
  if (!(VAR_12->ce_flags & VAR_6)) {
   return VAR_8;
  }
 } else if (VAR_11->type == VAR_3) {
  inheritance_status VAR_13 = FUNC_8(
   VAR_11->child_fn, VAR_11->parent_fn);
  if (FUNC_1(VAR_13 != VAR_1)) {
   if (FUNC_0(VAR_13 == VAR_2)) {
    return VAR_8;
   }
   FUNC_2(VAR_13 == VAR_0);
   FUNC_4(VAR_11->child_fn, VAR_11->parent_fn, VAR_13);
  }

 } else {
  FUNC_2(VAR_11->type == VAR_5);
  inheritance_status VAR_14 =
   FUNC_6(VAR_11->parent_prop, VAR_11->child_prop);
  if (VAR_14 != VAR_1) {
   if (VAR_14 == VAR_2) {
    return VAR_8;
   }
   FUNC_2(VAR_14 == VAR_0);
   FUNC_5(VAR_11->child_prop, VAR_11->parent_prop);
  }
 }
 return VAR_9;
}
