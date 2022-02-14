
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int dummy; } ;
struct svc_serv {int dummy; } ;
struct sockaddr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct svc_xprt* FUNC_0 (struct svc_serv*,int ,struct net*,struct sockaddr*,int,int) ;

__attribute__((used)) static struct svc_xprt *FUNC_1(struct svc_serv *VAR_1,
           struct net *VAR_2,
           struct sockaddr *VAR_3, int VAR_4,
           int VAR_5)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
