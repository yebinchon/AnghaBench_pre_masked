
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_num; } ;
struct request_sock_queue {int synflood_warned; } ;
struct TYPE_3__ {int sysctl_tcp_syncookies; } ;
struct net {TYPE_1__ ipv4; } ;
struct TYPE_4__ {struct request_sock_queue icsk_accept_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 TYPE_2__* FUNC_1 (struct sock const*) ;
 int FUNC_2 (char*,char const*,int ,char const*) ;
 struct net* FUNC_3 (struct sock const*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static bool FUNC_5(const struct sock *VAR_2, const char *VAR_3)
{
 struct request_sock_queue *VAR_4 = &FUNC_1(VAR_2)->icsk_accept_queue;
 const char *VAR_5 = "Dropping request";
 bool VAR_6 = 0;
 struct net *VAR_7 = FUNC_3(VAR_2);
  FUNC_0(FUNC_3(VAR_2), VAR_1);

 if (!VAR_4->synflood_warned &&
     VAR_7->ipv4.sysctl_tcp_syncookies != 2 &&
     FUNC_4(&VAR_4->synflood_warned, 1) == 0)
  FUNC_2("%s: Possible SYN flooding on port %d. %s.  Check SNMP counters.\n",
         VAR_3, VAR_2->sk_num, VAR_5);

 return VAR_6;
}
