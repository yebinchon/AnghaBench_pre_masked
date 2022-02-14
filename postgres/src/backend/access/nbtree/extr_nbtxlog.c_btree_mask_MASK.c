
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ btpo_cycleid; int btpo_flags; } ;
typedef int Page ;
typedef int BlockNumber ;
typedef TYPE_1__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(char *VAR_2, BlockNumber VAR_3)
{
 Page VAR_4 = (Page) VAR_2;
 BTPageOpaque VAR_5;

 FUNC_6(VAR_4);

 FUNC_5(VAR_4);
 FUNC_7(VAR_4);

 VAR_5 = (BTPageOpaque) FUNC_2(VAR_4);

 if (FUNC_0(VAR_5))
 {




  FUNC_4(VAR_4);
 }
 else if (FUNC_1(VAR_5))
 {





  FUNC_3(VAR_4);
 }





 VAR_5->btpo_flags &= ~VAR_0;






 VAR_5->btpo_flags &= ~VAR_1;
 VAR_5->btpo_cycleid = 0;
}
