
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_function ;
struct TYPE_6__ {TYPE_1__* inner; } ;
typedef TYPE_2__ pdo_dbh_object_t ;
struct TYPE_5__ {int * cls_methods; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int **,int *,int const*) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static zend_function *FUNC_6(zend_object **VAR_1, zend_string *VAR_2, const zval *VAR_3)
{
 zend_function *VAR_4 = ((void*)0);
 pdo_dbh_object_t *VAR_5 = FUNC_1(*VAR_1);
 zend_string *VAR_6;

 if ((VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3)) == ((void*)0)) {


  if (!VAR_5->inner->cls_methods[VAR_0]) {
   if (!FUNC_0(VAR_5,
    VAR_0)
    || !VAR_5->inner->cls_methods[VAR_0]) {
    goto out;
   }
  }

  VAR_6 = FUNC_5(VAR_2);
  VAR_4 = FUNC_2(VAR_5->inner->cls_methods[VAR_0], VAR_6);
  FUNC_4(VAR_6, 0);
 }

out:
 return VAR_4;
}
