
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int sv_nrthreads; } ;
struct svc_pool {int sp_lock; scalar_t__ sp_nrthreads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct svc_serv*,struct svc_pool*,int) ;
 int FUNC_3 (struct svc_serv*,struct svc_pool*,int) ;

int
FUNC_4(struct svc_serv *VAR_0, struct svc_pool *VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0)) {

  VAR_2 -= (VAR_0->sv_nrthreads-1);
 } else {
  FUNC_0(&VAR_1->sp_lock);
  VAR_2 -= VAR_1->sp_nrthreads;
  FUNC_1(&VAR_1->sp_lock);
 }

 if (VAR_2 > 0)
  return FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_2 < 0)
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 return 0;
}
