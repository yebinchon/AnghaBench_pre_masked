
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rfcomm_session {TYPE_1__* sock; } ;
struct l2cap_chan {int dst; int src; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {struct l2cap_chan* chan; } ;
struct TYPE_3__ {int sk; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int ) ;

void FUNC_2(struct rfcomm_session *VAR_0, bdaddr_t *VAR_1, bdaddr_t *VAR_2)
{
 struct l2cap_chan *VAR_3 = FUNC_1(VAR_0->sock->sk)->chan;
 if (VAR_1)
  FUNC_0(VAR_1, &VAR_3->src);
 if (VAR_2)
  FUNC_0(VAR_2, &VAR_3->dst);
}
