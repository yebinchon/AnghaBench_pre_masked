
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_9__ {int std; int dimensions; int indices; TYPE_1__* obj; } ;
typedef TYPE_2__ php_com_saproxy ;
struct TYPE_8__ {int zo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static zend_object* FUNC_5(zend_object *VAR_0)
{
 php_com_saproxy *VAR_1 = (php_com_saproxy *) VAR_0;
 php_com_saproxy *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 FUNC_3(VAR_2, VAR_1, sizeof(*VAR_2));

 FUNC_0(&VAR_2->obj->zo);
 VAR_2->indices = FUNC_4(VAR_2->dimensions, sizeof(zval *), 0);
 FUNC_1(VAR_2, VAR_1, VAR_1->dimensions);

 return &VAR_2->std;
}
