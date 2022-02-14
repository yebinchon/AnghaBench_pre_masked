
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct fpm_scoreboard_proc_s {struct timeval tv; } ;
struct fpm_child_s {int scoreboard_i; TYPE_1__* wp; } ;
struct TYPE_2__ {int scoreboard; } ;


 struct fpm_scoreboard_proc_s* FUNC_0 (int ,int ) ;

int FUNC_1(struct fpm_child_s *VAR_0, struct timeval *VAR_1)
{
 struct fpm_scoreboard_proc_s *VAR_2;

 if (!VAR_1) return -1;

 VAR_2 = FUNC_0(VAR_0->wp->scoreboard, VAR_0->scoreboard_i);
 if (!VAR_2) {
  return -1;
 }

 *VAR_1 = VAR_2->tv;

 return 1;
}
