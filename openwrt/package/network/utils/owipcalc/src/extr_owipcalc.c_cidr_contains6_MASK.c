
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct in6_addr {int* s6_addr; } ;
struct TYPE_2__ {struct in6_addr v6; } ;
struct cidr {int prefix; TYPE_1__ addr; } ;


 struct cidr* FUNC_0 (struct cidr*) ;
 int FUNC_1 (int**,int**,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct cidr *VAR_1, struct cidr *VAR_2)
{
 struct cidr *VAR_3 = FUNC_0(VAR_1);
 struct in6_addr *VAR_4 = &VAR_3->addr.v6;
 struct in6_addr *VAR_5 = &VAR_2->addr.v6;
 uint8_t VAR_6 = (128 - VAR_3->prefix) / 8;
 uint8_t VAR_7 = ~((1 << ((128 - VAR_3->prefix) % 8)) - 1);
 uint8_t VAR_8 = VAR_4->s6_addr[15-VAR_6] & VAR_7;
 uint8_t VAR_9 = VAR_5->s6_addr[15-VAR_6] & VAR_7;

 if (VAR_0)
  FUNC_2(" ");

 if ((VAR_2->prefix >= VAR_3->prefix) && (VAR_8 == VAR_9) &&
     ((VAR_6 == 15) || !FUNC_1(&VAR_4->s6_addr, &VAR_5->s6_addr, 15-VAR_6)))
 {
  FUNC_2("1");
  return 1;
 }
 else
 {
  FUNC_2("0");
  return 0;
 }
}
