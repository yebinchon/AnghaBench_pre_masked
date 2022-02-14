
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_cookie; TYPE_2__* sk_prot_creator; int sk_hash; int sk_reuseport; int sk_reuse; int sk_family; int sk_bound_dev_if; } ;
struct inet_timewait_sock {int tw_substate; TYPE_2__* tw_prot; int tw_refcnt; int tw_timer; int tw_cookie; int tw_transparent; scalar_t__ tw_ipv6only; int tw_hash; int tw_reuseport; int tw_reuse; int tw_family; int tw_dport; int tw_sport; int tw_state; int tw_num; int tw_tos; int tw_bound_dev_if; int tw_rcv_saddr; int tw_daddr; struct inet_timewait_death_row* tw_dr; } ;
struct inet_timewait_death_row {scalar_t__ sysctl_max_tw_buckets; int tw_count; } ;
struct inet_sock {int transparent; int inet_dport; int inet_sport; int inet_num; int tos; int inet_rcv_saddr; int inet_daddr; } ;
struct TYPE_4__ {int owner; TYPE_1__* twsk_prot; } ;
struct TYPE_3__ {int twsk_slab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct inet_sock* FUNC_4 (struct sock const*) ;
 struct inet_timewait_sock* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct sock const*) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct inet_timewait_sock*,int ) ;

struct inet_timewait_sock *FUNC_10(const struct sock *VAR_4,
        struct inet_timewait_death_row *VAR_5,
        const int VAR_6)
{
 struct inet_timewait_sock *VAR_7;

 if (FUNC_3(&VAR_5->tw_count) >= VAR_5->sysctl_max_tw_buckets)
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_4->sk_prot_creator->twsk_prot->twsk_slab,
         VAR_0);
 if (VAR_7) {
  const struct inet_sock *VAR_8 = FUNC_4(VAR_4);

  VAR_7->tw_dr = VAR_5;

  VAR_7->tw_daddr = VAR_8->inet_daddr;
  VAR_7->tw_rcv_saddr = VAR_8->inet_rcv_saddr;
  VAR_7->tw_bound_dev_if = VAR_4->sk_bound_dev_if;
  VAR_7->tw_tos = VAR_8->tos;
  VAR_7->tw_num = VAR_8->inet_num;
  VAR_7->tw_state = VAR_1;
  VAR_7->tw_substate = VAR_6;
  VAR_7->tw_sport = VAR_8->inet_sport;
  VAR_7->tw_dport = VAR_8->inet_dport;
  VAR_7->tw_family = VAR_4->sk_family;
  VAR_7->tw_reuse = VAR_4->sk_reuse;
  VAR_7->tw_reuseport = VAR_4->sk_reuseport;
  VAR_7->tw_hash = VAR_4->sk_hash;
  VAR_7->tw_ipv6only = 0;
  VAR_7->tw_transparent = VAR_8->transparent;
  VAR_7->tw_prot = VAR_4->sk_prot_creator;
  FUNC_2(&VAR_7->tw_cookie, FUNC_1(&VAR_4->sk_cookie));
  FUNC_9(VAR_7, FUNC_7(VAR_4));
  FUNC_8(&VAR_7->tw_timer, VAR_3, VAR_2);





  FUNC_6(&VAR_7->tw_refcnt, 0);

  FUNC_0(VAR_7->tw_prot->owner);
 }

 return VAR_7;
}
