
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int sk_bound_dev_if; } ;
struct sk_buff {struct sock* sk; } ;
struct flowi6 {int daddr; int flowi6_oif; } ;
struct TYPE_2__ {int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct flowi6*,int ) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, u32 VAR_1)
{
 struct flowi6 VAR_2;
 struct sock *VAR_3 = VAR_0->sk;

 VAR_2 = VAR_3->sk_bound_dev_if;
 VAR_2 = FUNC_0(VAR_0)->daddr;

 FUNC_1(VAR_3, &VAR_2, VAR_1);
}
