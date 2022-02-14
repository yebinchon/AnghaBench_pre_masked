
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
 int VAR_4 ;
 struct sock* FUNC_1 (struct net*,struct socket*,int,int ,int) ;
 int FUNC_2 (struct sock*,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_6, struct socket *VAR_7, int VAR_8,
      int VAR_9)
{
 struct sock *VAR_10;

 FUNC_0("sock %p", VAR_7);

 VAR_7->state = VAR_4;

 if (VAR_7->type != VAR_3)
  return -VAR_1;

 VAR_7->ops = &VAR_5;

 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_2, VAR_9);
 if (!VAR_10)
  return -VAR_0;

 FUNC_2(VAR_10, ((void*)0));
 return 0;
}
