
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct fpm_child_s *VAR_3)
{
 if (0 == VAR_3->wp->config->catch_workers_output) {
  return 0;
 }

 if (0 > FUNC_2(VAR_2)) {
  FUNC_3(VAR_0, "failed to prepare the stdout pipe");
  return -1;
 }

 if (0 > FUNC_2(VAR_1)) {
  FUNC_3(VAR_0, "failed to prepare the stderr pipe");
  FUNC_0(VAR_2[0]);
  FUNC_0(VAR_2[1]);
  return -1;
 }

 if (0 > FUNC_1(VAR_2[0], 0) || 0 > FUNC_1(VAR_1[0], 0)) {
  FUNC_3(VAR_0, "failed to unblock pipes");
  FUNC_0(VAR_2[0]);
  FUNC_0(VAR_2[1]);
  FUNC_0(VAR_1[0]);
  FUNC_0(VAR_1[1]);
  return -1;
 }
 return 0;
}
