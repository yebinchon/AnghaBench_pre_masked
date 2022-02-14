
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {int reord_seen; scalar_t__ packets_out; int reordering; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int sysctl_tcp_max_reordering; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2, const int VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_2);

 if (!FUNC_3(VAR_4))
  return;

 VAR_4->reordering = FUNC_1(VAR_1, VAR_4->packets_out + VAR_3,
          FUNC_2(VAR_2)->ipv4.sysctl_tcp_max_reordering);
 VAR_4->reord_seen++;
 FUNC_0(FUNC_2(VAR_2), VAR_0);
}
