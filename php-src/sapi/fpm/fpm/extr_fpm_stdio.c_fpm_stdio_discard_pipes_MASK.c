
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_child_s {TYPE_2__* wp; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ catch_workers_output; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;

int FUNC_1(struct fpm_child_s *VAR_2)
{
 if (0 == VAR_2->wp->config->catch_workers_output) {
  return 0;
 }

 FUNC_0(VAR_1[1]);
 FUNC_0(VAR_0[1]);

 FUNC_0(VAR_1[0]);
 FUNC_0(VAR_0[0]);
 return 0;
}
