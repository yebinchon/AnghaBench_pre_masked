
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int sk_uid; } ;
struct request_sock {int dummy; } ;
struct ipv6_pinfo {int opt; } ;
struct inet_request_sock {int ir_num; int ir_rmt_port; int ir_mark; int ir_iif; int ir_v6_loc_addr; int ir_v6_rmt_addr; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_uid; int fl6_sport; int fl6_dport; int flowi6_mark; int flowi6_oif; int saddr; int daddr; int flowi6_proto; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 struct in6_addr* FUNC_1 (struct flowi6*,int ,struct in6_addr*) ;
 int FUNC_2 (struct flowi6*) ;
 int FUNC_3 (int ) ;
 struct ipv6_pinfo* FUNC_4 (struct sock const*) ;
 struct inet_request_sock* FUNC_5 (struct request_sock const*) ;
 struct dst_entry* FUNC_6 (struct sock const*,struct flowi6*,struct in6_addr*) ;
 int FUNC_7 (struct flowi6*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct request_sock const*,int ) ;

struct dst_entry *FUNC_12(const struct sock *VAR_0,
          struct flowi6 *VAR_1,
          const struct request_sock *VAR_2,
          u8 VAR_3)
{
 struct inet_request_sock *VAR_4 = FUNC_5(VAR_2);
 const struct ipv6_pinfo *VAR_5 = FUNC_4(VAR_0);
 struct in6_addr *VAR_6, VAR_7;
 struct dst_entry *VAR_8;

 FUNC_7(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->flowi6_proto = VAR_3;
 VAR_1->daddr = VAR_4->ir_v6_rmt_addr;
 FUNC_9();
 VAR_6 = FUNC_1(VAR_1, FUNC_8(VAR_5->opt), &VAR_7);
 FUNC_10();
 VAR_1->saddr = VAR_4->ir_v6_loc_addr;
 VAR_1->flowi6_oif = VAR_4->ir_iif;
 VAR_1->flowi6_mark = VAR_4->ir_mark;
 VAR_1->fl6_dport = VAR_4->ir_rmt_port;
 VAR_1->fl6_sport = FUNC_3(VAR_4->ir_num);
 VAR_1->flowi6_uid = VAR_0->sk_uid;
 FUNC_11(VAR_2, FUNC_2(VAR_1));

 VAR_8 = FUNC_6(VAR_0, VAR_1, VAR_6);
 if (FUNC_0(VAR_8))
  return ((void*)0);

 return VAR_8;
}
