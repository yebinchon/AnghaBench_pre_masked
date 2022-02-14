
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct l2cap_chan {scalar_t__ chan_type; scalar_t__ state; int mode; size_t omtu; TYPE_1__* ops; int tx_credits; int tx_q; int conn; } ;
struct TYPE_2__ {int (* suspend ) (struct l2cap_chan*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct l2cap_chan*,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_7 (struct l2cap_chan*,struct msghdr*,size_t) ;
 int FUNC_8 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_9 (struct l2cap_chan*) ;
 int FUNC_10 (struct l2cap_chan*,struct sk_buff_head*,struct msghdr*,size_t) ;
 int FUNC_11 (struct l2cap_chan*,struct sk_buff_head*,struct msghdr*,size_t) ;
 int FUNC_12 (struct l2cap_chan*,struct sk_buff_head*) ;
 int FUNC_13 (struct l2cap_chan*,int *,struct sk_buff_head*,int ) ;
 int FUNC_14 (struct sk_buff_head*,int *) ;
 int FUNC_15 (struct l2cap_chan*) ;

int FUNC_16(struct l2cap_chan *VAR_6, struct msghdr *VAR_7, size_t VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10;
 struct sk_buff_head VAR_11;

 if (!VAR_6->conn)
  return -VAR_3;


 if (VAR_6->chan_type == VAR_4) {
  VAR_9 = FUNC_7(VAR_6, VAR_7, VAR_8);
  if (FUNC_1(VAR_9))
   return FUNC_2(VAR_9);




  if (VAR_6->state != VAR_0) {
   FUNC_5(VAR_9);
   return -VAR_3;
  }

  FUNC_8(VAR_6, VAR_9);
  return VAR_8;
 }

 switch (VAR_6->mode) {
 case 129:

  if (VAR_8 > VAR_6->omtu)
   return -VAR_2;

  FUNC_3(&VAR_11);

  VAR_10 = FUNC_10(VAR_6, &VAR_11, VAR_7, VAR_8);

  if (VAR_6->state != VAR_0) {
   FUNC_4(&VAR_11);
   VAR_10 = -VAR_3;
  }

  if (VAR_10)
   return VAR_10;

  FUNC_14(&VAR_11, &VAR_6->tx_q);

  FUNC_9(VAR_6);

  if (!VAR_6->tx_credits)
   VAR_6->ops->suspend(VAR_6);

  VAR_10 = VAR_8;

  break;

 case 131:

  if (VAR_8 > VAR_6->omtu)
   return -VAR_2;


  VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_8);
  if (FUNC_1(VAR_9))
   return FUNC_2(VAR_9);




  if (VAR_6->state != VAR_0) {
   FUNC_5(VAR_9);
   return -VAR_3;
  }

  FUNC_8(VAR_6, VAR_9);
  VAR_10 = VAR_8;
  break;

 case 130:
 case 128:

  if (VAR_8 > VAR_6->omtu) {
   VAR_10 = -VAR_2;
   break;
  }

  FUNC_3(&VAR_11);





  VAR_10 = FUNC_11(VAR_6, &VAR_11, VAR_7, VAR_8);




  if (VAR_6->state != VAR_0) {
   FUNC_4(&VAR_11);
   VAR_10 = -VAR_3;
  }

  if (VAR_10)
   break;

  if (VAR_6->mode == 130)
   FUNC_13(VAR_6, ((void*)0), &VAR_11, VAR_5);
  else
   FUNC_12(VAR_6, &VAR_11);

  VAR_10 = VAR_8;




  FUNC_4(&VAR_11);
  break;

 default:
  FUNC_0("bad state %1.1x", VAR_6->mode);
  VAR_10 = -VAR_1;
 }

 return VAR_10;
}
