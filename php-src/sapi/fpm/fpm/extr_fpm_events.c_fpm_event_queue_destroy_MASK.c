
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_event_queue_s {struct fpm_event_queue_s* next; } ;
struct TYPE_2__ {int (* clean ) () ;} ;


 struct fpm_event_queue_s* VAR_0 ;
 int FUNC_0 (struct fpm_event_queue_s*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct fpm_event_queue_s **VAR_2)
{
 struct fpm_event_queue_s *VAR_3, *VAR_4;

 if (!VAR_2) {
  return;
 }

 if (*VAR_2 == VAR_0 && VAR_1->clean) {
  VAR_1->clean();
 }

 VAR_3 = *VAR_2;
 while (VAR_3) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;

  FUNC_0(VAR_4);
 }
 *VAR_2 = ((void*)0);
}
