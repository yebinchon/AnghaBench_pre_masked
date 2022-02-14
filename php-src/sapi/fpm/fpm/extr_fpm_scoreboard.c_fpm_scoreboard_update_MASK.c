
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_scoreboard_s {int idle; int active; int lq; int lq_len; int lq_max; int requests; int max_children_reached; int slow_rq; int active_max; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fpm_scoreboard_s* VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, struct fpm_scoreboard_s *VAR_11)
{
 if (!VAR_11) {
  VAR_11 = VAR_2;
 }
 if (!VAR_11) {
  FUNC_2(VAR_1, "Unable to update scoreboard: the SHM has not been found");
  return;
 }


 FUNC_0(&VAR_11->lock, 0);
 if (VAR_10 == VAR_0) {
  if (VAR_3 >= 0) {
   VAR_11->idle = VAR_3;
  }
  if (VAR_4 >= 0) {
   VAR_11->active = VAR_4;
  }
  if (VAR_5 >= 0) {
   VAR_11->lq = VAR_5;
  }
  if (VAR_6 >= 0) {
   VAR_11->lq_len = VAR_6;
  }





  if (VAR_7 >= 0) {
   VAR_11->requests = VAR_7;
  }

  if (VAR_8 >= 0) {
   VAR_11->max_children_reached = VAR_8;
  }
  if (VAR_9 > 0) {
   VAR_11->slow_rq = VAR_9;
  }
 } else {
  if (VAR_11->idle + VAR_3 > 0) {
   VAR_11->idle += VAR_3;
  } else {
   VAR_11->idle = 0;
  }

  if (VAR_11->active + VAR_4 > 0) {
   VAR_11->active += VAR_4;
  } else {
   VAR_11->active = 0;
  }

  if (VAR_11->requests + VAR_7 > 0) {
   VAR_11->requests += VAR_7;
  } else {
   VAR_11->requests = 0;
  }

  if (VAR_11->max_children_reached + VAR_8 > 0) {
   VAR_11->max_children_reached += VAR_8;
  } else {
   VAR_11->max_children_reached = 0;
  }

  if (VAR_11->slow_rq + VAR_9 > 0) {
   VAR_11->slow_rq += VAR_9;
  } else {
   VAR_11->slow_rq = 0;
  }
 }

 if (VAR_11->active > VAR_11->active_max) {
  VAR_11->active_max = VAR_11->active;
 }

 FUNC_1(VAR_11->lock);
}
