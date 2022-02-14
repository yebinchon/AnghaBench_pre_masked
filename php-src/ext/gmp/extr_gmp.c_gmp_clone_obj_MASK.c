
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_11__ {TYPE_1__ std; int num; } ;
typedef TYPE_2__ gmp_object ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static zend_object *FUNC_4(zend_object *VAR_0)
{
 gmp_object *VAR_1 = FUNC_0(VAR_0);
 gmp_object *VAR_2 = FUNC_0(FUNC_1(VAR_0->ce));

 FUNC_3( &VAR_2->std, &VAR_1->std);

 FUNC_2(VAR_2->num, VAR_1->num);

 return &VAR_2->std;
}
