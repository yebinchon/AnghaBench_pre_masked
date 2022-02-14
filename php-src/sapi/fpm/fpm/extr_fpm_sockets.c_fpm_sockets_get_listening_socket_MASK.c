
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct fpm_worker_pool_s {int listen_address_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int ,int ,int ) ;
 int FUNC_1 (struct fpm_worker_pool_s*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_2(struct fpm_worker_pool_s *VAR_2, struct sockaddr *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(0, VAR_3, 0, VAR_2->listen_address_domain, VAR_0);
 if (VAR_5 >= 0) {
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5, VAR_3, 0, VAR_2->listen_address_domain, VAR_1);

 return VAR_5;
}
