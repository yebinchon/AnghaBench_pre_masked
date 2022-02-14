
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ list_len; int * dst; int * src; } ;
struct intel_sst_drv {int * fw_in_mem; TYPE_1__ fw_sg_list; int qos; int post_msg_wq; TYPE_2__* dev; } ;
struct TYPE_6__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_6 (struct intel_sst_drv*) ;
 int FUNC_7 (struct intel_sst_drv*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int *) ;

void FUNC_10(struct intel_sst_drv *VAR_2)
{
 FUNC_5(VAR_2->dev);
 FUNC_4(VAR_2->dev);
 FUNC_8(VAR_2->dev);
 FUNC_7(VAR_2, VAR_0);
 FUNC_9(&VAR_2->dev->kobj, &VAR_1);
 FUNC_1();
 FUNC_0(VAR_2->post_msg_wq);
 FUNC_3(VAR_2->qos);
 FUNC_2(VAR_2->fw_sg_list.src);
 FUNC_2(VAR_2->fw_sg_list.dst);
 VAR_2->fw_sg_list.list_len = 0;
 FUNC_2(VAR_2->fw_in_mem);
 VAR_2->fw_in_mem = ((void*)0);
 FUNC_6(VAR_2);
 VAR_2 = ((void*)0);
}
