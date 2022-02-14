
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_data_ready; } ;
struct netlink_sock {int flags; scalar_t__ netlink_rcv; } ;
struct netlink_kernel_cfg {int groups; scalar_t__ compare; int flags; int unbind; int bind; scalar_t__ input; struct mutex* cb_mutex; } ;
struct net {int dummy; } ;
struct mutex {int dummy; } ;
struct module {int dummy; } ;
struct listeners {int dummy; } ;
struct TYPE_2__ {int registered; unsigned int groups; scalar_t__ compare; int flags; int unbind; int bind; struct module* module; struct mutex* cb_mutex; int listeners; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct net*,struct socket*,struct mutex*,int,int) ;
 int FUNC_3 (struct listeners*) ;
 struct listeners* FUNC_4 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_6 ;
 struct netlink_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,struct listeners*) ;
 scalar_t__ FUNC_11 (int ,int ,int,struct socket**) ;
 int FUNC_12 (struct socket*) ;

struct sock *
FUNC_13(struct net *VAR_7, int VAR_8, struct module *VAR_9,
   struct netlink_kernel_cfg *VAR_10)
{
 struct socket *VAR_11;
 struct sock *VAR_12;
 struct netlink_sock *VAR_13;
 struct listeners *VAR_14 = ((void*)0);
 struct mutex *VAR_15 = VAR_10 ? VAR_10->cb_mutex : ((void*)0);
 unsigned int VAR_16;

 FUNC_0(!VAR_6);

 if (VAR_8 < 0 || VAR_8 >= VAR_1)
  return ((void*)0);

 if (FUNC_11(VAR_3, VAR_4, VAR_8, &VAR_11))
  return ((void*)0);

 if (FUNC_2(VAR_7, VAR_11, VAR_15, VAR_8, 1) < 0)
  goto out_sock_release_nosk;

 VAR_12 = VAR_11->sk;

 if (!VAR_10 || VAR_10->groups < 32)
  VAR_16 = 32;
 else
  VAR_16 = VAR_10->groups;

 VAR_14 = FUNC_4(sizeof(*VAR_14) + FUNC_1(VAR_16), VAR_0);
 if (!VAR_14)
  goto out_sock_release;

 VAR_12->sk_data_ready = VAR_5;
 if (VAR_10 && VAR_10->input)
  FUNC_9(VAR_12)->netlink_rcv = VAR_10->input;

 if (FUNC_5(VAR_12, 0))
  goto out_sock_release;

 VAR_13 = FUNC_9(VAR_12);
 VAR_13->flags |= VAR_2;

 FUNC_7();
 if (!VAR_6[VAR_8].registered) {
  VAR_6[VAR_8].groups = VAR_16;
  FUNC_10(VAR_6[VAR_8].listeners, VAR_14);
  VAR_6[VAR_8].cb_mutex = VAR_15;
  VAR_6[VAR_8].module = VAR_9;
  if (VAR_10) {
   VAR_6[VAR_8].bind = VAR_10->bind;
   VAR_6[VAR_8].unbind = VAR_10->unbind;
   VAR_6[VAR_8].flags = VAR_10->flags;
   if (VAR_10->compare)
    VAR_6[VAR_8].compare = VAR_10->compare;
  }
  VAR_6[VAR_8].registered = 1;
 } else {
  FUNC_3(VAR_14);
  VAR_6[VAR_8].registered++;
 }
 FUNC_8();
 return VAR_12;

out_sock_release:
 FUNC_3(VAR_14);
 FUNC_6(VAR_12);
 return ((void*)0);

out_sock_release_nosk:
 FUNC_12(VAR_11);
 return ((void*)0);
}
