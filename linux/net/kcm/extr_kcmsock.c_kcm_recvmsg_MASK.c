
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strp_msg {size_t full_len; int offset; } ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_2__ {int rx_msgs; int rx_bytes; } ;
struct kcm_sock {TYPE_1__ stats; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kcm_sock* FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,long,int*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,int,struct msghdr*,size_t) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 long FUNC_10 (struct sock*,int) ;
 struct strp_msg* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_5, struct msghdr *VAR_6,
         size_t VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct kcm_sock *VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = 0;
 long VAR_12;
 struct strp_msg *VAR_13;
 int VAR_14 = 0;
 struct sk_buff *VAR_15;

 VAR_12 = FUNC_10(VAR_9, VAR_8 & VAR_0);

 FUNC_6(VAR_9);

 VAR_15 = FUNC_3(VAR_9, VAR_8, VAR_12, &VAR_11);
 if (!VAR_15)
  goto out;



 VAR_13 = FUNC_11(VAR_15);

 if (VAR_7 > VAR_13->full_len)
  VAR_7 = VAR_13->full_len;

 VAR_11 = FUNC_8(VAR_15, VAR_13->offset, VAR_6, VAR_7);
 if (VAR_11 < 0)
  goto out;

 VAR_14 = VAR_7;
 if (FUNC_5(!(VAR_8 & VAR_2))) {
  FUNC_0(VAR_10->stats.rx_bytes, VAR_14);
  if (VAR_14 < VAR_13->full_len) {
   if (VAR_5->type == VAR_4) {

    VAR_6->msg_flags |= VAR_3;
    goto msg_finished;
   }
   VAR_13->offset += VAR_14;
   VAR_13->full_len -= VAR_14;
  } else {
msg_finished:

   VAR_6->msg_flags |= VAR_1;
   FUNC_1(VAR_10->stats.rx_msgs);
   FUNC_9(VAR_15, &VAR_9->sk_receive_queue);
   FUNC_4(VAR_15);
  }
 }

out:
 FUNC_7(VAR_9);

 return VAR_14 ? : VAR_11;
}
