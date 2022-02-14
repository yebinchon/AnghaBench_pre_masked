
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;
typedef int one ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,void*,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,int,int ) ;
 int VAR_10 ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,char**) ;
 scalar_t__ FUNC_11 (int,int ,int ,int const*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_11 ;

int FUNC_13(int VAR_12, char **VAR_13)
{
 struct sockaddr_in6 VAR_14 = {
  .sin6_family = VAR_0,
  .sin6_port = FUNC_9(8000),
  .sin6_addr = VAR_2,
 };
 const int VAR_15 = 1;
 int VAR_16, VAR_17;

 FUNC_10(VAR_12, VAR_13);

 VAR_16 = FUNC_12(VAR_6, VAR_7, 0);
 if (VAR_16 == -1)
  FUNC_5(1, VAR_10, "socket t");

 VAR_17 = FUNC_12(VAR_6, VAR_7, 0);
 if (VAR_17 == -1)
  FUNC_5(1, VAR_10, "socket r");

 if (FUNC_2(VAR_16, (void *)&VAR_14, sizeof(VAR_14)))
  FUNC_5(1, VAR_10, "connect");
 if (FUNC_0(VAR_17, (void *)&VAR_14, sizeof(VAR_14)))
  FUNC_5(1, VAR_10, "bind");

 FUNC_6(VAR_16, VAR_9, VAR_5, VAR_4);

 if (FUNC_11(VAR_17, VAR_8, VAR_3, &VAR_15, sizeof(VAR_15)))
  FUNC_5(1, VAR_10, "setsockopt flowinfo");

 if (FUNC_8()) {
  FUNC_7(VAR_11, "send no label: recv auto flowlabel\n");
  FUNC_4(VAR_16, 0, 0);
  FUNC_3(VAR_17, 1, VAR_1);
 } else {
  FUNC_7(VAR_11, "send no label: recv no label (auto off)\n");
  FUNC_4(VAR_16, 0, 0);
  FUNC_3(VAR_17, 0, 0);
 }

 FUNC_7(VAR_11, "send label\n");
 FUNC_4(VAR_16, 1, VAR_9);
 FUNC_3(VAR_17, 1, VAR_9);

 if (FUNC_1(VAR_17))
  FUNC_5(1, VAR_10, "close r");
 if (FUNC_1(VAR_16))
  FUNC_5(1, VAR_10, "close t");

 return 0;
}
