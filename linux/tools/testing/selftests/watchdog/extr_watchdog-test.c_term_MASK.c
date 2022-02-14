
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 int VAR_4 = FUNC_3(VAR_1, &VAR_2, 1);

 FUNC_0(VAR_1);
 if (VAR_4 < 0)
  FUNC_2("\nStopping watchdog ticks failed (%d)...\n", VAR_0);
 else
  FUNC_2("\nStopping watchdog ticks...\n");
 FUNC_1(0);
}
