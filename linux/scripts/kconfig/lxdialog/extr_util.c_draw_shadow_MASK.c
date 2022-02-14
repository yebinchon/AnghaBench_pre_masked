
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int atr; } ;
struct TYPE_4__ {TYPE_1__ shadow; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(WINDOW * VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 if (FUNC_0()) {
  FUNC_2(VAR_2, VAR_1.shadow.atr);
  FUNC_4(VAR_2, VAR_3 + VAR_5, VAR_4 + 2);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_1(VAR_2, FUNC_3(VAR_2) & VAR_0);
  for (VAR_7 = VAR_3 + 1; VAR_7 < VAR_3 + VAR_5 + 1; VAR_7++) {
   FUNC_4(VAR_2, VAR_7, VAR_4 + VAR_6);
   FUNC_1(VAR_2, FUNC_3(VAR_2) & VAR_0);
   FUNC_1(VAR_2, FUNC_3(VAR_2) & VAR_0);
  }
  FUNC_5(VAR_2);
 }
}
