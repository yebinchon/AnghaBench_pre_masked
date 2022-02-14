
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; int state; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (char*,struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,struct sock*) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 struct sock* FUNC_3 (struct net*,struct socket*,int,int ,int) ;
 int FUNC_4 (struct sock*,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct net *VAR_12, struct socket *VAR_13, int VAR_14,
        int VAR_15)
{
 struct sock *VAR_16;

 FUNC_0("sock %p", VAR_13);

 VAR_13->state = VAR_9;

 if (VAR_13->type != VAR_7 && VAR_13->type != VAR_8 &&
     VAR_13->type != VAR_5 && VAR_13->type != VAR_6)
  return -VAR_3;

 if (VAR_13->type == VAR_6 && !VAR_15 && !FUNC_2(VAR_0))
  return -VAR_2;

 VAR_13->ops = &VAR_11;

 VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_4, VAR_15);
 if (!VAR_16)
  return -VAR_1;

 FUNC_4(VAR_16, ((void*)0));
 FUNC_1(&VAR_10, VAR_16);
 return 0;
}
