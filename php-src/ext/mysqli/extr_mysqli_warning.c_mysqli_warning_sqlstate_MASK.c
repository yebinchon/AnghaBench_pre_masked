
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_6__ {int sqlstate; } ;
typedef TYPE_2__ MYSQLI_WARNING ;
typedef TYPE_3__ MYSQLI_RESOURCE ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static
zval *FUNC_1(mysqli_object *VAR_0, zval *VAR_1)
{
 MYSQLI_WARNING *VAR_2;

 if (!VAR_0->ptr || !((MYSQLI_RESOURCE *)(VAR_0->ptr))->ptr) {
  return ((void*)0);
 }

 VAR_2 = (MYSQLI_WARNING *)((MYSQLI_RESOURCE *)(VAR_0->ptr))->ptr;
 FUNC_0(VAR_1, &VAR_2->sqlstate);
 return VAR_1;
}
