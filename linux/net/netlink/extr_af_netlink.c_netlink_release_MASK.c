
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {size_t sk_protocol; int sk_write_queue; } ;
struct netlink_sock {int ngroups; int rcu; int module; scalar_t__ portid; scalar_t__ bound; int wait; int (* netlink_unbind ) (int ,int) ;int groups; } ;
struct netlink_notify {size_t protocol; scalar_t__ portid; int net; } ;
struct listeners {int dummy; } ;
struct TYPE_2__ {scalar_t__ registered; scalar_t__ flags; int * unbind; int * bind; int * module; int listeners; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct netlink_notify*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct listeners*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int VAR_6 ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct listeners* FUNC_13 (int ) ;
 TYPE_1__* VAR_7 ;
 struct netlink_sock* FUNC_14 (struct sock*) ;
 int VAR_8 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (int ,int *,int) ;
 int FUNC_19 (int ,int) ;
 scalar_t__ FUNC_20 (int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct socket *VAR_9)
{
 struct sock *VAR_10 = VAR_9->sk;
 struct netlink_sock *VAR_11;

 if (!VAR_10)
  return 0;

 FUNC_10(VAR_10);
 FUNC_17(VAR_10);
 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11->netlink_unbind) {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_11->ngroups; VAR_12++)
   if (FUNC_20(VAR_12, VAR_11->groups))
    VAR_11->netlink_unbind(FUNC_16(VAR_10), VAR_12 + 1);
 }
 if (VAR_10->sk_protocol == VAR_0 &&
     FUNC_2(&VAR_3) == 0)
  FUNC_21(&VAR_4);

 VAR_9->sk = ((void*)0);
 FUNC_22(&VAR_11->wait);

 FUNC_15(&VAR_10->sk_write_queue);

 if (VAR_11->portid && VAR_11->bound) {
  struct netlink_notify VAR_13 = {
      .net = FUNC_16(VAR_10),
      .protocol = VAR_10->sk_protocol,
      .portid = VAR_11->portid,
       };
  FUNC_3(&VAR_5,
    VAR_1, &VAR_13);
 }

 FUNC_8(VAR_11->module);

 if (FUNC_9(VAR_10)) {
  FUNC_11();
  FUNC_0(VAR_7[VAR_10->sk_protocol].registered == 0);
  if (--VAR_7[VAR_10->sk_protocol].registered == 0) {
   struct listeners *VAR_14;

   VAR_14 = FUNC_13(VAR_7[VAR_10->sk_protocol].listeners);
   FUNC_1(VAR_7[VAR_10->sk_protocol].listeners, ((void*)0));
   FUNC_5(VAR_14, VAR_8);
   VAR_7[VAR_10->sk_protocol].module = ((void*)0);
   VAR_7[VAR_10->sk_protocol].bind = ((void*)0);
   VAR_7[VAR_10->sk_protocol].unbind = ((void*)0);
   VAR_7[VAR_10->sk_protocol].flags = 0;
   VAR_7[VAR_10->sk_protocol].registered = 0;
  }
  FUNC_12();
 }

 FUNC_6();
 FUNC_18(FUNC_16(VAR_10), &VAR_6, -1);
 FUNC_7();
 FUNC_4(&VAR_11->rcu, VAR_2);
 return 0;
}
