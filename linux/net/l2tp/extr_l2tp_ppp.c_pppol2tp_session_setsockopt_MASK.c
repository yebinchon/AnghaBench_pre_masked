
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int hdrlen; } ;
struct pppox_sock {TYPE_1__ chan; } ;
struct l2tp_session {int recv_seq; int send_seq; int lns_mode; int debug; int reorder_timeout; int name; TYPE_2__* tunnel; } ;
struct TYPE_4__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct l2tp_session*,int ,char*,int ,int) ;
 int FUNC_1 (struct l2tp_session*,int ) ;
 int FUNC_2 (int) ;
 struct pppox_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_5,
           struct l2tp_session *VAR_6,
           int VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_7) {
 case 130:
  if ((VAR_8 != 0) && (VAR_8 != 1)) {
   VAR_9 = -VAR_0;
   break;
  }
  VAR_6->recv_seq = !!VAR_8;
  FUNC_0(VAR_6, VAR_2,
     "%s: set recv_seq=%d\n",
     VAR_6->name, VAR_6->recv_seq);
  break;

 case 128:
  if ((VAR_8 != 0) && (VAR_8 != 1)) {
   VAR_9 = -VAR_0;
   break;
  }
  VAR_6->send_seq = !!VAR_8;
  {
   struct pppox_sock *VAR_10 = FUNC_3(VAR_5);

   VAR_10->chan.hdrlen = VAR_8 ? VAR_4 :
    VAR_3;
  }
  FUNC_1(VAR_6, VAR_6->tunnel->version);
  FUNC_0(VAR_6, VAR_2,
     "%s: set send_seq=%d\n",
     VAR_6->name, VAR_6->send_seq);
  break;

 case 131:
  if ((VAR_8 != 0) && (VAR_8 != 1)) {
   VAR_9 = -VAR_0;
   break;
  }
  VAR_6->lns_mode = !!VAR_8;
  FUNC_0(VAR_6, VAR_2,
     "%s: set lns_mode=%d\n",
     VAR_6->name, VAR_6->lns_mode);
  break;

 case 132:
  VAR_6->debug = VAR_8;
  FUNC_0(VAR_6, VAR_2, "%s: set debug=%x\n",
     VAR_6->name, VAR_6->debug);
  break;

 case 129:
  VAR_6->reorder_timeout = FUNC_2(VAR_8);
  FUNC_0(VAR_6, VAR_2,
     "%s: set reorder_timeout=%d\n",
     VAR_6->name, VAR_6->reorder_timeout);
  break;

 default:
  VAR_9 = -VAR_1;
  break;
 }

 return VAR_9;
}
