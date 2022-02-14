
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int rbnode; } ;
struct TYPE_2__ {int frag_run_len; int * next_frag; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0)
{
 FUNC_1(&VAR_0->rbnode);
 FUNC_0(VAR_0)->next_frag = ((void*)0);
 FUNC_0(VAR_0)->frag_run_len = VAR_0->len;
}
