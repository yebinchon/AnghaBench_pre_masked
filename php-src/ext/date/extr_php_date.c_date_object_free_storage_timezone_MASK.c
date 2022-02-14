
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {int abbr; } ;
struct TYPE_6__ {TYPE_1__ z; } ;
struct TYPE_7__ {scalar_t__ type; int std; TYPE_2__ tzi; } ;
typedef TYPE_3__ php_timezone_obj ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_1)
{
 php_timezone_obj *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->type == VAR_0) {
  FUNC_1(VAR_2->tzi.z.abbr);
 }
 FUNC_2(&VAR_2->std);
}
