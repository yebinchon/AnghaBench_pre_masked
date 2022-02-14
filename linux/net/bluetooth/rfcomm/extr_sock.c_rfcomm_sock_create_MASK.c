
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct sock* FUNC_1 (struct net*,struct socket*,int,int ,int) ;
 int FUNC_2 (struct sock*,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_7, struct socket *VAR_8,
         int VAR_9, int VAR_10)
{
 struct sock *VAR_11;

 FUNC_0("sock %p", VAR_8);

 VAR_8->state = VAR_5;

 if (VAR_8->type != VAR_4 && VAR_8->type != VAR_3)
  return -VAR_1;

 VAR_8->ops = &VAR_6;

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_2, VAR_10);
 if (!VAR_11)
  return -VAR_0;

 FUNC_2(VAR_11, ((void*)0));
 return 0;
}
