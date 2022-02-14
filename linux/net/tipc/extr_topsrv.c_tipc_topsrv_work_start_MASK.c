
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {void* rcv_wq; void* send_wq; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct tipc_topsrv *VAR_1)
{
 VAR_1->rcv_wq = FUNC_0("tipc_rcv", 0);
 if (!VAR_1->rcv_wq) {
  FUNC_2("can't start tipc receive workqueue\n");
  return -VAR_0;
 }

 VAR_1->send_wq = FUNC_0("tipc_send", 0);
 if (!VAR_1->send_wq) {
  FUNC_2("can't start tipc send workqueue\n");
  FUNC_1(VAR_1->rcv_wq);
  return -VAR_0;
 }

 return 0;
}
