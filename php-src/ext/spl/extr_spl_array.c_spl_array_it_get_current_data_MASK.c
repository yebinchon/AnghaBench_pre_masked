
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_9__ {int ar_flags; } ;
typedef TYPE_2__ spl_array_object ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static zval *FUNC_7(zend_object_iterator *VAR_2)
{
 spl_array_object *VAR_3 = FUNC_1(&VAR_2->data);
 HashTable *VAR_4 = FUNC_3(VAR_3);

 if (VAR_3->ar_flags & VAR_1) {
  return FUNC_6(VAR_2);
 } else {
  zval *VAR_5 = FUNC_5(VAR_4, FUNC_4(VAR_4, VAR_3));
  if (VAR_5 && FUNC_2(VAR_5) == VAR_0) {
   VAR_5 = FUNC_0(VAR_5);
  }
  return VAR_5;
 }
}
