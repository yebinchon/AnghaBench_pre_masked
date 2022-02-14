
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {scalar_t__ listen_address_domain; TYPE_1__* config; } ;
struct TYPE_2__ {int listen_allowed_clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fpm_worker_pool_s *VAR_1)
{
 if (VAR_1->listen_address_domain == VAR_0) {
  FUNC_0(VAR_1->config->listen_allowed_clients);
 }
 return 0;
}
