
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
struct TYPE_6__ {int mysql; } ;
typedef TYPE_2__ MY_MYSQL ;
typedef TYPE_3__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static zval *FUNC_6(mysqli_object *VAR_4, zval *VAR_5)
{
 MY_MYSQL *VAR_6;
 my_ulonglong VAR_7;

 FUNC_0(VAR_1);

  VAR_6 = (MY_MYSQL *)((MYSQLI_RESOURCE *)(VAR_4->ptr))->ptr;

 if (!VAR_6) {
  FUNC_3(VAR_5);
 } else {
  FUNC_0(VAR_2);

  VAR_7 = FUNC_4(VAR_6->mysql);

  if (VAR_7 == (my_ulonglong) -1) {
   FUNC_1(VAR_5, -1);
   return VAR_5;
  }

  if (VAR_7 < VAR_3) {
   FUNC_1(VAR_5, (zend_long) VAR_7);
  } else {
   FUNC_2(VAR_5, FUNC_5(0, VAR_0, VAR_7));
  }
 }
 return VAR_5;
}
