
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned long tv_sec; unsigned long tv_usec; } ;
struct fpm_event_s {int index; int flags; int which; struct timeval frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 scalar_t__ FUNC_1 (int *,struct fpm_event_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fpm_event_s*,struct timeval) ;

int FUNC_3(struct fpm_event_s *VAR_4, unsigned long int VAR_5)
{
 struct timeval VAR_6;
 struct timeval VAR_7;

 if (!VAR_4) {
  return -1;
 }

 VAR_4->index = -1;


 if (VAR_4->flags & VAR_0) {
  VAR_4->which = VAR_0;
  if (FUNC_1(&VAR_2, VAR_4) != 0) {
   return -1;
  }
  return 0;
 }


 VAR_4->which = VAR_1;

 FUNC_0(&VAR_6);
 if (VAR_5 >= 1000) {
  VAR_7.tv_sec = VAR_5 / 1000;
  VAR_7.tv_usec = (VAR_5 % 1000) * 1000;
 } else {
  VAR_7.tv_sec = 0;
  VAR_7.tv_usec = VAR_5 * 1000;
 }
 VAR_4->frequency = VAR_7;
 FUNC_2(VAR_4, VAR_6);

 if (FUNC_1(&VAR_3, VAR_4) != 0) {
  return -1;
 }

 return 0;
}
