
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,scalar_t__,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(int VAR_9, const char *VAR_10)
{
 if (VAR_9 == VAR_6) {
  int VAR_11;

  VAR_11 = FUNC_4(VAR_0, VAR_9, 0);
  if (VAR_11 < 0) {
   if (VAR_7 == VAR_2) {
    FUNC_2(VAR_8, "DCCP not supported: skipping DCCP tests\n");
    return;
   } else
    FUNC_1(1, VAR_7, "failed to create a DCCP socket");
  }
  FUNC_0(VAR_11);
 }

 FUNC_2(VAR_8, "%s IPv4 ... ", VAR_10);
 FUNC_3(VAR_0, VAR_0, VAR_9, VAR_3);

 FUNC_2(VAR_8, "%s IPv6 ... ", VAR_10);
 FUNC_3(VAR_1, VAR_1, VAR_9, VAR_5);

 FUNC_2(VAR_8, "%s IPv4 mapped to IPv6 ... ", VAR_10);
 FUNC_3(VAR_0, VAR_1, VAR_9, VAR_4);
}
