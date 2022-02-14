
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_list; int xpt_flags; } ;
struct svc_serv {int sv_lock; int sv_permsocks; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svc_xprt*) ;

void FUNC_5(struct svc_serv *VAR_1, struct svc_xprt *VAR_2)
{
 FUNC_0(VAR_0, &VAR_2->xpt_flags);
 FUNC_2(&VAR_1->sv_lock);
 FUNC_1(&VAR_2->xpt_list, &VAR_1->sv_permsocks);
 FUNC_3(&VAR_1->sv_lock);
 FUNC_4(VAR_2);
}
