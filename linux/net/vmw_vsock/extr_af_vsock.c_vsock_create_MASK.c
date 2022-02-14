
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; int state; int * ops; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ FUNC_0 (struct net*,struct socket*,int *,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_9, struct socket *VAR_10,
   int VAR_11, int VAR_12)
{
 if (!VAR_10)
  return -VAR_0;

 if (VAR_11 && VAR_11 != VAR_5)
  return -VAR_2;

 switch (VAR_10->type) {
 case 129:
  VAR_10->ops = &VAR_7;
  break;
 case 128:
  VAR_10->ops = &VAR_8;
  break;
 default:
  return -VAR_3;
 }

 VAR_10->state = VAR_6;

 return FUNC_0(VAR_9, VAR_10, ((void*)0), VAR_4, 0, VAR_12) ? 0 : -VAR_1;
}
