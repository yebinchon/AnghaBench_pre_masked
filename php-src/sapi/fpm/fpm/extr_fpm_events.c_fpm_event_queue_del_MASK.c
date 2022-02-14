
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_event_s {int dummy; } ;
struct fpm_event_queue_s {struct fpm_event_queue_s* next; TYPE_1__* prev; struct fpm_event_s* ev; } ;
struct TYPE_4__ {int (* remove ) (struct fpm_event_s*) ;} ;
struct TYPE_3__ {struct fpm_event_queue_s* next; } ;


 struct fpm_event_queue_s* VAR_0 ;
 int FUNC_0 (struct fpm_event_queue_s*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct fpm_event_s*) ;

__attribute__((used)) static int FUNC_2(struct fpm_event_queue_s **VAR_2, struct fpm_event_s *VAR_3)
{
 struct fpm_event_queue_s *VAR_4;
 if (!VAR_2 || !VAR_3) {
  return -1;
 }
 VAR_4 = *VAR_2;
 while (VAR_4) {
  if (VAR_4->ev == VAR_3) {
   if (VAR_4->prev) {
    VAR_4->prev->next = VAR_4->next;
   }
   if (VAR_4->next) {
    VAR_4->next->prev = VAR_4->prev;
   }
   if (VAR_4 == *VAR_2) {
    *VAR_2 = VAR_4->next;
    if (*VAR_2) {
     (*VAR_2)->prev = ((void*)0);
    }
   }


   if (*VAR_2 == VAR_0 && VAR_1->remove) {
    VAR_1->remove(VAR_3);
   }

   FUNC_0(VAR_4);
   return 0;
  }
  VAR_4 = VAR_4->next;
 }
 return -1;
}
