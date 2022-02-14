
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int sysctl_tcp_recovery; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock const*) ;

__attribute__((used)) static bool FUNC_1(const struct sock *VAR_1)
{
 return FUNC_0(VAR_1)->ipv4.sysctl_tcp_recovery & VAR_0;
}
