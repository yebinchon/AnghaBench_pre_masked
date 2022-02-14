
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_sock {int * inet_opt; int inet_id; int mc_ttl; int mc_index; int inet_saddr; } ;
struct inet_request_sock {int * ireq_opt; int ir_loc_addr; int ir_rmt_addr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sock const*,struct sock*) ;
 struct sock* FUNC_3 (struct sock const*,struct request_sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct dst_entry*) ;
 int FUNC_7 (struct dst_entry*) ;
 int FUNC_8 (struct sock*) ;
 struct dst_entry* FUNC_9 (struct sock const*,struct sock*,struct request_sock*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_12 (struct request_sock*) ;
 struct inet_sock* FUNC_13 (struct sock*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct request_sock*) ;
 scalar_t__ FUNC_18 (struct sock const*) ;
 int FUNC_19 (struct sock*,int ) ;
 int FUNC_20 (struct sock*,int ) ;
 int FUNC_21 (struct sock*,struct dst_entry*) ;
 int FUNC_22 (struct sock const*) ;

struct sock *FUNC_23(const struct sock *VAR_2,
           struct sk_buff *VAR_3,
           struct request_sock *VAR_4,
           struct dst_entry *VAR_5,
           struct request_sock *VAR_6,
           bool *VAR_7)
{
 struct inet_request_sock *VAR_8;
 struct inet_sock *VAR_9;
 struct sock *VAR_10;

 if (FUNC_18(VAR_2))
  goto exit_overflow;

 VAR_10 = FUNC_3(VAR_2, VAR_4, VAR_3);
 if (VAR_10 == ((void*)0))
  goto exit_nonewsk;

 VAR_9 = FUNC_13(VAR_10);
 VAR_8 = FUNC_12(VAR_4);
 FUNC_19(VAR_10, VAR_8->ir_rmt_addr);
 FUNC_20(VAR_10, VAR_8->ir_loc_addr);
 VAR_9->inet_saddr = VAR_8->ir_loc_addr;
 FUNC_0(VAR_9->inet_opt, FUNC_16(VAR_8->ireq_opt));
 VAR_9->mc_index = FUNC_11(VAR_3);
 VAR_9->mc_ttl = FUNC_14(VAR_3)->ttl;
 VAR_9->inet_id = FUNC_15();

 if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_9(VAR_2, VAR_10, VAR_4)) == ((void*)0))
  goto put_and_exit;

 FUNC_21(VAR_10, VAR_5);

 FUNC_5(VAR_10, FUNC_6(VAR_5));

 if (FUNC_2(VAR_2, VAR_10) < 0)
  goto put_and_exit;
 *VAR_7 = FUNC_10(VAR_10, FUNC_17(VAR_6));
 if (*VAR_7)
  VAR_8->ireq_opt = ((void*)0);
 else
  VAR_9->inet_opt = ((void*)0);
 return VAR_10;

exit_overflow:
 FUNC_1(FUNC_22(VAR_2), VAR_1);
exit_nonewsk:
 FUNC_7(VAR_5);
exit:
 FUNC_1(FUNC_22(VAR_2), VAR_0);
 return ((void*)0);
put_and_exit:
 VAR_9->inet_opt = ((void*)0);
 FUNC_8(VAR_10);
 FUNC_4(VAR_10);
 goto exit;
}
