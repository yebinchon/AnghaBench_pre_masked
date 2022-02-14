
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int sk; int state; } ;
struct netlink_sock {int (* netlink_bind ) (struct net*,int) ;void (* netlink_unbind ) (struct net*,int) ;struct module* module; } ;
struct net {int dummy; } ;
struct mutex {int dummy; } ;
struct module {int dummy; } ;
struct TYPE_2__ {int (* bind ) (struct net*,int) ;void (* unbind ) (struct net*,int) ;struct mutex* cb_mutex; struct module* module; scalar_t__ registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net*,struct socket*,struct mutex*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int FUNC_6 () ;
 TYPE_1__* VAR_8 ;
 struct netlink_sock* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (struct net*,int *,int) ;
 scalar_t__ FUNC_10 (struct module*) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
     int VAR_12)
{
 struct module *VAR_13 = ((void*)0);
 struct mutex *VAR_14;
 struct netlink_sock *VAR_15;
 int (*VAR_16)(struct net *VAR_17, int VAR_18);
 void (*VAR_19)(struct net *VAR_20, int VAR_21);
 int VAR_22 = 0;

 VAR_10->state = VAR_6;

 if (VAR_10->type != VAR_5 && VAR_10->type != VAR_4)
  return -VAR_1;

 if (VAR_11 < 0 || VAR_11 >= VAR_2)
  return -VAR_0;
 VAR_11 = FUNC_1(VAR_11, VAR_2);

 FUNC_5();







 if (VAR_8[VAR_11].registered &&
     FUNC_10(VAR_8[VAR_11].module))
  VAR_13 = VAR_8[VAR_11].module;
 else
  VAR_22 = -VAR_0;
 VAR_14 = VAR_8[VAR_11].cb_mutex;
 VAR_16 = VAR_8[VAR_11].bind;
 VAR_19 = VAR_8[VAR_11].unbind;
 FUNC_6();

 if (VAR_22 < 0)
  goto out;

 VAR_22 = FUNC_0(VAR_9, VAR_10, VAR_14, VAR_11, VAR_12);
 if (VAR_22 < 0)
  goto out_module;

 FUNC_2();
 FUNC_9(VAR_9, &VAR_7, 1);
 FUNC_3();

 VAR_15 = FUNC_7(VAR_10->sk);
 VAR_15->module = VAR_13;
 VAR_15->netlink_bind = VAR_16;
 VAR_15->netlink_unbind = VAR_19;
out:
 return VAR_22;

out_module:
 FUNC_4(VAR_13);
 goto out;
}
