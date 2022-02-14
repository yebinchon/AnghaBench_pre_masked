
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hasho_flag; } ;
typedef int Page ;
typedef TYPE_1__* HashPageOpaque ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(char *VAR_5, BlockNumber VAR_6)
{
 Page VAR_7 = (Page) VAR_5;
 HashPageOpaque VAR_8;
 int VAR_9;

 FUNC_4(VAR_7);

 FUNC_3(VAR_7);
 FUNC_5(VAR_7);

 VAR_8 = (HashPageOpaque) FUNC_0(VAR_7);

 VAR_9 = VAR_8->hasho_flag & VAR_3;
 if (VAR_9 == VAR_4)
 {



  FUNC_2(VAR_7);
 }
 else if (VAR_9 == VAR_0 ||
    VAR_9 == VAR_1)
 {





  FUNC_1(VAR_7);
 }





 VAR_8->hasho_flag &= ~VAR_2;
}
