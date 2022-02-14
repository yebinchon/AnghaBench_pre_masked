
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; } ;
struct sock {int sk_protocol; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 struct sock* FUNC_0 (struct net*,struct socket*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (struct net*,int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
       int VAR_12)
{
 struct sock *VAR_13;

 if (VAR_11 < 0 || VAR_11 > VAR_7)
  return -VAR_2;

 if (!FUNC_1(VAR_9, &VAR_8))
  return -VAR_1;

 switch (VAR_10->type) {
 case 129:
  if (VAR_11 != VAR_0)
   return -VAR_4;
  break;
 case 128:
  break;
 default:
  return -VAR_5;
 }


 if ((VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_6, VAR_12)) == ((void*)0))
  return -VAR_3;

 VAR_13->sk_protocol = VAR_11;

 return 0;
}
