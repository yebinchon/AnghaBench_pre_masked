
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;

int FUNC_4(void)
{
 int VAR_3;
 int VAR_4, VAR_5;

 FUNC_2(VAR_2, "Opening 127.0.0.1:%d\n", VAR_0);
 VAR_3 = FUNC_3(0, 0);
 if (VAR_3 < 0)
  FUNC_1(1, VAR_1, "Couldn't open listen socket");
 FUNC_2(VAR_2, "Opening INADDR_ANY:%d\n", VAR_0);
 VAR_4 = FUNC_3(0, 1);
 if (VAR_4 >= 0)
  FUNC_1(1, 0, "Was allowed to create an ipv4 reuseport on a already bound non-reuseport socket");
 FUNC_2(VAR_2, "Opening in6addr_any:%d\n", VAR_0);
 VAR_4 = FUNC_3(1, 1);
 if (VAR_4 < 0)
  FUNC_1(1, VAR_1, "Couldn't open ipv6 reuseport");
 FUNC_2(VAR_2, "Opening INADDR_ANY:%d\n", VAR_0);
 VAR_5 = FUNC_3(0, 1);
 if (VAR_5 >= 0)
  FUNC_1(1, 0, "Was allowed to create an ipv4 reuseport on a already bound non-reuseport socket");
 FUNC_0(VAR_4);
 FUNC_2(VAR_2, "Opening INADDR_ANY:%d after closing ipv6 socket\n", VAR_0);
 VAR_4 = FUNC_3(0, 1);
 if (VAR_4 >= 0)
  FUNC_1(1, 0, "Was allowed to create an ipv4 reuseport on an already bound non-reuseport socket with no ipv6");
 FUNC_2(VAR_2, "Success");
 return 0;
}
