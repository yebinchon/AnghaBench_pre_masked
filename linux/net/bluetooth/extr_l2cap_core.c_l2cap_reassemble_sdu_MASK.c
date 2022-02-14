
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct l2cap_ctrl {int sar; } ;
struct l2cap_chan {scalar_t__ sdu_len; struct sk_buff* sdu_last_frag; struct sk_buff* sdu; TYPE_1__* ops; scalar_t__ imtu; } ;
struct TYPE_2__ {int (* recv ) (struct l2cap_chan*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff*,struct sk_buff**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_6 (struct l2cap_chan*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct l2cap_chan *VAR_3, struct sk_buff *VAR_4,
    struct l2cap_ctrl *VAR_5)
{
 int VAR_6 = -VAR_0;

 switch (VAR_5->sar) {
 case 128:
  if (VAR_3->sdu)
   break;

  VAR_6 = VAR_3->ops->recv(VAR_3, VAR_4);
  break;

 case 129:
  if (VAR_3->sdu)
   break;

  if (!FUNC_3(VAR_4, VAR_2))
   break;

  VAR_3->sdu_len = FUNC_1(VAR_4->data);
  FUNC_4(VAR_4, VAR_2);

  if (VAR_3->sdu_len > VAR_3->imtu) {
   VAR_6 = -VAR_1;
   break;
  }

  if (VAR_4->len >= VAR_3->sdu_len)
   break;

  VAR_3->sdu = VAR_4;
  VAR_3->sdu_last_frag = VAR_4;

  VAR_4 = ((void*)0);
  VAR_6 = 0;
  break;

 case 131:
  if (!VAR_3->sdu)
   break;

  FUNC_0(VAR_3->sdu, VAR_4,
    &VAR_3->sdu_last_frag);
  VAR_4 = ((void*)0);

  if (VAR_3->sdu->len >= VAR_3->sdu_len)
   break;

  VAR_6 = 0;
  break;

 case 130:
  if (!VAR_3->sdu)
   break;

  FUNC_0(VAR_3->sdu, VAR_4,
    &VAR_3->sdu_last_frag);
  VAR_4 = ((void*)0);

  if (VAR_3->sdu->len != VAR_3->sdu_len)
   break;

  VAR_6 = VAR_3->ops->recv(VAR_3, VAR_3->sdu);

  if (!VAR_6) {

   VAR_3->sdu = ((void*)0);
   VAR_3->sdu_last_frag = ((void*)0);
   VAR_3->sdu_len = 0;
  }
  break;
 }

 if (VAR_6) {
  FUNC_2(VAR_4);
  FUNC_2(VAR_3->sdu);
  VAR_3->sdu = ((void*)0);
  VAR_3->sdu_last_frag = ((void*)0);
  VAR_3->sdu_len = 0;
 }

 return VAR_6;
}
