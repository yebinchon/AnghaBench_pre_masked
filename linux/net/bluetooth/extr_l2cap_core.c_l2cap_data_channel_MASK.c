
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {scalar_t__ chan_type; scalar_t__ state; int mode; int imtu; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recv ) (struct l2cap_chan*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 struct l2cap_chan* FUNC_2 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*,struct sk_buff*) ;
 struct l2cap_chan* FUNC_8 (struct l2cap_conn*,scalar_t__) ;
 int FUNC_9 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_10 (struct l2cap_chan*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct l2cap_conn *VAR_3, u16 VAR_4,
          struct sk_buff *VAR_5)
{
 struct l2cap_chan *VAR_6;

 VAR_6 = FUNC_8(VAR_3, VAR_4);
 if (!VAR_6) {
  if (VAR_4 == VAR_2) {
   VAR_6 = FUNC_2(VAR_3, VAR_5);
   if (!VAR_6) {
    FUNC_3(VAR_5);
    return;
   }

   FUNC_4(VAR_6);
  } else {
   FUNC_0("unknown cid 0x%4.4x", VAR_4);

   FUNC_3(VAR_5);
   return;
  }
 }

 FUNC_0("chan %p, len %d", VAR_6, VAR_5->len);





 if (VAR_6->chan_type == VAR_1)
  FUNC_5(VAR_6);

 if (VAR_6->state != VAR_0)
  goto drop;

 switch (VAR_6->mode) {
 case 129:
  if (FUNC_9(VAR_6, VAR_5) < 0)
   goto drop;

  goto done;

 case 131:





  if (VAR_6->imtu < VAR_5->len) {
   FUNC_1("Dropping L2CAP data: receive buffer overflow");
   goto drop;
  }

  if (!VAR_6->ops->recv(VAR_6, VAR_5))
   goto done;
  break;

 case 130:
 case 128:
  FUNC_7(VAR_6, VAR_5);
  goto done;

 default:
  FUNC_0("chan %p: bad mode 0x%2.2x", VAR_6, VAR_6->mode);
  break;
 }

drop:
 FUNC_3(VAR_5);

done:
 FUNC_6(VAR_6);
}
