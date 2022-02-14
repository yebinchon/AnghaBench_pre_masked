
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_ctrl {int sframe; scalar_t__ reqseq; int super; } ;
struct TYPE_2__ {scalar_t__ tail; } ;
struct l2cap_chan {TYPE_1__ srej_list; } ;
typedef int control ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_2 (struct l2cap_ctrl*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_2)
{
 struct l2cap_ctrl VAR_3;

 FUNC_0("chan %p", VAR_2);

 if (VAR_2->srej_list.tail == VAR_0)
  return;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sframe = 1;
 VAR_3.super = VAR_1;
 VAR_3.reqseq = VAR_2->srej_list.tail;
 FUNC_1(VAR_2, &VAR_3);
}
