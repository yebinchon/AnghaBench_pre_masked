
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {int send_wq; int rcv_wq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tipc_topsrv *VAR_0)
{
 FUNC_0(VAR_0->rcv_wq);
 FUNC_0(VAR_0->send_wq);
}
