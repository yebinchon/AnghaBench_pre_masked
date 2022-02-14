
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,int ,int ,int ) ;
 int FUNC_1 (struct net*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_5(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 FUNC_1(VAR_2, FUNC_3(FUNC_4(VAR_4)),
        VAR_0);
 FUNC_0(VAR_2, FUNC_3(FUNC_4(VAR_4)),
        VAR_1, VAR_4->len);
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
