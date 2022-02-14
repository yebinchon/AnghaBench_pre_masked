
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sst_block {int condition; int on; int node; void* drv_id; void* msg_id; } ;
struct intel_sst_drv {int block_lock; int block_list; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct sst_block* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct sst_block *FUNC_5(struct intel_sst_drv *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 struct sst_block *VAR_4 = ((void*)0);

 FUNC_0(VAR_1->dev, "Enter\n");
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->condition = 0;
 VAR_4->on = 1;
 VAR_4->msg_id = VAR_2;
 VAR_4->drv_id = VAR_3;
 FUNC_3(&VAR_1->block_lock);
 FUNC_2(&VAR_4->node, &VAR_1->block_list);
 FUNC_4(&VAR_1->block_lock);

 return VAR_4;
}
