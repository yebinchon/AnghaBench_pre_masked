
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
typedef scalar_t__ my_ulonglong ;
struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_6__ {int stmt; } ;
typedef TYPE_2__ MY_STMT ;
typedef TYPE_3__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static zval *FUNC_6(mysqli_object *VAR_3, zval *VAR_4)
{
 MY_STMT *VAR_5;
 my_ulonglong VAR_6;

 FUNC_0(VAR_1);

  VAR_5 = (MY_STMT *)((MYSQLI_RESOURCE *)(VAR_3->ptr))->ptr;

 if (!VAR_5) {
  FUNC_3(VAR_4);
 } else {
  VAR_6 = FUNC_4(VAR_5->stmt);

  if (VAR_6 == (my_ulonglong) -1) {
   FUNC_1(VAR_4, -1);
   return VAR_4;
  }

  if (VAR_6 < VAR_2) {
   FUNC_1(VAR_4, (zend_long) VAR_6);
  } else {
   FUNC_2(VAR_4, FUNC_5(0, VAR_0, VAR_6));
  }
 }
 return VAR_4;
}
