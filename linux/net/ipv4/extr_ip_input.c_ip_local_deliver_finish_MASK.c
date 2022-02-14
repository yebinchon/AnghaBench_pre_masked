
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int protocol; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net*,struct sk_buff*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_0, struct sock *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_2, FUNC_5(VAR_2));

 FUNC_3();
 FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_2)->protocol);
 FUNC_4();

 return 0;
}
