
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ v4; } ;
struct cidr {int prefix; TYPE_2__ addr; } ;


 struct cidr* FUNC_0 (struct cidr*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_0, struct cidr *VAR_1)
{
 struct cidr *VAR_2 = FUNC_0(VAR_0);

 VAR_2->prefix = VAR_1->prefix;
 VAR_2->addr.v4.s_addr += FUNC_1(1 << (32 - VAR_1->prefix));

 return 1;
}
