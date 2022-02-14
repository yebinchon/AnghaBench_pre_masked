
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct in6_addr*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, int VAR_3)
{
 int VAR_4;
 struct in6_addr VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_2, &VAR_5);

 if (VAR_4 != 1) {
  if (VAR_3 == VAR_1)
   return 1;
  return 0;
 }

 FUNC_1(VAR_2, "%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:"
  "%02x%02x:%02x%02x:%02x%02x",
  (int)VAR_5.s6_addr[0], (int)VAR_5.s6_addr[1],
  (int)VAR_5.s6_addr[2], (int)VAR_5.s6_addr[3],
  (int)VAR_5.s6_addr[4], (int)VAR_5.s6_addr[5],
  (int)VAR_5.s6_addr[6], (int)VAR_5.s6_addr[7],
  (int)VAR_5.s6_addr[8], (int)VAR_5.s6_addr[9],
  (int)VAR_5.s6_addr[10], (int)VAR_5.s6_addr[11],
  (int)VAR_5.s6_addr[12], (int)VAR_5.s6_addr[13],
  (int)VAR_5.s6_addr[14], (int)VAR_5.s6_addr[15]);

 return 1;

}
