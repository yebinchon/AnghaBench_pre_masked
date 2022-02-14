
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void
FUNC_4(int VAR_5)
{
 if ((VAR_5 & 1) == 1 && VAR_3.code != VAR_0)
 {
  FUNC_2();
  FUNC_0(VAR_1, "\nif (sqlca.sqlcode == ECPG_NOT_FOUND) ");
  FUNC_3(&VAR_3);
 }
 if (VAR_4.code != VAR_0)
 {
  FUNC_2();
  FUNC_0(VAR_1, "\nif (sqlca.sqlwarn[0] == 'W') ");
  FUNC_3(&VAR_4);
 }
 if (VAR_2.code != VAR_0)
 {
  FUNC_2();
  FUNC_0(VAR_1, "\nif (sqlca.sqlcode < 0) ");
  FUNC_3(&VAR_2);
 }

 if ((VAR_5 & 2) == 2)
  FUNC_1('}', VAR_1);

 FUNC_2();
}
