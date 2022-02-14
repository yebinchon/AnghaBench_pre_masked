
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_4__ {TYPE_1__ nameseq; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; TYPE_2__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct sockaddr_tipc *VAR_4)
{
 if (VAR_4->family != VAR_0)
  return 0;
 if (VAR_4->addrtype == VAR_2)
  return (VAR_4->addr.nameseq.lower <= VAR_4->addr.nameseq.upper);
 return (VAR_4->addrtype == VAR_1 ||
  VAR_4->addrtype == VAR_3);
}
