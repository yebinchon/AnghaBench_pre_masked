
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int,int ,int ) ;

int FUNC_6(void)
{
 int *VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8 <= 0)
  FUNC_1(1, VAR_5, "failed counting cpus");

 VAR_7 = FUNC_0(VAR_8, sizeof(int));
 if (!VAR_7)
  FUNC_1(1, 0, "failed to allocate array");

 FUNC_2(VAR_6, "---- IPv4 UDP ----\n");
 FUNC_5(VAR_7, VAR_8, VAR_0, VAR_2);

 FUNC_2(VAR_6, "---- IPv6 UDP ----\n");
 FUNC_5(VAR_7, VAR_8, VAR_1, VAR_2);

 FUNC_2(VAR_6, "---- IPv4 TCP ----\n");
 FUNC_5(VAR_7, VAR_8, VAR_0, VAR_3);

 FUNC_2(VAR_6, "---- IPv6 TCP ----\n");
 FUNC_5(VAR_7, VAR_8, VAR_1, VAR_3);

 FUNC_3(VAR_7);

 FUNC_2(VAR_6, "SUCCESS\n");
 return 0;
}
