
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int type; int * ops; } ;
struct sock {int sk_protocol; int sk_destruct; } ;
struct net {int dummy; } ;
struct TYPE_4__ {struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;
struct TYPE_5__ {TYPE_1__* cb; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;



 TYPE_1__* FUNC_0 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int const) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (struct net*,int *) ;
 struct sock* FUNC_5 (struct net*,int,int ,int *,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_13, struct socket *VAR_14, int VAR_15,
         int VAR_16)
{
 struct sock *VAR_17;
 ax25_cb *VAR_18;

 if (VAR_15 < 0 || VAR_15 > VAR_8)
  return -VAR_3;

 if (!FUNC_4(VAR_13, &VAR_12))
  return -VAR_2;

 switch (VAR_14->type) {
 case 130:
  if (VAR_15 == 0 || VAR_15 == 131)
   VAR_15 = VAR_0;
  break;

 case 128:
  switch (VAR_15) {
  case 0:
  case 131:
   VAR_15 = VAR_0;
   break;
  case 132:
   return -VAR_6;
  default:
   break;
  }
  break;

 case 129:
  if (!FUNC_3(VAR_1))
   return -VAR_5;
  break;
 default:
  return -VAR_6;
 }

 VAR_17 = FUNC_5(VAR_13, 131, VAR_7, &VAR_10, VAR_16);
 if (VAR_17 == ((void*)0))
  return -VAR_4;

 VAR_18 = FUNC_2(VAR_17)->cb = FUNC_0();
 if (!VAR_18) {
  FUNC_6(VAR_17);
  return -VAR_4;
 }

 FUNC_7(VAR_14, VAR_17);

 VAR_17->sk_destruct = VAR_9;
 VAR_14->ops = &VAR_11;
 VAR_17->sk_protocol = VAR_15;

 VAR_18->sk = VAR_17;

 return 0;
}
