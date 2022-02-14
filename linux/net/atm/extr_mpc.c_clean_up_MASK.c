
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpoa_client {int egress_lock; TYPE_3__* eg_cache; } ;
struct TYPE_5__ {int cache_id; } ;
struct TYPE_4__ {TYPE_2__ eg_info; } ;
struct k_message {int type; TYPE_1__ content; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_2__ ctrl_info; } ;
typedef TYPE_3__ eg_cache_entry ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct k_message *VAR_1, struct mpoa_client *VAR_2, int VAR_3)
{

 eg_cache_entry *VAR_4;
 VAR_1->type = VAR_0;



 FUNC_2(&VAR_2->egress_lock);
 VAR_4 = VAR_2->eg_cache;
 while (VAR_4 != ((void*)0)) {
  VAR_1->content.eg_info = VAR_4->ctrl_info;
  FUNC_0("cache_id %u\n", VAR_4->ctrl_info.cache_id);
  FUNC_1(VAR_1, VAR_2);
  VAR_4 = VAR_4->next;
 }
 FUNC_3(&VAR_2->egress_lock);

 VAR_1->type = VAR_3;
 FUNC_1(VAR_1, VAR_2);
}
