
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {struct fpm_worker_pool_s* next; } ;
struct TYPE_2__ {int max_requests; int listening_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpm_worker_pool_s*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 struct fpm_worker_pool_s* VAR_4 ;

int FUNC_4(int *VAR_5)
{
 struct fpm_worker_pool_s *VAR_6;


 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  int VAR_7;

  VAR_7 = FUNC_0(VAR_6);

  if (!VAR_7) {
   goto run_child;
  }


  if (VAR_7 == 2) {
   FUNC_3(VAR_2, VAR_1);
   FUNC_2(1);
  }
 }


 FUNC_2(0);

run_child:

 FUNC_1(VAR_0);

 *VAR_5 = VAR_3.max_requests;
 return VAR_3.listening_socket;
}
