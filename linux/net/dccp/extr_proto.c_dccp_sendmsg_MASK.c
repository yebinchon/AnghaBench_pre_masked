
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct dccp_sock {size_t dccps_mss_cache; int dccps_xmit_timer; } ;
struct TYPE_2__ {size_t max_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (struct msghdr*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,struct msghdr*,size_t) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,long*) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_12 (struct sock*,int,int const,int*) ;
 long FUNC_13 (struct sock*,int const) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sock*,size_t) ;

int FUNC_16(struct sock *VAR_7, struct msghdr *VAR_8, size_t VAR_9)
{
 const struct dccp_sock *VAR_10 = FUNC_3(VAR_7);
 const int VAR_11 = VAR_8->msg_flags;
 const int VAR_12 = VAR_11 & VAR_6;
 struct sk_buff *VAR_13;
 int VAR_14, VAR_15;
 long VAR_16;

 FUNC_15(VAR_7, VAR_9);

 if (VAR_9 > VAR_10->dccps_mss_cache)
  return -VAR_4;

 FUNC_6(VAR_7);

 if (FUNC_1(VAR_7)) {
  VAR_14 = -VAR_3;
  goto out_release;
 }

 VAR_16 = FUNC_13(VAR_7, VAR_12);






 if ((1 << VAR_7->sk_state) & ~(VAR_0 | VAR_1))
  if ((VAR_14 = FUNC_9(VAR_7, &VAR_16)) != 0)
   goto out_release;

 VAR_15 = VAR_7->sk_prot->max_header + VAR_9;
 FUNC_8(VAR_7);
 VAR_13 = FUNC_12(VAR_7, VAR_15, VAR_12, &VAR_14);
 FUNC_6(VAR_7);
 if (VAR_13 == ((void*)0))
  goto out_release;

 if (VAR_7->sk_state == VAR_2) {
  VAR_14 = -VAR_5;
  goto out_discard;
 }

 FUNC_11(VAR_13, VAR_7->sk_prot->max_header);
 VAR_14 = FUNC_7(FUNC_10(VAR_13, VAR_9), VAR_8, VAR_9);
 if (VAR_14 != 0)
  goto out_discard;

 VAR_14 = FUNC_0(VAR_8, VAR_13);
 if (VAR_14 != 0)
  goto out_discard;

 FUNC_2(VAR_7, VAR_13);





 if (!FUNC_14(&VAR_10->dccps_xmit_timer))
  FUNC_4(VAR_7);
out_release:
 FUNC_8(VAR_7);
 return VAR_14 ? : VAR_9;
out_discard:
 FUNC_5(VAR_13);
 goto out_release;
}
