
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct svc_serv*,struct net*) ;

int FUNC_2(struct svc_serv *VAR_0, struct net *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;


 FUNC_1(VAR_0, VAR_1);
 return 0;
}
