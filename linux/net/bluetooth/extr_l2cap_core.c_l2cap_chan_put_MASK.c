
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int kref; } ;


 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct l2cap_chan *VAR_1)
{
 FUNC_0("chan %p orig refcnt %d", VAR_1, FUNC_2(&VAR_1->kref));

 FUNC_1(&VAR_1->kref, VAR_0);
}
