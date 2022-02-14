
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {scalar_t__ ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_13__ {int * handlers; } ;
struct TYPE_11__ {int dimensions; TYPE_4__ std; int * indices; TYPE_3__* obj; } ;
typedef TYPE_2__ php_com_saproxy ;
struct TYPE_12__ {int zo; } ;
typedef TYPE_3__ php_com_dotnet_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_4__*,scalar_t__) ;

int FUNC_7(zend_object *VAR_2, zval *VAR_3, zval *VAR_4)
{
 php_com_saproxy *VAR_5, *VAR_6 = ((void*)0);

 VAR_5 = FUNC_4(1, sizeof(*VAR_5));
 VAR_5->dimensions = 1;

 if (VAR_2->ce == VAR_0) {
  VAR_6 = (php_com_saproxy*) VAR_2;
  VAR_5->obj = VAR_6->obj;
  VAR_5->dimensions += VAR_6->dimensions;
 } else {
  VAR_5->obj = (php_com_dotnet_object*) VAR_2;
 }

 FUNC_0(&VAR_5->obj->zo);
 VAR_5->indices = FUNC_5(VAR_5->dimensions, sizeof(zval *), 0);

 if (VAR_6) {
  FUNC_3(VAR_5, VAR_6, VAR_6->dimensions);
 }

 FUNC_1(&VAR_5->indices[VAR_5->dimensions-1], VAR_4);

 FUNC_6(&VAR_5->std, VAR_0);
 VAR_5->std.handlers = &VAR_1;
 FUNC_2(VAR_3, &VAR_5->std);

 return 1;
}
