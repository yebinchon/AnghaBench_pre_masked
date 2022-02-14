
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {scalar_t__ lock; } ;



void FUNC_0(struct fpm_scoreboard_s *VAR_0) {
 if (!VAR_0) {
  return;
 }

 VAR_0->lock = 0;
}
