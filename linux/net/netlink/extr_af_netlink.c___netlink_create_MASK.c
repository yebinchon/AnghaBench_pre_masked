
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; } ;
struct sock {int sk_protocol; int sk_destruct; } ;
struct mutex {int dummy; } ;
struct netlink_sock {int wait; struct mutex* cb_mutex; struct mutex cb_def_mutex; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mutex*,scalar_t__,int ) ;
 int FUNC_2 (struct mutex*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 struct netlink_sock* FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (struct net*,int ,int ,int *,int) ;
 int FUNC_5 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_8, struct socket *VAR_9,
       struct mutex *VAR_10, int VAR_11,
       int VAR_12)
{
 struct sock *VAR_13;
 struct netlink_sock *VAR_14;

 VAR_9->ops = &VAR_3;

 VAR_13 = FUNC_4(VAR_8, VAR_2, VAR_1, &VAR_4, VAR_12);
 if (!VAR_13)
  return -VAR_0;

 FUNC_5(VAR_9, VAR_13);

 VAR_14 = FUNC_3(VAR_13);
 if (VAR_10) {
  VAR_14->cb_mutex = VAR_10;
 } else {
  VAR_14->cb_mutex = &VAR_14->cb_def_mutex;
  FUNC_2(VAR_14->cb_mutex);
  FUNC_1(VAR_14->cb_mutex,
        VAR_7 + VAR_11,
        VAR_6[VAR_11]);
 }
 FUNC_0(&VAR_14->wait);

 VAR_13->sk_destruct = VAR_5;
 VAR_13->sk_protocol = VAR_11;
 return 0;
}
