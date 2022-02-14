
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gridsize; int * dialog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,int,int) ;
 int FUNC_7 (int ,int,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_10;
 FUNC_2(400, (VAR_9.gridsize+4)*3);
 {
  FUNC_6(VAR_5, VAR_7, VAR_2, 2, 2);
  FUNC_5("Password:");
  VAR_10 = FUNC_4(&VAR_8, 200, 1);

  FUNC_6(VAR_0, VAR_7, VAR_2, 2, 2);
  FUNC_7(0, VAR_9.gridsize, 0, 0, 0);
  {
   FUNC_6(VAR_3, VAR_1, VAR_4, 0, 0);
   if (FUNC_1("Cancel"))
    VAR_9.dialog = ((void*)0);
   FUNC_9();
   if (FUNC_1("Okay") || VAR_10 == VAR_6)
   {
    VAR_9.dialog = ((void*)0);
    FUNC_0();
   }
  }
  FUNC_8();
 }
 FUNC_3();
}
