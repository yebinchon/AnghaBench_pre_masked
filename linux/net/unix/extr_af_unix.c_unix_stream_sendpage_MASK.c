
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_5__ {int lock; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; int (* sk_data_ready ) (struct sock*) ;TYPE_2__ sk_receive_queue; int sk_wmem_alloc; } ;
struct sk_buff {size_t len; size_t data_len; size_t truesize; } ;
struct scm_cookie {int dummy; } ;
struct page {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int iolock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_13 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct scm_cookie*,struct socket*,struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (size_t,int *) ;
 int FUNC_7 (struct scm_cookie*) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct page*,int,size_t) ;
 struct sk_buff* FUNC_10 (TYPE_2__*) ;
 struct sk_buff* FUNC_11 (struct sock*,int ,int ,int,int*,int ) ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sock*) ;
 struct sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct scm_cookie*,struct sk_buff*,int) ;
 TYPE_1__* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sk_buff*,struct scm_cookie*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;

__attribute__((used)) static ssize_t FUNC_22(struct socket *VAR_14, struct page *VAR_15,
        int VAR_16, size_t VAR_17, int VAR_18)
{
 int VAR_19;
 bool VAR_20 = 0;
 bool VAR_21 = 1;
 struct scm_cookie VAR_22;
 struct sock *VAR_23, *VAR_24 = VAR_14->sk;
 struct sk_buff *VAR_25, *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);

 if (VAR_18 & VAR_7)
  return -VAR_2;

 VAR_23 = FUNC_16(VAR_24);
 if (!VAR_23 || VAR_24->sk_state != VAR_12)
  return -VAR_1;

 if (0) {
alloc_skb:
  FUNC_21(VAR_23);
  FUNC_5(&FUNC_18(VAR_23)->iolock);
  VAR_26 = FUNC_11(VAR_24, 0, 0, VAR_18 & VAR_5,
           &VAR_19, 0);
  if (!VAR_26)
   goto err;
 }




 VAR_19 = FUNC_4(&FUNC_18(VAR_23)->iolock);
 if (VAR_19) {
  VAR_19 = VAR_18 & VAR_5 ? -VAR_0 : -VAR_4;
  goto err;
 }

 if (VAR_24->sk_shutdown & VAR_9) {
  VAR_19 = -VAR_3;
  VAR_20 = 1;
  goto err_unlock;
 }

 FUNC_20(VAR_23);

 if (FUNC_12(VAR_23, VAR_11) ||
     VAR_23->sk_shutdown & VAR_8) {
  VAR_19 = -VAR_3;
  VAR_20 = 1;
  goto err_state_unlock;
 }

 if (VAR_21) {
  VAR_19 = FUNC_3(&VAR_22, VAR_14, VAR_23);
  if (VAR_19)
   goto err_state_unlock;
  VAR_21 = 0;
 }

 VAR_25 = FUNC_10(&VAR_23->sk_receive_queue);
 if (VAR_27 && VAR_27 == VAR_25) {
  VAR_25 = VAR_26;
 } else if (!VAR_25 || !FUNC_19(VAR_25, &VAR_22)) {
  if (VAR_26) {
   VAR_25 = VAR_26;
  } else {
   VAR_27 = VAR_25;
   goto alloc_skb;
  }
 } else if (VAR_26) {




  FUNC_1(VAR_26);
  VAR_26 = ((void*)0);
 }

 if (FUNC_9(VAR_25, VAR_15, VAR_16, VAR_17)) {
  VAR_27 = VAR_25;
  goto alloc_skb;
 }

 VAR_25->len += VAR_17;
 VAR_25->data_len += VAR_17;
 VAR_25->truesize += VAR_17;
 FUNC_6(VAR_17, &VAR_24->sk_wmem_alloc);

 if (VAR_26) {
  VAR_19 = FUNC_17(&VAR_22, VAR_25, 0);
  if (VAR_19)
   goto err_state_unlock;
  FUNC_13(&VAR_23->sk_receive_queue.lock);
  FUNC_0(&VAR_23->sk_receive_queue, VAR_26);
  FUNC_14(&VAR_23->sk_receive_queue.lock);
 }

 FUNC_21(VAR_23);
 FUNC_5(&FUNC_18(VAR_23)->iolock);

 VAR_23->sk_data_ready(VAR_23);
 FUNC_7(&VAR_22);
 return VAR_17;

err_state_unlock:
 FUNC_21(VAR_23);
err_unlock:
 FUNC_5(&FUNC_18(VAR_23)->iolock);
err:
 FUNC_2(VAR_26);
 if (VAR_20 && !(VAR_18 & VAR_6))
  FUNC_8(VAR_10, VAR_13, 0);
 if (!VAR_21)
  FUNC_7(&VAR_22);
 return VAR_19;
}
