
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; } ;
struct sock {int dummy; } ;
struct net {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 struct sock* FUNC_1 (struct net*,int ,int ,int *,int) ;
 int FUNC_2 (struct socket*,struct sock*) ;
 int FUNC_3 (struct net*,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_11, struct socket *VAR_12, int VAR_13,
    int VAR_14)
{
 struct sock *VAR_15;
 int VAR_16 = -VAR_4;

 if (!FUNC_4(VAR_11->user_ns, VAR_0))
  return -VAR_3;

 if (!FUNC_3(VAR_11, &VAR_9))
  return -VAR_1;

 if (FUNC_0(VAR_12->type == VAR_7 || VAR_12->type == VAR_8)) {
  VAR_16 = -VAR_2;
  VAR_15 = FUNC_1(VAR_11, VAR_6, VAR_5, &VAR_10, VAR_14);
  if (VAR_15) {
   VAR_16 = 0;
   FUNC_2(VAR_12, VAR_15);
  }
 }
 return VAR_16;
}
