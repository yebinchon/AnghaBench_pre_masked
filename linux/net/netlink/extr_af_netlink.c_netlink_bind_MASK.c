
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socket {struct sock* sk; } ;
struct sockaddr_nl {scalar_t__ nl_family; unsigned long nl_groups; scalar_t__ nl_pid; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct netlink_sock {unsigned long ngroups; int bound; scalar_t__ portid; int (* netlink_bind ) (struct net*,int) ;unsigned long* groups; scalar_t__ subscriptions; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,unsigned long,struct sock*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,scalar_t__) ;
 struct netlink_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 () ;
 struct net* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct net*,int) ;
 int FUNC_16 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_17(struct socket *VAR_5, struct sockaddr *VAR_6,
   int VAR_7)
{
 struct sock *VAR_8 = VAR_5->sk;
 struct net *VAR_9 = FUNC_14(VAR_8);
 struct netlink_sock *VAR_10 = FUNC_12(VAR_8);
 struct sockaddr_nl *VAR_11 = (struct sockaddr_nl *)VAR_6;
 int VAR_12 = 0;
 unsigned long VAR_13;
 bool VAR_14;

 if (VAR_7 < sizeof(struct sockaddr_nl))
  return -VAR_2;

 if (VAR_11->nl_family != VAR_0)
  return -VAR_2;
 VAR_13 = VAR_11->nl_groups;


 if (VAR_13) {
  if (!FUNC_1(VAR_5, VAR_4))
   return -VAR_3;
  VAR_12 = FUNC_5(VAR_8);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_10->ngroups < VAR_1)
  VAR_13 &= (1UL << VAR_10->ngroups) - 1;

 VAR_14 = VAR_10->bound;
 if (VAR_14) {

  FUNC_13();

  if (VAR_11->nl_pid != VAR_10->portid)
   return -VAR_2;
 }

 FUNC_4();
 if (VAR_10->netlink_bind && VAR_13) {
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_10->ngroups; VAR_15++) {
   if (!FUNC_16(VAR_15, &VAR_13))
    continue;
   VAR_12 = VAR_10->netlink_bind(VAR_9, VAR_15 + 1);
   if (!VAR_12)
    continue;
   FUNC_8(VAR_15, VAR_13, VAR_8);
   goto unlock;
  }
 }




 if (!VAR_14) {
  VAR_12 = VAR_11->nl_pid ?
   FUNC_3(VAR_8, VAR_11->nl_pid) :
   FUNC_2(VAR_5);
  if (VAR_12) {
   FUNC_8(VAR_10->ngroups, VAR_13, VAR_8);
   goto unlock;
  }
 }

 if (!VAR_13 && (VAR_10->groups == ((void*)0) || !(u32)VAR_10->groups[0]))
  goto unlock;
 FUNC_9();

 FUNC_6();
 FUNC_11(VAR_8, VAR_10->subscriptions +
      FUNC_0(VAR_13) -
      FUNC_0(VAR_10->groups[0]));
 VAR_10->groups[0] = (VAR_10->groups[0] & ~0xffffffffUL) | VAR_13;
 FUNC_10(VAR_8);
 FUNC_7();

 return 0;

unlock:
 FUNC_9();
 return VAR_12;
}
