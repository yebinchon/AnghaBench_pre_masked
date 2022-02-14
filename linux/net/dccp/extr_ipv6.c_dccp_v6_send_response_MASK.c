
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_priority; int sk_mark; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {int dummy; } ;
struct ipv6_pinfo {int tclass; int opt; } ;
struct inet_request_sock {struct ipv6_txoptions* ipv6_opt; int ir_v6_rmt_addr; int ir_v6_loc_addr; int ir_num; int ir_rmt_port; int ir_iif; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int daddr; int fl6_sport; int fl6_dport; int flowi6_oif; scalar_t__ flowlabel; int saddr; int flowi6_proto; } ;
struct dst_entry {int dummy; } ;
struct dccp_hdr {int dccph_checksum; } ;
typedef int fl6 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dccp_hdr* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock const*,struct dst_entry*,struct request_sock*) ;
 int FUNC_4 (struct sk_buff*,int *,int *) ;
 int FUNC_5 (struct dst_entry*) ;
 struct in6_addr* FUNC_6 (struct flowi6*,struct ipv6_txoptions*,struct in6_addr*) ;
 int FUNC_7 (struct flowi6*) ;
 int FUNC_8 (int ) ;
 struct ipv6_pinfo* FUNC_9 (struct sock const*) ;
 struct inet_request_sock* FUNC_10 (struct request_sock*) ;
 struct dst_entry* FUNC_11 (struct sock const*,struct flowi6*,struct in6_addr*) ;
 int FUNC_12 (struct sock const*,struct sk_buff*,struct flowi6*,int ,struct ipv6_txoptions*,int ,int ) ;
 int FUNC_13 (struct flowi6*,int ,int) ;
 int FUNC_14 (int) ;
 struct ipv6_txoptions* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct request_sock*,int ) ;

__attribute__((used)) static int FUNC_19(const struct sock *VAR_1, struct request_sock *VAR_2)
{
 struct inet_request_sock *VAR_3 = FUNC_10(VAR_2);
 struct ipv6_pinfo *VAR_4 = FUNC_9(VAR_1);
 struct sk_buff *VAR_5;
 struct in6_addr *VAR_6, VAR_7;
 struct flowi6 VAR_8;
 int VAR_9 = -1;
 struct dst_entry *VAR_10;

 FUNC_13(&VAR_8, 0, sizeof(VAR_8));
 VAR_8 = VAR_0;
 VAR_8 = VAR_3->ir_v6_rmt_addr;
 VAR_8 = VAR_3->ir_v6_loc_addr;
 VAR_8 = 0;
 VAR_8 = VAR_3->ir_iif;
 VAR_8 = VAR_3->ir_rmt_port;
 VAR_8 = FUNC_8(VAR_3->ir_num);
 FUNC_18(VAR_2, FUNC_7(&VAR_8));


 FUNC_16();
 VAR_6 = FUNC_6(&VAR_8, FUNC_15(VAR_4->opt), &VAR_7);
 FUNC_17();

 VAR_10 = FUNC_11(VAR_1, &VAR_8, VAR_6);
 if (FUNC_0(VAR_10)) {
  VAR_9 = FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
  goto done;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_10, VAR_2);
 if (VAR_5 != ((void*)0)) {
  struct dccp_hdr *VAR_11 = FUNC_2(VAR_5);
  struct ipv6_txoptions *VAR_12;

  VAR_11->dccph_checksum = FUNC_4(VAR_5,
        &VAR_3->ir_v6_loc_addr,
        &VAR_3->ir_v6_rmt_addr);
  VAR_8 = VAR_3->ir_v6_rmt_addr;
  FUNC_16();
  VAR_12 = VAR_3->ipv6_opt;
  if (!VAR_12)
   VAR_12 = FUNC_15(VAR_4->opt);
  VAR_9 = FUNC_12(VAR_1, VAR_5, &VAR_8, VAR_1->sk_mark, VAR_12, VAR_4->tclass,
          VAR_1->sk_priority);
  FUNC_17();
  VAR_9 = FUNC_14(VAR_9);
 }

done:
 FUNC_5(VAR_10);
 return VAR_9;
}
