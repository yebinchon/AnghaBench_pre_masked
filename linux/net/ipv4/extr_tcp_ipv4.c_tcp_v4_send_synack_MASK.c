
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_fastopen_cookie {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int ireq_opt; int ir_rmt_addr; int ir_loc_addr; } ;
struct flowi4 {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef enum tcp_synack_type { ____Placeholder_tcp_synack_type } tcp_synack_type ;


 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_1 (struct sock const*,struct flowi4*,struct request_sock*) ;
 struct inet_request_sock* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (struct sk_buff*,struct sock const*,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct sk_buff* FUNC_8 (struct sock const*,struct dst_entry*,struct request_sock*,struct tcp_fastopen_cookie*,int) ;

__attribute__((used)) static int FUNC_9(const struct sock *VAR_0, struct dst_entry *VAR_1,
         struct flowi *VAR_2,
         struct request_sock *VAR_3,
         struct tcp_fastopen_cookie *VAR_4,
         enum tcp_synack_type VAR_5)
{
 const struct inet_request_sock *VAR_6 = FUNC_2(VAR_3);
 struct flowi4 VAR_7;
 int VAR_8 = -1;
 struct sk_buff *VAR_9;


 if (!VAR_1 && (VAR_1 = FUNC_1(VAR_0, &VAR_7, VAR_3)) == ((void*)0))
  return -1;

 VAR_9 = FUNC_8(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);

 if (VAR_9) {
  FUNC_0(VAR_9, VAR_6->ir_loc_addr, VAR_6->ir_rmt_addr);

  FUNC_6();
  VAR_8 = FUNC_3(VAR_9, VAR_0, VAR_6->ir_loc_addr,
         VAR_6->ir_rmt_addr,
         FUNC_5(VAR_6->ireq_opt));
  FUNC_7();
  VAR_8 = FUNC_4(VAR_8);
 }

 return VAR_8;
}
