
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {int sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;
struct fpm_worker_pool_s {TYPE_1__* config; } ;
typedef int sa_un ;
struct TYPE_2__ {int listen_address; } ;


 int VAR_0 ;
 int FUNC_0 (struct fpm_worker_pool_s*,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_un*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fpm_worker_pool_s *VAR_1)
{
 struct sockaddr_un VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_2(VAR_2.sun_path, VAR_1->config->listen_address, sizeof(VAR_2.sun_path));
 VAR_2.sun_family = VAR_0;
 return FUNC_0(VAR_1, (struct sockaddr *) &VAR_2, sizeof(struct sockaddr_un));
}
