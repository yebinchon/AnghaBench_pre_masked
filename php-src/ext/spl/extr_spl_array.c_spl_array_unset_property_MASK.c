
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_3__ {int ar_flags; } ;
typedef TYPE_1__ spl_array_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *,void**) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_2, zend_string *VAR_3, void **VAR_4)
{
 spl_array_object *VAR_5 = FUNC_1(VAR_2);

 if ((VAR_5->ar_flags & VAR_0) != 0
  && !FUNC_3(VAR_2, VAR_3, VAR_1, ((void*)0))) {
  zval VAR_6;
  FUNC_0(&VAR_6, VAR_3);
  FUNC_2(VAR_2, &VAR_6);
  return;
 }
 FUNC_4(VAR_2, VAR_3, VAR_4);
}
