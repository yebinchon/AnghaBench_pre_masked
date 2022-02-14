
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct mpoa_client {int ingress_lock; struct in_cache_entry* in_cache; } ;
struct TYPE_2__ {int holding_time; } ;
struct in_cache_entry {scalar_t__ entry_state; int refresh_time; int reply_wait; struct in_cache_entry* next; TYPE_1__ ctrl_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mpoa_client *VAR_2)
{
 time64_t VAR_3;
 struct in_cache_entry *VAR_4 = VAR_2->in_cache;

 FUNC_0("refresh_entries\n");
 VAR_3 = FUNC_2();

 FUNC_3(&VAR_2->ingress_lock);
 while (VAR_4 != ((void*)0)) {
  if (VAR_4->entry_state == VAR_1) {
   if (!(VAR_4->refresh_time))
    VAR_4->refresh_time = (2 * (VAR_4->ctrl_info.holding_time))/3;
   if ((VAR_3 - VAR_4->reply_wait) >
       VAR_4->refresh_time) {
    FUNC_1("refreshing an entry.\n");
    VAR_4->entry_state = VAR_0;

   }
  }
  VAR_4 = VAR_4->next;
 }
 FUNC_4(&VAR_2->ingress_lock);
}
