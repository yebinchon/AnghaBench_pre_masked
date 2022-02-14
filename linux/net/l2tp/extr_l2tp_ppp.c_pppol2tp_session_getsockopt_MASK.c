
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct l2tp_session {int recv_seq; int send_seq; int lns_mode; int debug; int name; int reorder_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct l2tp_session*,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2,
           struct l2tp_session *VAR_3,
           int VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 130:
  *VAR_5 = VAR_3->recv_seq;
  FUNC_1(VAR_3, VAR_1,
     "%s: get recv_seq=%d\n", VAR_3->name, *VAR_5);
  break;

 case 128:
  *VAR_5 = VAR_3->send_seq;
  FUNC_1(VAR_3, VAR_1,
     "%s: get send_seq=%d\n", VAR_3->name, *VAR_5);
  break;

 case 131:
  *VAR_5 = VAR_3->lns_mode;
  FUNC_1(VAR_3, VAR_1,
     "%s: get lns_mode=%d\n", VAR_3->name, *VAR_5);
  break;

 case 132:
  *VAR_5 = VAR_3->debug;
  FUNC_1(VAR_3, VAR_1, "%s: get debug=%d\n",
     VAR_3->name, *VAR_5);
  break;

 case 129:
  *VAR_5 = (int) FUNC_0(VAR_3->reorder_timeout);
  FUNC_1(VAR_3, VAR_1,
     "%s: get reorder_timeout=%d\n", VAR_3->name, *VAR_5);
  break;

 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
