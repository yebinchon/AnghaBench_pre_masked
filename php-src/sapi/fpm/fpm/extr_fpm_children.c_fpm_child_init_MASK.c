
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {TYPE_1__* config; int listening_socket; } ;
struct TYPE_4__ {int listening_socket; int max_requests; } ;
struct TYPE_3__ {int name; int pm_max_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fpm_worker_pool_s*) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_3 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_4 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_7 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_8 (struct fpm_worker_pool_s*) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_10(struct fpm_worker_pool_s *VAR_3)
{
 VAR_2.max_requests = VAR_3->config->pm_max_requests;
 VAR_2.listening_socket = FUNC_0(VAR_3->listening_socket);

 if (0 > FUNC_7(VAR_3) ||
     0 > FUNC_3(VAR_3) ||
     0 > FUNC_6(VAR_3) ||
     0 > FUNC_8(VAR_3) ||
     0 > FUNC_5() ||
     0 > FUNC_2(VAR_3) ||
     0 > FUNC_4(VAR_3)) {

  FUNC_9(VAR_1, "[pool %s] child failed to initialize", VAR_3->config->name);
  FUNC_1(VAR_0);
 }
}
