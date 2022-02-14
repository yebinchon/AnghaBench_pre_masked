
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_ctrl {int reqseq; } ;
struct l2cap_chan {int retrans_list; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0,
        struct l2cap_ctrl *VAR_1)
{
 FUNC_0("chan %p, control %p", VAR_0, VAR_1);

 FUNC_2(&VAR_0->retrans_list, VAR_1->reqseq);
 FUNC_1(VAR_0);
}
