
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in6_addr {int * s6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 int FUNC_3 (int **,int *,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static u8 FUNC_5(u8 **VAR_4,
       const struct in6_addr *VAR_5)
{
 u8 VAR_6;

 if (FUNC_2(VAR_5)) {
  FUNC_4("compressed to 1 octet\n");

  FUNC_3(VAR_4, &VAR_5->s6_addr[15], 1);
  VAR_6 = VAR_3;
 } else if (FUNC_0(VAR_5)) {
  FUNC_4("compressed to 4 octets\n");

  FUNC_3(VAR_4, &VAR_5->s6_addr[1], 1);
  FUNC_3(VAR_4, &VAR_5->s6_addr[13], 3);
  VAR_6 = VAR_2;
 } else if (FUNC_1(VAR_5)) {
  FUNC_4("compressed to 6 octets\n");

  FUNC_3(VAR_4, &VAR_5->s6_addr[1], 1);
  FUNC_3(VAR_4, &VAR_5->s6_addr[11], 5);
  VAR_6 = VAR_1;
 } else {
  FUNC_4("using full address\n");
  FUNC_3(VAR_4, VAR_5->s6_addr, 16);
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
