
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_9__ {int ar_flags; } ;
typedef TYPE_2__ spl_array_object ;
typedef int HashTable ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(zend_object_iterator *VAR_1)
{
 spl_array_object *VAR_2 = FUNC_0(&VAR_1->data);
 HashTable *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->ar_flags & VAR_0) {
  return FUNC_4(VAR_1);
 } else {
  return FUNC_3(VAR_3, FUNC_2(VAR_3, VAR_2));
 }
}
