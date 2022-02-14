
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef int MYSQL_RES ;
typedef TYPE_2__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static zval *FUNC_4(mysqli_object *VAR_3, zval *VAR_4)
{
 MYSQL_RES *VAR_5;

 FUNC_0(VAR_0);
  VAR_5 = (MYSQL_RES *)((MYSQLI_RESOURCE *)(VAR_3->ptr))->ptr;

 if (!VAR_5) {
  FUNC_2(VAR_4);
 } else {
  FUNC_1(VAR_4, FUNC_3(VAR_5) ? VAR_2:VAR_1);
 }
 return VAR_4;
}
