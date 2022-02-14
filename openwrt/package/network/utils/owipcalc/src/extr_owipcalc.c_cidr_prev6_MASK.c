
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct in6_addr {scalar_t__* s6_addr; } ;
struct TYPE_2__ {struct in6_addr v6; } ;
struct cidr {int prefix; TYPE_1__ addr; } ;


 struct cidr* FUNC_0 (struct cidr*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_1, struct cidr *VAR_2)
{
 uint8_t VAR_3, VAR_4 = 1, VAR_5 = 0;
 struct cidr *VAR_6 = FUNC_0(VAR_1);
 struct in6_addr *VAR_7 = &VAR_6->addr.v6;

 if (VAR_2->prefix == 0)
 {
  FUNC_1(VAR_0, "underflow during 'prev'\n");
  return 0;
 }

 VAR_3 = (VAR_2->prefix - 1) / 8;

 do {
  VAR_5 = !!((VAR_7->s6_addr[VAR_3] - VAR_4) < 0);
  VAR_7->s6_addr[VAR_3] -= VAR_4;
  VAR_4 = VAR_5;
 }
 while (VAR_3-- > 0);

 if (VAR_4)
 {
  FUNC_1(VAR_0, "underflow during 'prev'\n");
  return 0;
 }

 VAR_6->prefix = VAR_2->prefix;

 return 1;
}
