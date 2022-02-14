
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_ipaddr_union {TYPE_1__* ip; scalar_t__ is_ipv6; } ;
struct TYPE_3__ {int * s6_addr32; } ;


 int FUNC_0 (char*,unsigned int const,int *,int *) ;
 int FUNC_1 (char*,unsigned int const,TYPE_1__*,TYPE_1__*) ;

void FUNC_2(char *VAR_0, const unsigned int VAR_1,
       const struct tomoyo_ipaddr_union *VAR_2)
{
 if (VAR_2->is_ipv6)
  FUNC_1(VAR_0, VAR_1, &VAR_2->ip[0], &VAR_2->ip[1]);
 else
  FUNC_0(VAR_0, VAR_1, &VAR_2->ip[0].s6_addr32[0],
      &VAR_2->ip[1].s6_addr32[0]);
}
