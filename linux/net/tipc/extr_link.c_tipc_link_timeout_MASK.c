
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tipc_mon_state {int probing; int monitoring; int reset; } ;
struct tipc_link {int state; int silent_intv_cnt; int abort_limit; int rcv_unacked; int rst_cnt; int deferdq; int transmq; TYPE_2__* bc_rcvlink; int bearer_id; int addr; int net; struct tipc_mon_state mon_state; TYPE_1__* bc_sndlink; } ;
struct sk_buff_head {int dummy; } ;
struct TYPE_4__ {int rcv_unacked; scalar_t__ acked; } ;
struct TYPE_3__ {scalar_t__ snd_nxt; } ;


 int VAR_0 ;



 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tipc_link*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tipc_link*,int,int,int ,int ,int ,int ,struct sk_buff_head*) ;
 int FUNC_3 (struct tipc_link*,int ) ;
 int FUNC_4 (int ,int ,struct tipc_mon_state*,int ) ;
 int FUNC_5 (struct tipc_link*,int ,char*) ;
 int FUNC_6 (struct tipc_link*,int ,char*) ;

int FUNC_7(struct tipc_link *VAR_6, struct sk_buff_head *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 u16 VAR_13 = VAR_6->bc_sndlink->snd_nxt - 1;
 u16 VAR_14 = VAR_6->bc_rcvlink->acked;
 struct tipc_mon_state *VAR_15 = &VAR_6->mon_state;

 FUNC_5(VAR_6, VAR_5, " ");
 FUNC_6(VAR_6, VAR_4, " ");
 switch (VAR_6->state) {
 case 134:
 case 128:
  VAR_8 = VAR_3;
  FUNC_0(VAR_6);
  FUNC_4(VAR_6->net, VAR_6->addr, VAR_15, VAR_6->bearer_id);
  if (VAR_15->reset || (VAR_6->silent_intv_cnt > VAR_6->abort_limit))
   return FUNC_3(VAR_6, VAR_1);
  VAR_10 = VAR_14 != VAR_13;
  VAR_10 |= VAR_6->bc_rcvlink->rcv_unacked;
  VAR_10 |= VAR_6->rcv_unacked;
  VAR_10 |= !FUNC_1(&VAR_6->transmq);
  VAR_10 |= !FUNC_1(&VAR_6->deferdq);
  VAR_11 = VAR_15->probing;
  VAR_11 |= VAR_6->silent_intv_cnt;
  if (VAR_11 || VAR_15->monitoring)
   VAR_6->silent_intv_cnt++;
  break;
 case 130:
  VAR_12 = VAR_6->rst_cnt++ <= 4;
  VAR_12 |= !(VAR_6->rst_cnt % 16);
  VAR_8 = VAR_2;
  break;
 case 133:
  VAR_12 = 1;
  VAR_8 = VAR_0;
  break;
 case 131:
 case 129:
 case 132:
  break;
 default:
  break;
 }

 if (VAR_10 || VAR_11 || VAR_12)
  FUNC_2(VAR_6, VAR_8, VAR_11, 0, 0, 0, 0, VAR_7);

 return VAR_9;
}
