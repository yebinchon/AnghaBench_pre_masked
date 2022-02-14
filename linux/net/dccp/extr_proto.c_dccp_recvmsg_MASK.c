
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_shutdown; scalar_t__ sk_err; int sk_receive_queue; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; } ;
struct dccp_hdr {int dccph_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sock*) ;
 struct dccp_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*,long*,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_10 (int *) ;
 size_t FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 size_t FUNC_13 (long) ;
 long FUNC_14 (struct sock*,int) ;

int FUNC_15(struct sock *VAR_10, struct msghdr *VAR_11, size_t VAR_12, int VAR_13,
   int VAR_14, int *VAR_15)
{
 const struct dccp_hdr *VAR_16;
 long VAR_17;

 FUNC_4(VAR_10);

 if (VAR_10->sk_state == VAR_1) {
  VAR_12 = -VAR_4;
  goto out;
 }

 VAR_17 = FUNC_14(VAR_10, VAR_13);

 do {
  struct sk_buff *VAR_18 = FUNC_10(&VAR_10->sk_receive_queue);

  if (VAR_18 == ((void*)0))
   goto verify_sock_status;

  VAR_16 = FUNC_1(VAR_18);

  switch (VAR_16->dccph_type) {
  case 130:
  case 129:
   goto found_ok_skb;

  case 132:
  case 131:
   if (!(VAR_14 & VAR_5))
    FUNC_0(VAR_10);

  case 128:
   FUNC_3("found fin (%s) ok!\n",
          FUNC_2(VAR_16->dccph_type));
   VAR_12 = 0;
   goto found_fin_ok;
  default:
   FUNC_3("packet_type=%s\n",
          FUNC_2(VAR_16->dccph_type));
   FUNC_7(VAR_10, VAR_18);
  }
verify_sock_status:
  if (FUNC_12(VAR_10, VAR_8)) {
   VAR_12 = 0;
   break;
  }

  if (VAR_10->sk_err) {
   VAR_12 = FUNC_11(VAR_10);
   break;
  }

  if (VAR_10->sk_shutdown & VAR_7) {
   VAR_12 = 0;
   break;
  }

  if (VAR_10->sk_state == VAR_0) {
   if (!FUNC_12(VAR_10, VAR_8)) {



    VAR_12 = -VAR_4;
    break;
   }
   VAR_12 = 0;
   break;
  }

  if (!VAR_17) {
   VAR_12 = -VAR_2;
   break;
  }

  if (FUNC_6(VAR_9)) {
   VAR_12 = FUNC_13(VAR_17);
   break;
  }

  FUNC_8(VAR_10, &VAR_17, ((void*)0));
  continue;
 found_ok_skb:
  if (VAR_12 > VAR_18->len)
   VAR_12 = VAR_18->len;
  else if (VAR_12 < VAR_18->len)
   VAR_11->msg_flags |= VAR_6;

  if (FUNC_9(VAR_18, 0, VAR_11, VAR_12)) {

   VAR_12 = -VAR_3;
   break;
  }
  if (VAR_14 & VAR_6)
   VAR_12 = VAR_18->len;
 found_fin_ok:
  if (!(VAR_14 & VAR_5))
   FUNC_7(VAR_10, VAR_18);
  break;
 } while (1);
out:
 FUNC_5(VAR_10);
 return VAR_12;
}
