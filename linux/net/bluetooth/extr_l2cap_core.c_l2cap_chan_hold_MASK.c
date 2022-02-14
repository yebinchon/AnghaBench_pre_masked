
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int kref; } ;


 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct l2cap_chan *VAR_0)
{
 FUNC_0("chan %p orig refcnt %d", VAR_0, FUNC_2(&VAR_0->kref));

 FUNC_1(&VAR_0->kref);
}
