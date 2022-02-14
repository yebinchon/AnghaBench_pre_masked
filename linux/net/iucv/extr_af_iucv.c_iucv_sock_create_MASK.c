
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; int * ops; int state; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 struct sock* FUNC_0 (struct socket*,int,int ,int) ;
 int FUNC_1 (struct sock*,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct net *VAR_7, struct socket *VAR_8, int VAR_9,
       int VAR_10)
{
 struct sock *VAR_11;

 if (VAR_9 && VAR_9 != VAR_4)
  return -VAR_1;

 VAR_8->state = VAR_5;

 switch (VAR_8->type) {
 case 128:
  VAR_8->ops = &VAR_6;
  break;
 case 129:

  VAR_8->ops = &VAR_6;
  break;
 default:
  return -VAR_2;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_3, VAR_10);
 if (!VAR_11)
  return -VAR_0;

 FUNC_1(VAR_11, ((void*)0));

 return 0;
}
