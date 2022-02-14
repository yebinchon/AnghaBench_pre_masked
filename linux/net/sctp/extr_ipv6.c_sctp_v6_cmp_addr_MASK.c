
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sin6_port; } ;
union sctp_addr {TYPE_1__ v6; } ;


 scalar_t__ FUNC_0 (union sctp_addr const*,union sctp_addr const*) ;

__attribute__((used)) static int FUNC_1(const union sctp_addr *VAR_0,
       const union sctp_addr *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) &&
        VAR_0->v6.sin6_port == VAR_1->v6.sin6_port;
}
