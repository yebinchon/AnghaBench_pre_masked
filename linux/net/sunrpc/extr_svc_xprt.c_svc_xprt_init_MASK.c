
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt_class {int xcl_ops; } ;
struct svc_xprt {int xpt_remotebuf; int xpt_net; int xpt_flags; int xpt_lock; int xpt_mutex; int xpt_users; int xpt_deferred; int xpt_ready; int xpt_list; struct svc_serv* xpt_server; int xpt_ref; int xpt_ops; struct svc_xprt_class* xpt_class; } ;
struct svc_serv {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_xprt*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(struct net *VAR_1, struct svc_xprt_class *VAR_2,
     struct svc_xprt *VAR_3, struct svc_serv *VAR_4)
{
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->xpt_class = VAR_2;
 VAR_3->xpt_ops = VAR_2->xcl_ops;
 FUNC_2(&VAR_3->xpt_ref);
 VAR_3->xpt_server = VAR_4;
 FUNC_0(&VAR_3->xpt_list);
 FUNC_0(&VAR_3->xpt_ready);
 FUNC_0(&VAR_3->xpt_deferred);
 FUNC_0(&VAR_3->xpt_users);
 FUNC_4(&VAR_3->xpt_mutex);
 FUNC_6(&VAR_3->xpt_lock);
 FUNC_5(VAR_0, &VAR_3->xpt_flags);
 VAR_3->xpt_net = FUNC_1(VAR_1);
 FUNC_7(VAR_3->xpt_remotebuf, "uninitialized");
}
