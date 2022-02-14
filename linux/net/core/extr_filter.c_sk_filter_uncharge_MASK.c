
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int sk_omem_alloc; } ;
struct sk_filter {TYPE_1__* prog; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_filter*) ;

void FUNC_3(struct sock *VAR_0, struct sk_filter *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->prog->len);

 FUNC_0(VAR_2, &VAR_0->sk_omem_alloc);
 FUNC_2(VAR_1);
}
