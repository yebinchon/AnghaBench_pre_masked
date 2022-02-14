
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_function ;
struct TYPE_5__ {int * dirp; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {int * orig_path; TYPE_2__ u; } ;
typedef TYPE_3__ spl_filesystem_object ;


 TYPE_3__* FUNC_0 (int *) ;
 int * FUNC_1 (int **,int *,int const*) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *,int ) ;

zend_function *FUNC_4(zend_object **VAR_0, zend_string *VAR_1, const zval *VAR_2)
{
 spl_filesystem_object *VAR_3 = FUNC_0(*VAR_0);

 if (VAR_3->u.dir.dirp == ((void*)0) && VAR_3->orig_path == ((void*)0)) {
  zend_function *VAR_4;
  zend_string *VAR_5 = FUNC_2("_bad_state_ex", sizeof("_bad_state_ex") - 1, 0);
  VAR_4 = FUNC_1(VAR_0, VAR_5, ((void*)0));
  FUNC_3(VAR_5, 0);
  return VAR_4;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
