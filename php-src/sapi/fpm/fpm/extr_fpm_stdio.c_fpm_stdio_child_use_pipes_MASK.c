
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_child_s {TYPE_2__* wp; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ catch_workers_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;

void FUNC_2(struct fpm_child_s *VAR_4)
{
 if (VAR_4->wp->config->catch_workers_output) {
  FUNC_1(VAR_3[1], VAR_1);
  FUNC_1(VAR_2[1], VAR_0);
  FUNC_0(VAR_3[0]); FUNC_0(VAR_3[1]);
  FUNC_0(VAR_2[0]); FUNC_0(VAR_2[1]);
 } else {

  FUNC_1(VAR_1, VAR_0);
 }
}
