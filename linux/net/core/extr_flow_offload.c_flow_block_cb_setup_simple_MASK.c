
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct flow_block_offload {scalar_t__ binder_type; int command; int block; struct list_head* driver_block_list; } ;
struct flow_block_cb {int driver_list; } ;
typedef int flow_setup_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;

 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int *,void*,void*,int *) ;
 int FUNC_4 (int *,void*,struct list_head*) ;
 struct flow_block_cb* FUNC_5 (int ,int *,void*) ;
 int FUNC_6 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct flow_block_offload *VAR_4,
          struct list_head *VAR_5,
          flow_setup_cb_t *VAR_6,
          void *VAR_7, void *VAR_8,
          bool VAR_9)
{
 struct flow_block_cb *VAR_10;

 if (VAR_9 &&
     VAR_4->binder_type != VAR_3)
  return -VAR_2;

 VAR_4->driver_block_list = VAR_5;

 switch (VAR_4->command) {
 case 129:
  if (FUNC_4(VAR_6, VAR_7, VAR_5))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8, ((void*)0));
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  FUNC_2(VAR_10, VAR_4);
  FUNC_7(&VAR_10->driver_list, VAR_5);
  return 0;
 case 128:
  VAR_10 = FUNC_5(VAR_4->block, VAR_6, VAR_7);
  if (!VAR_10)
   return -VAR_1;

  FUNC_6(VAR_10, VAR_4);
  FUNC_8(&VAR_10->driver_list);
  return 0;
 default:
  return -VAR_2;
 }
}
