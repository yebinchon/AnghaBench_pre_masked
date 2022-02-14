
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {int xpt_list; int xpt_flags; } ;
struct TYPE_2__ {int * function; } ;
struct svc_serv {int sv_lock; TYPE_1__ sv_temptimer; int sv_tmpcnt; int sv_tempsocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct svc_xprt*) ;

__attribute__((used)) static void FUNC_6(struct svc_serv *VAR_5, struct svc_xprt *VAR_6)
{
 FUNC_3(&VAR_5->sv_lock);
 FUNC_2(VAR_1, &VAR_6->xpt_flags);
 FUNC_0(&VAR_6->xpt_list, &VAR_5->sv_tempsocks);
 VAR_5->sv_tmpcnt++;
 if (VAR_5->sv_temptimer.function == ((void*)0)) {

  VAR_5->sv_temptimer.function = VAR_3;
  FUNC_1(&VAR_5->sv_temptimer,
     VAR_2 + VAR_4 * VAR_0);
 }
 FUNC_4(&VAR_5->sv_lock);
 FUNC_5(VAR_6);
}
