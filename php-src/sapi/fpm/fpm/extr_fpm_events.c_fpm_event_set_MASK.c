
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_event_s {int fd; void (* callback ) (struct fpm_event_s*,short,void*) ;int flags; void* arg; } ;


 int FUNC_0 (struct fpm_event_s*,int ,int) ;

int FUNC_1(struct fpm_event_s *VAR_0, int VAR_1, int VAR_2, void (*VAR_3)(struct fpm_event_s *, short, void *), void *VAR_4)
{
 if (!VAR_0 || !VAR_3 || VAR_1 < -1) {
  return -1;
 }
 FUNC_0(VAR_0, 0, sizeof(struct fpm_event_s));
 VAR_0->fd = VAR_1;
 VAR_0->callback = VAR_3;
 VAR_0->arg = VAR_4;
 VAR_0->flags = VAR_2;
 return 0;
}
