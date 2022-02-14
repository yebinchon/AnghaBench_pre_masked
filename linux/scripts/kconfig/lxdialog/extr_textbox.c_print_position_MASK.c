
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int atr; } ;
struct TYPE_4__ {TYPE_1__ position_indicator; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static void FUNC_7(WINDOW * VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_4, VAR_2.position_indicator.atr);
 FUNC_4(VAR_4, VAR_2.position_indicator.atr & VAR_0);
 VAR_5 = (VAR_3 - VAR_1) * 100 / FUNC_2(VAR_1);
 FUNC_5(VAR_4, FUNC_1(VAR_4) - 3, FUNC_0(VAR_4) - 9);
 FUNC_6(VAR_4, "(%3d%%)", VAR_5);
}
