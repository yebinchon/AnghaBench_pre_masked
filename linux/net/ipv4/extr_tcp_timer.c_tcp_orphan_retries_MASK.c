
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_err_soft; } ;
struct TYPE_3__ {int sysctl_tcp_orphan_retries; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0, bool VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0)->ipv4.sysctl_tcp_orphan_retries;


 if (VAR_0->sk_err_soft && !VAR_1)
  VAR_2 = 0;




 if (VAR_2 == 0 && VAR_1)
  VAR_2 = 8;
 return VAR_2;
}
