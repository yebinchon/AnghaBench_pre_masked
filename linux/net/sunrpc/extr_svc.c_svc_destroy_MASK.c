
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {scalar_t__ sv_nrthreads; struct svc_serv* sv_pools; int sv_tempsocks; int sv_permsocks; int sv_temptimer; TYPE_1__* sv_program; } ;
struct TYPE_2__ {int pg_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct svc_serv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (struct svc_serv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,struct svc_serv*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct svc_serv*) ;
 int FUNC_9 (struct svc_serv*) ;

void
FUNC_10(struct svc_serv *VAR_0)
{
 FUNC_3("svc: svc_destroy(%s, %d)\n",
    VAR_0->sv_program->pg_name,
    VAR_0->sv_nrthreads);

 if (VAR_0->sv_nrthreads) {
  if (--(VAR_0->sv_nrthreads) != 0) {
   FUNC_9(VAR_0);
   return;
  }
 } else
  FUNC_6("svc_destroy: no threads for serv=%p!\n", VAR_0);

 FUNC_2(&VAR_0->sv_temptimer);





 FUNC_0(!FUNC_5(&VAR_0->sv_permsocks));
 FUNC_0(!FUNC_5(&VAR_0->sv_tempsocks));

 FUNC_1(VAR_0);

 if (FUNC_8(VAR_0))
  FUNC_7();

 FUNC_4(VAR_0->sv_pools);
 FUNC_4(VAR_0);
}
