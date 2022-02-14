
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {scalar_t__ can_family; int can_ifindex; } ;
struct sockaddr {int dummy; } ;
struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct raw_sock {int bound; int ifindex; } ;
struct net_device {scalar_t__ type; int flags; int ifindex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_can,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,struct net_device*,struct sock*) ;
 int FUNC_6 (int ,struct net_device*,struct sock*) ;
 struct raw_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sockaddr_can *VAR_11 = (struct sockaddr_can *)VAR_9;
 struct sock *VAR_12 = VAR_8->sk;
 struct raw_sock *VAR_13 = FUNC_7(VAR_12);
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 if (VAR_10 < FUNC_0(*VAR_11, VAR_7))
  return -VAR_2;
 if (VAR_11->can_family != VAR_0)
  return -VAR_2;

 FUNC_4(VAR_12);

 if (VAR_13->bound && VAR_11->can_ifindex == VAR_13->ifindex)
  goto out;

 if (VAR_11->can_ifindex) {
  struct net_device *VAR_17;

  VAR_17 = FUNC_1(FUNC_10(VAR_12), VAR_11->can_ifindex);
  if (!VAR_17) {
   VAR_15 = -VAR_4;
   goto out;
  }
  if (VAR_17->type != VAR_1) {
   FUNC_3(VAR_17);
   VAR_15 = -VAR_4;
   goto out;
  }
  if (!(VAR_17->flags & VAR_5))
   VAR_16 = 1;

  VAR_14 = VAR_17->ifindex;


  VAR_15 = FUNC_6(FUNC_10(VAR_12), VAR_17, VAR_12);
  FUNC_3(VAR_17);
 } else {
  VAR_14 = 0;


  VAR_15 = FUNC_6(FUNC_10(VAR_12), ((void*)0), VAR_12);
 }

 if (!VAR_15) {
  if (VAR_13->bound) {

   if (VAR_13->ifindex) {
    struct net_device *VAR_18;

    VAR_18 = FUNC_1(FUNC_10(VAR_12),
             VAR_13->ifindex);
    if (VAR_18) {
     FUNC_5(FUNC_2(VAR_18),
              VAR_18, VAR_12);
     FUNC_3(VAR_18);
    }
   } else {
    FUNC_5(FUNC_10(VAR_12), ((void*)0), VAR_12);
   }
  }
  VAR_13->ifindex = VAR_14;
  VAR_13->bound = 1;
 }

 out:
 FUNC_8(VAR_12);

 if (VAR_16) {
  VAR_12->sk_err = VAR_3;
  if (!FUNC_9(VAR_12, VAR_6))
   VAR_12->sk_error_report(VAR_12);
 }

 return VAR_15;
}
