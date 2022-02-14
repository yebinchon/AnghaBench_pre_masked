
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_fastopen_cookie {int dummy; } ;
struct sock {int sk_priority; int sk_mark; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {int dummy; } ;
struct ipv6_pinfo {int tclass; int opt; scalar_t__ repflow; } ;
struct inet_request_sock {struct ipv6_txoptions* ipv6_opt; scalar_t__ pktopts; int ir_v6_rmt_addr; int ir_v6_loc_addr; } ;
struct flowi6 {int flowlabel; int daddr; } ;
struct TYPE_2__ {struct flowi6 ip6; } ;
struct flowi {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;
typedef enum tcp_synack_type { ____Placeholder_tcp_synack_type } tcp_synack_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *,int *) ;
 struct dst_entry* FUNC_1 (struct sock const*,struct flowi6*,struct request_sock*,int ) ;
 struct inet_request_sock* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock const*,struct sk_buff*,struct flowi6*,int ,struct ipv6_txoptions*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 struct ipv6_txoptions* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct ipv6_pinfo* FUNC_10 (struct sock const*) ;
 struct sk_buff* FUNC_11 (struct sock const*,struct dst_entry*,struct request_sock*,struct tcp_fastopen_cookie*,int) ;

__attribute__((used)) static int FUNC_12(const struct sock *VAR_2, struct dst_entry *VAR_3,
         struct flowi *VAR_4,
         struct request_sock *VAR_5,
         struct tcp_fastopen_cookie *VAR_6,
         enum tcp_synack_type VAR_7)
{
 struct inet_request_sock *VAR_8 = FUNC_2(VAR_5);
 struct ipv6_pinfo *VAR_9 = FUNC_10(VAR_2);
 struct ipv6_txoptions *VAR_10;
 struct flowi6 *VAR_11 = &VAR_4->u.ip6;
 struct sk_buff *VAR_12;
 int VAR_13 = -VAR_0;


 if (!VAR_3 && (VAR_3 = FUNC_1(VAR_2, VAR_11, VAR_5,
            VAR_1)) == ((void*)0))
  goto done;

 VAR_12 = FUNC_11(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);

 if (VAR_12) {
  FUNC_0(VAR_12, &VAR_8->ir_v6_loc_addr,
        &VAR_8->ir_v6_rmt_addr);

  VAR_11->daddr = VAR_8->ir_v6_rmt_addr;
  if (VAR_9->repflow && VAR_8->pktopts)
   VAR_11->flowlabel = FUNC_3(FUNC_5(VAR_8->pktopts));

  FUNC_8();
  VAR_10 = VAR_8->ipv6_opt;
  if (!VAR_10)
   VAR_10 = FUNC_7(VAR_9->opt);
  VAR_13 = FUNC_4(VAR_2, VAR_12, VAR_11, VAR_2->sk_mark, VAR_10, VAR_9->tclass,
          VAR_2->sk_priority);
  FUNC_9();
  VAR_13 = FUNC_6(VAR_13);
 }

done:
 return VAR_13;
}
