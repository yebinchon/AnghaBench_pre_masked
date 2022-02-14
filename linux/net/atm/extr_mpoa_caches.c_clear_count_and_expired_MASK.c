
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct mpoa_client {int ingress_lock; TYPE_2__* in_ops; TYPE_3__* in_cache; } ;
struct TYPE_5__ {scalar_t__ holding_time; int in_dst_ip; } ;
struct TYPE_7__ {scalar_t__ time; TYPE_1__ ctrl_info; struct TYPE_7__* next; scalar_t__ count; } ;
typedef TYPE_3__ in_cache_entry ;
struct TYPE_6__ {int (* remove_entry ) (TYPE_3__*,struct mpoa_client*) ;} ;


 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,struct mpoa_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mpoa_client *VAR_0)
{
 in_cache_entry *VAR_1, *VAR_2;
 time64_t VAR_3;

 VAR_3 = FUNC_1();

 FUNC_3(&VAR_0->ingress_lock);
 VAR_1 = VAR_0->in_cache;
 while (VAR_1 != ((void*)0)) {
  VAR_1->count = 0;
  VAR_2 = VAR_1->next;
  if ((VAR_3 - VAR_1->time) > VAR_1->ctrl_info.holding_time) {
   FUNC_0("holding time expired, ip = %pI4\n",
    &VAR_1->ctrl_info.in_dst_ip);
   VAR_0->in_ops->remove_entry(VAR_1, VAR_0);
  }
  VAR_1 = VAR_2;
 }
 FUNC_4(&VAR_0->ingress_lock);
}
