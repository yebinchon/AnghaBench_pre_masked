
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_event_s {int dummy; } ;
struct fpm_event_queue_s {struct fpm_event_queue_s* next; struct fpm_event_s* ev; } ;



__attribute__((used)) static struct fpm_event_s *FUNC_0(struct fpm_event_queue_s *VAR_0, struct fpm_event_s *VAR_1)
{
 if (!VAR_1) {
  return ((void*)0);
 }

 while (VAR_0) {
  if (VAR_0->ev == VAR_1) {
   return VAR_1;
  }
  VAR_0 = VAR_0->next;
 }

 return ((void*)0);
}
