
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_trans_tasklet {int tasklet; int queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* finish ) (struct net*,struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xfrm_trans_tasklet* FUNC_4 (int *) ;
 int VAR_2 ;

int FUNC_5(struct sk_buff *VAR_3,
       int (*VAR_4)(struct net *, struct sock *,
       struct sk_buff *))
{
 struct xfrm_trans_tasklet *VAR_5;

 VAR_5 = FUNC_4(&VAR_2);

 if (FUNC_2(&VAR_5->queue) >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_3)->finish = VAR_4;
 FUNC_1(&VAR_5->queue, VAR_3);
 FUNC_3(&VAR_5->tasklet);
 return 0;
}
