
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct flowi4 {int dummy; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct rtable*,struct flowi4*,int ) ;
 int FUNC_1 (struct flowi4*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_0, struct sock *VAR_1,
         struct sk_buff *VAR_2, u32 VAR_3)
{
 struct rtable *VAR_4 = (struct rtable *) VAR_0;
 struct flowi4 VAR_5;

 FUNC_1(&VAR_5, VAR_1, VAR_2);
 FUNC_0(VAR_4, &VAR_5, VAR_3);
}
