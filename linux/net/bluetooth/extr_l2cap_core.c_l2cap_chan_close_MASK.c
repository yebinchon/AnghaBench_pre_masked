
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_conn {TYPE_1__* hcon; } ;
struct l2cap_chan {int state; TYPE_2__* ops; int chan_type; struct l2cap_conn* conn; } ;
struct TYPE_4__ {int (* teardown ) (struct l2cap_chan*,int ) ;int (* get_sndtimeo ) (struct l2cap_chan*) ;} ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;




 int FUNC_0 (char*,struct l2cap_chan*,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,int) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_chan*,int ) ;

void FUNC_10(struct l2cap_chan *VAR_3, int VAR_4)
{
 struct l2cap_conn *VAR_5 = VAR_3->conn;

 FUNC_0("chan %p state %s", VAR_3, FUNC_6(VAR_3->state));

 switch (VAR_3->state) {
 case 128:
  VAR_3->ops->teardown(VAR_3, 0);
  break;

 case 130:
 case 133:
  if (VAR_3->chan_type == VAR_1) {
   FUNC_1(VAR_3, VAR_3->ops->get_sndtimeo(VAR_3));
   FUNC_5(VAR_3, VAR_4);
  } else
   FUNC_3(VAR_3, VAR_4);
  break;

 case 131:
  if (VAR_3->chan_type == VAR_1) {
   if (VAR_5->hcon->type == VAR_0)
    FUNC_2(VAR_3);
   else if (VAR_5->hcon->type == VAR_2)
    FUNC_4(VAR_3);
  }

  FUNC_3(VAR_3, VAR_4);
  break;

 case 132:
 case 129:
  FUNC_3(VAR_3, VAR_4);
  break;

 default:
  VAR_3->ops->teardown(VAR_3, 0);
  break;
 }
}
