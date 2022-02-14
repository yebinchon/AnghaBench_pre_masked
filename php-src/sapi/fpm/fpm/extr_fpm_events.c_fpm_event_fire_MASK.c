
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_event_s {int arg; int which; int (* callback ) (struct fpm_event_s*,int ,int ) ;} ;


 int FUNC_0 (struct fpm_event_s*,int ,int ) ;

void FUNC_1(struct fpm_event_s *VAR_0)
{
 if (!VAR_0 || !VAR_0->callback) {
  return;
 }

 (*VAR_0->callback)( (struct fpm_event_s *) VAR_0, VAR_0->which, VAR_0->arg);
}
