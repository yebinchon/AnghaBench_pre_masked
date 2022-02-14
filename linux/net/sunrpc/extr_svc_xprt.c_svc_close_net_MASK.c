
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int sv_tempsocks; int sv_permsocks; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_serv*,struct net*) ;
 scalar_t__ FUNC_2 (struct svc_serv*,int *,struct net*) ;

void FUNC_3(struct svc_serv *VAR_0, struct net *VAR_1)
{
 int VAR_2 = 0;

 while (FUNC_2(VAR_0, &VAR_0->sv_permsocks, VAR_1) +
        FUNC_2(VAR_0, &VAR_0->sv_tempsocks, VAR_1)) {

  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_2++);
 }
}
