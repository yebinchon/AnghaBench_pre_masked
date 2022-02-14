
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_4__ {int ar_flags; scalar_t__ fptr_offset_get; } ;
typedef TYPE_1__ spl_array_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int,TYPE_1__*,int *,int) ;
 int * FUNC_3 (int *,int *,int,void**) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static zval *FUNC_5(zend_object *VAR_2, zend_string *VAR_3, int VAR_4, void **VAR_5)
{
 spl_array_object *VAR_6 = FUNC_1(VAR_2);

 if ((VAR_6->ar_flags & VAR_0) != 0
  && !FUNC_4(VAR_2, VAR_3, VAR_1, ((void*)0))) {


  zval VAR_7;
  if (VAR_6->fptr_offset_get) {
   return ((void*)0);
  }
  FUNC_0(&VAR_7, VAR_3);
  return FUNC_2(1, VAR_6, &VAR_7, VAR_4);
 }
 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
}
