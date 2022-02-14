
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int post_msg_wq; int wait_queue; int ipc_post_msg_wq; int block_list; int ipc_dispatch_list; int rx_list; int memcpy_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct intel_sst_drv *VAR_2)
{
 FUNC_0(&VAR_2->memcpy_list);
 FUNC_0(&VAR_2->rx_list);
 FUNC_0(&VAR_2->ipc_dispatch_list);
 FUNC_0(&VAR_2->block_list);
 FUNC_1(&VAR_2->ipc_post_msg_wq, VAR_1);
 FUNC_3(&VAR_2->wait_queue);

 VAR_2->post_msg_wq =
  FUNC_2("sst_post_msg_wq");
 if (!VAR_2->post_msg_wq)
  return -VAR_0;
 return 0;
}
