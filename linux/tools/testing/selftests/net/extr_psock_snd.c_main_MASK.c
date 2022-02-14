
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(int VAR_2, char **VAR_3)
{
 FUNC_2(VAR_2, VAR_3);

 if (FUNC_4("ip link set dev lo mtu 1500"))
  FUNC_0(1, VAR_0, "ip link set mtu");
 if (FUNC_4("ip addr add dev lo 172.17.0.1/24"))
  FUNC_0(1, VAR_0, "ip addr add");

 FUNC_3();

 FUNC_1(VAR_1, "OK\n\n");
 return 0;
}
