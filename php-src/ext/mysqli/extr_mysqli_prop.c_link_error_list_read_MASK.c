
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zval ;
typedef int zend_llist_position ;
struct TYPE_13__ {scalar_t__ ptr; } ;
typedef TYPE_3__ mysqli_object ;
struct TYPE_17__ {TYPE_2__* data; } ;
struct TYPE_16__ {scalar_t__ ptr; } ;
struct TYPE_15__ {int error; int sqlstate; scalar_t__ error_no; } ;
struct TYPE_14__ {TYPE_7__* mysql; } ;
struct TYPE_12__ {TYPE_1__* error_info; } ;
struct TYPE_11__ {int error_list; } ;
typedef TYPE_4__ MY_MYSQL ;
typedef TYPE_5__ MYSQLND_ERROR_LIST_ELEMENT ;
typedef TYPE_6__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,scalar_t__) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;

__attribute__((used)) static zval *FUNC_11(mysqli_object *VAR_1, zval *VAR_2)
{
 MY_MYSQL *VAR_3;

 FUNC_0(VAR_0);

  VAR_3 = (MY_MYSQL *)((MYSQLI_RESOURCE *)(VAR_1->ptr))->ptr;

 if (VAR_3) {
  FUNC_5(VAR_2);
  if (FUNC_6(VAR_3->mysql)) {
   zval VAR_4;
   FUNC_5(&VAR_4);
   FUNC_2(&VAR_4, "errno", sizeof("errno") - 1, FUNC_6(VAR_3->mysql));
   FUNC_3(&VAR_4, "sqlstate", sizeof("sqlstate") - 1, FUNC_8(VAR_3->mysql));
   FUNC_3(&VAR_4, "error", sizeof("error") - 1, FUNC_7(VAR_3->mysql));
   FUNC_4(VAR_2, &VAR_4);
  }

 } else {
  FUNC_1(VAR_2);
 }

 return VAR_2;
}
