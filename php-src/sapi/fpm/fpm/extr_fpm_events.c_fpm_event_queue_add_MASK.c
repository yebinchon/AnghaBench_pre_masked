
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_event_s {int dummy; } ;
struct fpm_event_queue_s {struct fpm_event_queue_s* next; struct fpm_event_queue_s* prev; struct fpm_event_s* ev; } ;
struct TYPE_2__ {int (* add ) (struct fpm_event_s*) ;} ;


 int VAR_0 ;
 struct fpm_event_queue_s* VAR_1 ;
 scalar_t__ FUNC_0 (struct fpm_event_queue_s*,struct fpm_event_s*) ;
 struct fpm_event_queue_s* FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct fpm_event_s*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct fpm_event_queue_s **VAR_3, struct fpm_event_s *VAR_4)
{
 struct fpm_event_queue_s *VAR_5;

 if (!VAR_3 || !VAR_4) {
  return -1;
 }

 if (FUNC_0(*VAR_3, VAR_4)) {
  return 0;
 }

 if (!(VAR_5 = FUNC_1(sizeof(struct fpm_event_queue_s)))) {
  FUNC_3(VAR_0, "Unable to add the event to queue: malloc() failed");
  return -1;
 }
 VAR_5->prev = ((void*)0);
 VAR_5->next = ((void*)0);
 VAR_5->ev = VAR_4;

 if (*VAR_3) {
  (*VAR_3)->prev = VAR_5;
  VAR_5->next = *VAR_3;
 }
 *VAR_3 = VAR_5;


 if (*VAR_3 == VAR_1 && VAR_2->add) {
  VAR_2->add(VAR_4);
 }

 return 0;
}
