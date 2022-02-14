
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {unsigned int sysctl_tcp_fastopen_blackhole_timeout; scalar_t__ tfo_active_disable_stamp; int tfo_active_disable_times; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {int syn_fastopen_ch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

bool FUNC_5(struct sock *VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_2)->ipv4.sysctl_tcp_fastopen_blackhole_timeout;
 int VAR_4 = FUNC_0(&FUNC_2(VAR_2)->ipv4.tfo_active_disable_times);
 unsigned long VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;


 VAR_6 = 1 << FUNC_1(VAR_4 - 1, 6);
 VAR_5 = VAR_6 * VAR_3 * VAR_0;
 if (FUNC_4(VAR_1, FUNC_2(VAR_2)->ipv4.tfo_active_disable_stamp + VAR_5))
  return 1;




 FUNC_3(VAR_2)->syn_fastopen_ch = 1;
 return 0;
}
