
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
struct TYPE_6__ {int stmt; } ;
typedef TYPE_2__ MY_STMT ;
typedef TYPE_3__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static zval *FUNC_4(mysqli_object *VAR_1, zval *VAR_2)
{
 MY_STMT *VAR_3;

 FUNC_0(VAR_0);

  VAR_3 = (MY_STMT*)((MYSQLI_RESOURCE *)(VAR_1->ptr))->ptr;

 if (!VAR_3) {
  FUNC_2(VAR_2);
 } else {
  FUNC_1(VAR_2, FUNC_3(VAR_3->stmt));
 }
 return VAR_2;
}
