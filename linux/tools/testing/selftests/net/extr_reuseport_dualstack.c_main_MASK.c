
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int*,int,int ) ;

int FUNC_4(void)
{
 int VAR_5[32], VAR_6;

 FUNC_2(VAR_4, "---- UDP IPv4 created before IPv6 ----\n");
 FUNC_0(VAR_0, VAR_2, VAR_5, 5);
 FUNC_0(VAR_1, VAR_2, &(VAR_5[5]), 5);
 FUNC_3(VAR_5, 10, VAR_2);
 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);

 FUNC_2(VAR_4, "---- UDP IPv6 created before IPv4 ----\n");
 FUNC_0(VAR_1, VAR_2, VAR_5, 5);
 FUNC_0(VAR_0, VAR_2, &(VAR_5[5]), 5);
 FUNC_3(VAR_5, 10, VAR_2);
 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);




 FUNC_2(VAR_4, "---- UDP IPv4 created before IPv6 (large) ----\n");
 FUNC_0(VAR_0, VAR_2, VAR_5, 16);
 FUNC_0(VAR_1, VAR_2, &(VAR_5[16]), 16);
 FUNC_3(VAR_5, 32, VAR_2);
 for (VAR_6 = 0; VAR_6 < 32; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);

 FUNC_2(VAR_4, "---- UDP IPv6 created before IPv4 (large) ----\n");
 FUNC_0(VAR_1, VAR_2, VAR_5, 16);
 FUNC_0(VAR_0, VAR_2, &(VAR_5[16]), 16);
 FUNC_3(VAR_5, 32, VAR_2);
 for (VAR_6 = 0; VAR_6 < 32; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);

 FUNC_2(VAR_4, "---- TCP IPv4 created before IPv6 ----\n");
 FUNC_0(VAR_0, VAR_3, VAR_5, 5);
 FUNC_0(VAR_1, VAR_3, &(VAR_5[5]), 5);
 FUNC_3(VAR_5, 10, VAR_3);
 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);

 FUNC_2(VAR_4, "---- TCP IPv6 created before IPv4 ----\n");
 FUNC_0(VAR_1, VAR_3, VAR_5, 5);
 FUNC_0(VAR_0, VAR_3, &(VAR_5[5]), 5);
 FUNC_3(VAR_5, 10, VAR_3);
 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6)
  FUNC_1(VAR_5[VAR_6]);

 FUNC_2(VAR_4, "SUCCESS\n");
 return 0;
}
