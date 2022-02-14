
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*,struct sock*,int *,int ) ;
 int * FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_0, struct sock *VAR_1,
          struct sk_buff *VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 ? FUNC_1(VAR_2) : ((void*)0), VAR_3);
}
