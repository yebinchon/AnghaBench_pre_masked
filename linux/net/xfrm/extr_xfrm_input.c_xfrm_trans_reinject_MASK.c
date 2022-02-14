
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_trans_tasklet {int queue; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dev; } ;
struct TYPE_2__ {int (* finish ) (int ,int *,struct sk_buff*) ;} ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff_head*) ;
 int FUNC_5 (int ,int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct xfrm_trans_tasklet *VAR_1 = (void *)VAR_0;
 struct sk_buff_head VAR_2;
 struct sk_buff *VAR_3;

 FUNC_2(&VAR_2);
 FUNC_4(&VAR_1->queue, &VAR_2);

 while ((VAR_3 = FUNC_1(&VAR_2)))
  FUNC_0(VAR_3)->finish(FUNC_3(VAR_3->dev), ((void*)0), VAR_3);
}
