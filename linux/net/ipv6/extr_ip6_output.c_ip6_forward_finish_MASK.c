
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ tstamp; scalar_t__ offload_l3_fwd_mark; int len; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ,int ,int ) ;
 int FUNC_1 (struct net*,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct dst_entry*) ;
 struct dst_entry* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(struct net *VAR_2, struct sock *VAR_3,
         struct sk_buff *VAR_4)
{
 struct dst_entry *VAR_5 = FUNC_5(VAR_4);

 FUNC_1(VAR_2, FUNC_4(VAR_5), VAR_0);
 FUNC_0(VAR_2, FUNC_4(VAR_5), VAR_1, VAR_4->len);
 VAR_4->tstamp = 0;
 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
