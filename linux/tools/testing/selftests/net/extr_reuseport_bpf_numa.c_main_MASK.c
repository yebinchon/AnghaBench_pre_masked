
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int*,int,int ,int ) ;

int FUNC_8(void)
{
 int *VAR_5, VAR_6;

 if (FUNC_5() < 0)
  FUNC_4("no numa api support\n");

 VAR_6 = FUNC_6() + 1;

 VAR_5 = FUNC_0(VAR_6, sizeof(int));
 if (!VAR_5)
  FUNC_1(1, 0, "failed to allocate array");

 FUNC_2(VAR_4, "---- IPv4 UDP ----\n");
 FUNC_7(VAR_5, VAR_6, VAR_0, VAR_2);

 FUNC_2(VAR_4, "---- IPv6 UDP ----\n");
 FUNC_7(VAR_5, VAR_6, VAR_1, VAR_2);

 FUNC_2(VAR_4, "---- IPv4 TCP ----\n");
 FUNC_7(VAR_5, VAR_6, VAR_0, VAR_3);

 FUNC_2(VAR_4, "---- IPv6 TCP ----\n");
 FUNC_7(VAR_5, VAR_6, VAR_1, VAR_3);

 FUNC_3(VAR_5);

 FUNC_2(VAR_4, "SUCCESS\n");
 return 0;
}
