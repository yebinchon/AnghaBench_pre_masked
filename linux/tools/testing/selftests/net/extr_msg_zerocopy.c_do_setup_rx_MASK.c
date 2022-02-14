
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,void*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,int) ;
 int VAR_10 ;
 int FUNC_3 (int,int ,char*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int) ;

__attribute__((used)) static int FUNC_6(int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;




 if (VAR_11 == VAR_1)
  FUNC_3(1, 0, "Use PF_INET/SOCK_RAW to read");

 if (VAR_12 == VAR_2 && VAR_13 == VAR_0)
  FUNC_3(1, 0, "IPPROTO_RAW: not supported on Rx");

 VAR_14 = FUNC_5(VAR_11, VAR_12, VAR_13);
 if (VAR_14 == -1)
  FUNC_3(1, VAR_10, "socket r");

 FUNC_2(VAR_14, VAR_4, VAR_5, 1 << 21);
 FUNC_2(VAR_14, VAR_4, VAR_6, 1 << 16);
 FUNC_2(VAR_14, VAR_4, VAR_7, 1);

 if (FUNC_0(VAR_14, (void *) &VAR_9, VAR_8))
  FUNC_3(1, VAR_10, "bind");

 if (VAR_12 == VAR_3) {
  if (FUNC_4(VAR_14, 1))
   FUNC_3(1, VAR_10, "listen");
  VAR_14 = FUNC_1(VAR_14);
 }

 return VAR_14;
}
