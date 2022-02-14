
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_flags; } ;
struct svc_serv {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct svc_xprt*) ;
 struct svc_xprt* FUNC_2 (struct svc_serv*,struct net*) ;

__attribute__((used)) static void FUNC_3(struct svc_serv *VAR_1, struct net *VAR_2)
{
 struct svc_xprt *VAR_3;

 while ((VAR_3 = FUNC_2(VAR_1, VAR_2))) {
  FUNC_0(VAR_0, &VAR_3->xpt_flags);
  FUNC_1(VAR_3);
 }
}
