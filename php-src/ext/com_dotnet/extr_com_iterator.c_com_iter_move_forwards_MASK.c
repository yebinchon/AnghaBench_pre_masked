
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef void* zend_ulong ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct php_com_iterator {scalar_t__ key; int zdata; int code_page; int v; int safe_array; scalar_t__ sa_max; scalar_t__ ev; } ;
typedef scalar_t__ ULONG ;
typedef int LONG ;


 int FUNC_0 (scalar_t__,int,int *,unsigned long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(zend_object_iterator *VAR_1)
{
 struct php_com_iterator *VAR_2 = (struct php_com_iterator*)FUNC_6(VAR_1->data);
 unsigned long VAR_3;
 zval VAR_4;


 FUNC_2(&VAR_2->v);

 if (FUNC_7(VAR_2->zdata) != VAR_0) {
  FUNC_10(&VAR_2->zdata);
  FUNC_5(&VAR_2->zdata);
 }

 if (VAR_2->ev) {

  if (FUNC_1(FUNC_0(VAR_2->ev, 1, &VAR_2->v, &VAR_3)) && VAR_3 > 0) {
   VAR_2->key++;
  } else {

   VAR_2->key = (zend_ulong)-1;
   return;
  }
 } else {

  if (VAR_2->key >= (ULONG) VAR_2->sa_max) {
   VAR_2->key = (zend_ulong)-1;
   return;
  }
  VAR_2->key++;
  if (FUNC_8(&VAR_2->safe_array, &VAR_2->v, (LONG)VAR_2->key) == 0) {
   VAR_2->key = (zend_ulong)-1;
   return;
  }
 }

 FUNC_4(&VAR_4);
 FUNC_9(&VAR_4, &VAR_2->v, VAR_2->code_page);

 FUNC_3(&VAR_2->zdata, &VAR_4);
}
