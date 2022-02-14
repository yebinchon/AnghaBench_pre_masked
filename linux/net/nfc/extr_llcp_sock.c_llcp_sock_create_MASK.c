
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int dummy; } ;
struct nfc_protocol {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct sock* FUNC_1 (struct socket*,scalar_t__,int ,int) ;
 int FUNC_2 (char*,struct socket*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_10, struct socket *VAR_11,
       const struct nfc_protocol *VAR_12, int VAR_13)
{
 struct sock *VAR_14;

 FUNC_2("%p\n", VAR_11);

 if (VAR_11->type != VAR_7 &&
     VAR_11->type != VAR_5 &&
     VAR_11->type != VAR_6)
  return -VAR_3;

 if (VAR_11->type == VAR_6) {
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  VAR_11->ops = &VAR_8;
 } else {
  VAR_11->ops = &VAR_9;
 }

 VAR_14 = FUNC_1(VAR_11, VAR_11->type, VAR_4, VAR_13);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 return 0;
}
