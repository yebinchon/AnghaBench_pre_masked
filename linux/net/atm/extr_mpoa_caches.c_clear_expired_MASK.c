
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct mpoa_client {int egress_lock; TYPE_3__* eg_ops; TYPE_4__* eg_cache; } ;
struct TYPE_7__ {scalar_t__ holding_time; int cache_id; } ;
struct TYPE_6__ {TYPE_2__ eg_info; } ;
struct k_message {TYPE_1__ content; int type; } ;
struct TYPE_9__ {scalar_t__ time; TYPE_2__ ctrl_info; struct TYPE_9__* next; } ;
typedef TYPE_4__ eg_cache_entry ;
struct TYPE_8__ {int (* remove_entry ) (TYPE_4__*,struct mpoa_client*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct k_message*,struct mpoa_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,struct mpoa_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mpoa_client *VAR_1)
{
 eg_cache_entry *VAR_2, *VAR_3;
 time64_t VAR_4;
 struct k_message VAR_5;

 VAR_4 = FUNC_1();

 FUNC_5(&VAR_1->egress_lock);
 VAR_2 = VAR_1->eg_cache;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->next;
  if ((VAR_4 - VAR_2->time) > VAR_2->ctrl_info.holding_time) {
   VAR_5.type = VAR_0;
   VAR_5.content.eg_info = VAR_2->ctrl_info;
   FUNC_0("egress_cache: holding time expired, cache_id = %u.\n",
    FUNC_3(VAR_2->ctrl_info.cache_id));
   FUNC_2(&VAR_5, VAR_1);
   VAR_1->eg_ops->remove_entry(VAR_2, VAR_1);
  }
  VAR_2 = VAR_3;
 }
 FUNC_6(&VAR_1->egress_lock);
}
