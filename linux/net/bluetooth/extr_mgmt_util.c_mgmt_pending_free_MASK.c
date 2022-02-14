
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_pending_cmd {struct mgmt_pending_cmd* param; int sk; } ;


 int FUNC_0 (struct mgmt_pending_cmd*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mgmt_pending_cmd *VAR_0)
{
 FUNC_1(VAR_0->sk);
 FUNC_0(VAR_0->param);
 FUNC_0(VAR_0);
}
