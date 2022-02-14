
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {TYPE_1__* sv_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* svo_shutdown ) (struct svc_serv*,struct net*) ;} ;


 int FUNC_0 (struct svc_serv*,struct net*) ;
 int FUNC_1 (struct svc_serv*,struct net*) ;

void FUNC_2(struct svc_serv *VAR_0, struct net *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 if (VAR_0->sv_ops->svo_shutdown)
  VAR_0->sv_ops->svo_shutdown(VAR_0, VAR_1);
}
