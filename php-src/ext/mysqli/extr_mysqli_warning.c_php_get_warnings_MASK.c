
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef int * MYSQL_ROW ;
typedef int MYSQL_RES ;
typedef TYPE_1__ MYSQLI_WARNING ;
typedef int MYSQL ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

MYSQLI_WARNING *FUNC_6(MYSQL *VAR_0)
{
 MYSQLI_WARNING *VAR_1, *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 MYSQL_RES *VAR_4;
 MYSQL_ROW VAR_5;

 if (FUNC_3(VAR_0, "SHOW WARNINGS", 13)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_0);

 while ((VAR_5 = FUNC_1(VAR_4))) {
  VAR_1 = FUNC_5(VAR_5[2], FUNC_0(VAR_5[1]));
  if (!VAR_2) {
   VAR_2 = VAR_1;
  }
  if (VAR_3) {
   VAR_3->next = VAR_1;
  }
  VAR_3 = VAR_1;
 }
 FUNC_2(VAR_4);
 return VAR_2;
}
