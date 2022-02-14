
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_event_s {scalar_t__ index; } ;


 scalar_t__ FUNC_0 (int *,struct fpm_event_s*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct fpm_event_s *VAR_2)
{
 if (VAR_2->index >= 0 && FUNC_0(&VAR_0, VAR_2) != 0) {
  return -1;
 }

 if (VAR_2->index < 0 && FUNC_0(&VAR_1, VAR_2) != 0) {
  return -1;
 }

 return 0;
}
