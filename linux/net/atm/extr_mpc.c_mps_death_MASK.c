
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpoa_client {TYPE_2__* eg_ops; TYPE_1__* in_ops; int egress_lock; TYPE_4__* eg_cache; TYPE_3__* dev; int mps_ctrl_addr; } ;
struct k_message {int MPS_ctrl; } ;
struct TYPE_9__ {struct TYPE_9__* next; int shortcut; } ;
typedef TYPE_4__ eg_cache_entry ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int (* destroy_cache ) (struct mpoa_client*) ;} ;
struct TYPE_6__ {int (* destroy_cache ) (struct mpoa_client*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mpoa_client*) ;
 int FUNC_7 (struct mpoa_client*) ;

__attribute__((used)) static void FUNC_8(struct k_message *VAR_1, struct mpoa_client *VAR_2)
{
 eg_cache_entry *VAR_3;

 FUNC_0("(%s)\n", VAR_2->dev->name);

 if (FUNC_1(VAR_1->MPS_ctrl, VAR_2->mps_ctrl_addr, VAR_0)) {
  FUNC_2("(%s) wrong MPS\n", VAR_2->dev->name);
  return;
 }


 FUNC_4(&VAR_2->egress_lock);
 VAR_3 = VAR_2->eg_cache;
 while (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_3->shortcut, VAR_3);
  VAR_3 = VAR_3->next;
 }
 FUNC_5(&VAR_2->egress_lock);

 VAR_2->in_ops->destroy_cache(VAR_2);
 VAR_2->eg_ops->destroy_cache(VAR_2);
}
