
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct in6_addr {size_t* s6_addr; } ;
struct TYPE_2__ {struct in6_addr v6; } ;
struct cidr {scalar_t__ family; TYPE_1__ addr; } ;


 scalar_t__ VAR_0 ;
 struct cidr* FUNC_0 (struct cidr*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_2, struct cidr *VAR_3)
{
 uint8_t VAR_4 = 15, VAR_5 = 0, VAR_6 = 0;

 struct cidr *VAR_7 = FUNC_0(VAR_2);
 struct in6_addr *VAR_8 = &VAR_7->addr.v6;
 struct in6_addr *VAR_9 = &VAR_3->addr.v6;

 if ((VAR_2->family != VAR_0) || (VAR_3->family != VAR_0))
  return 0;

 do {
  VAR_6 = !!((VAR_8->s6_addr[VAR_4] + VAR_9->s6_addr[VAR_4] + VAR_5) >= 256);
  VAR_8->s6_addr[VAR_4] += VAR_9->s6_addr[VAR_4] + VAR_5;
  VAR_5 = VAR_6;
 }
 while (VAR_4-- > 0);

 if (VAR_5)
 {
  FUNC_1(VAR_1, "overflow during 'add'\n");
  return 0;
 }

 return 1;
}
