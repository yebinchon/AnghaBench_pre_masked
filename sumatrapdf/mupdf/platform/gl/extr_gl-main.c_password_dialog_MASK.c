
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gridsize; scalar_t__ key; int * dialog; int focus; } ;
struct TYPE_4__ {int text; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_11 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ,int,int) ;
 int FUNC_9 (int ,int,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void)
{
 int VAR_12;
 FUNC_4(400, (VAR_11.gridsize+4)*3);
 {
  FUNC_8(VAR_6, VAR_8, VAR_3, 2, 2);
  FUNC_7("Password:");
  VAR_12 = FUNC_6(&VAR_9, 200, 1);

  FUNC_8(VAR_0, VAR_8, VAR_3, 2, 2);
  FUNC_9(0, VAR_11.gridsize, 0, 0, 0);
  {
   FUNC_8(VAR_4, VAR_2, VAR_5, 0, 0);
   if (FUNC_3("Cancel") || (!VAR_11.focus && VAR_11.key == VAR_1))
    FUNC_0();
   FUNC_11();
   if (FUNC_3("Okay") || VAR_12 == VAR_7)
   {
    VAR_10 = VAR_9.text;
    VAR_11.dialog = ((void*)0);
    FUNC_1();
    FUNC_2();
   }
  }
  FUNC_10();
 }
 FUNC_5();
}
