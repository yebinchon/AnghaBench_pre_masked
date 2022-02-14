
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_8__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
struct TYPE_10__ {int status; scalar_t__ ptr; } ;
struct TYPE_9__ {scalar_t__ mysql; } ;
typedef TYPE_2__ MY_MYSQL ;
typedef TYPE_3__ MYSQLI_RESOURCE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_2)
{
 mysqli_object *VAR_3 = FUNC_4(VAR_2);
 MYSQLI_RESOURCE *VAR_4 = (MYSQLI_RESOURCE *)VAR_3->ptr;

 if (VAR_4 && VAR_4->ptr) {
  MY_MYSQL *VAR_5 = (MY_MYSQL *)VAR_4->ptr;
  if (VAR_5->mysql) {
   FUNC_3(VAR_5, VAR_0, VAR_4->status);
  }
  FUNC_2(VAR_5);
  FUNC_0(VAR_5);
  VAR_4->status = VAR_1;
 }
 FUNC_1(VAR_2);
}
