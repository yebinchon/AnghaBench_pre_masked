
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {int nonagle; scalar_t__ write_seq; } ;
struct sock {int sk_state; int sk_shutdown; int (* sk_write_space ) (struct sock*) ;int sk_write_queue; int sk_tsflags; TYPE_1__* sk_socket; int sk_allocation; scalar_t__ sk_err; } ;
struct sk_buff {int len; int decrypted; int data_len; int truesize; int ip_summed; } ;
struct page {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int end_seq; int tcp_flags; } ;
struct TYPE_5__ {int nr_frags; int tx_flags; int * frags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct page*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sock*,int,int ) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,struct sock*) ;
 int FUNC_10 (struct sock*,int) ;
 struct sk_buff* FUNC_11 (struct sock*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct sock*,int,int) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,long*) ;
 int FUNC_15 (struct sock*,long*) ;
 int FUNC_16 (struct sock*,int) ;
 int FUNC_17 (struct sock*,int) ;
 int FUNC_18 (struct sk_buff*,int,struct page*,int) ;
 int FUNC_19 (struct sock*,struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int,struct page*,int,int) ;
 int FUNC_21 (int *,int) ;
 scalar_t__ FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (struct sk_buff*) ;
 long FUNC_24 (struct sock*,int) ;
 int FUNC_25 (struct sock*) ;
 int VAR_20 ;
 int FUNC_26 (struct sock*,int ) ;
 int FUNC_27 (struct tcp_sock*,struct sk_buff*) ;
 int FUNC_28 (struct sock*) ;
 int FUNC_29 (struct sock*,int,int,int ,int) ;
 int FUNC_30 (struct sock*,int) ;
 int FUNC_31 (struct sock*,struct sk_buff*) ;
 int FUNC_32 (struct sock*) ;
 struct sk_buff* FUNC_33 (struct sock*) ;
 int FUNC_34 (struct sock*,int*,int) ;
 struct tcp_sock* FUNC_35 (struct sock*) ;
 int FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (struct sk_buff*,int ) ;
 int FUNC_38 (struct sock*,int ) ;
 struct sk_buff* FUNC_39 (struct sock*) ;
 scalar_t__ FUNC_40 (int) ;

ssize_t FUNC_41(struct sock *VAR_21, struct page *VAR_22, int VAR_23,
    size_t VAR_24, int VAR_25)
{
 struct tcp_sock *VAR_26 = FUNC_35(VAR_21);
 int VAR_27, VAR_28;
 int VAR_29;
 ssize_t VAR_30;
 long VAR_31 = FUNC_24(VAR_21, VAR_25 & VAR_5);

 if (FUNC_0(VAR_1) &&
     FUNC_3(FUNC_1(VAR_22), "page must not be a Slab one"))
  return -VAR_3;





 if (((1 << VAR_21->sk_state) & ~(VAR_16 | VAR_15)) &&
     !FUNC_28(VAR_21)) {
  VAR_29 = FUNC_14(VAR_21, &VAR_31);
  if (VAR_29 != 0)
   goto out_err;
 }

 FUNC_9(VAR_13, VAR_21);

 VAR_27 = FUNC_34(VAR_21, &VAR_28, VAR_25);
 VAR_30 = 0;

 VAR_29 = -VAR_4;
 if (VAR_21->sk_err || (VAR_21->sk_shutdown & VAR_11))
  goto out_err;

 while (VAR_24 > 0) {
  struct sk_buff *VAR_32 = FUNC_39(VAR_21);
  int VAR_33, VAR_34;
  bool VAR_35;

  if (!VAR_32 || (VAR_33 = VAR_28 - VAR_32->len) <= 0 ||
      !FUNC_36(VAR_32)) {
new_segment:
   if (!FUNC_13(VAR_21))
    goto wait_for_sndbuf;

   VAR_32 = FUNC_11(VAR_21, 0, VAR_21->sk_allocation,
     FUNC_32(VAR_21));
   if (!VAR_32)
    goto wait_for_memory;




   FUNC_19(VAR_21, VAR_32);
   VAR_33 = VAR_28;
  }

  if (VAR_33 > VAR_24)
   VAR_33 = VAR_24;

  VAR_34 = FUNC_23(VAR_32)->nr_frags;
  VAR_35 = FUNC_18(VAR_32, VAR_34, VAR_22, VAR_23);
  if (!VAR_35 && VAR_34 >= VAR_20) {
   FUNC_27(VAR_26, VAR_32);
   goto new_segment;
  }
  if (!FUNC_17(VAR_21, VAR_33))
   goto wait_for_memory;

  if (VAR_35) {
   FUNC_21(&FUNC_23(VAR_32)->frags[VAR_34 - 1], VAR_33);
  } else {
   FUNC_7(VAR_22);
   FUNC_20(VAR_32, VAR_34, VAR_22, VAR_23, VAR_33);
  }

  if (!(VAR_25 & VAR_7))
   FUNC_23(VAR_32)->tx_flags |= VAR_12;

  VAR_32->len += VAR_33;
  VAR_32->data_len += VAR_33;
  VAR_32->truesize += VAR_33;
  FUNC_16(VAR_21, VAR_33);
  FUNC_10(VAR_21, VAR_33);
  VAR_32->ip_summed = VAR_0;
  FUNC_4(VAR_26->write_seq, VAR_26->write_seq + VAR_33);
  FUNC_2(VAR_32)->end_seq += VAR_33;
  FUNC_37(VAR_32, 0);

  if (!VAR_30)
   FUNC_2(VAR_32)->tcp_flags &= ~VAR_17;

  VAR_30 += VAR_33;
  VAR_23 += VAR_33;
  VAR_24 -= VAR_33;
  if (!VAR_24)
   goto out;

  if (VAR_32->len < VAR_28 || (VAR_25 & VAR_8))
   continue;

  if (FUNC_6(VAR_26)) {
   FUNC_27(VAR_26, VAR_32);
   FUNC_5(VAR_21, VAR_27, VAR_19);
  } else if (VAR_32 == FUNC_33(VAR_21))
   FUNC_30(VAR_21, VAR_27);
  continue;

wait_for_sndbuf:
  FUNC_8(VAR_14, &VAR_21->sk_socket->flags);
wait_for_memory:
  FUNC_29(VAR_21, VAR_25 & ~VAR_6, VAR_27,
    VAR_19, VAR_28);

  VAR_29 = FUNC_15(VAR_21, &VAR_31);
  if (VAR_29 != 0)
   goto do_error;

  VAR_27 = FUNC_34(VAR_21, &VAR_28, VAR_25);
 }

out:
 if (VAR_30) {
  FUNC_38(VAR_21, VAR_21->sk_tsflags);
  if (!(VAR_25 & VAR_10))
   FUNC_29(VAR_21, VAR_25, VAR_27, VAR_26->nonagle, VAR_28);
 }
 return VAR_30;

do_error:
 FUNC_31(VAR_21, FUNC_39(VAR_21));
 if (VAR_30)
  goto out;
out_err:

 if (FUNC_40(FUNC_22(&VAR_21->sk_write_queue) == 0 &&
       VAR_29 == -VAR_2)) {
  VAR_21->sk_write_space(VAR_21);
  FUNC_26(VAR_21, VAR_18);
 }
 return FUNC_12(VAR_21, VAR_25, VAR_29);
}
