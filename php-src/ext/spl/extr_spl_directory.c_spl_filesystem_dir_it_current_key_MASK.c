
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_5__ {int index; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ spl_filesystem_object ;
typedef int spl_filesystem_iterator ;


 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zend_object_iterator *VAR_0, zval *VAR_1)
{
 spl_filesystem_object *VAR_2 = FUNC_1((spl_filesystem_iterator *)VAR_0);

 FUNC_0(VAR_1, VAR_2->u.dir.index);
}
