
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int state; struct amp_mgr* data; } ;
struct amp_mgr {int dummy; } ;



 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int FUNC_1 (struct amp_mgr*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0, int VAR_1,
          int VAR_2)
{
 struct amp_mgr *VAR_3 = VAR_0->data;

 if (!VAR_3)
  return;

 FUNC_0("chan %p state %s", VAR_0, FUNC_2(VAR_1));

 VAR_0->state = VAR_1;

 switch (VAR_1) {
 case 128:
  if (VAR_3)
   FUNC_1(VAR_3);
  break;
 }
}
