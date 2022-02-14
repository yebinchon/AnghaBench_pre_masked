
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct TYPE_2__ {int xfrm_cfg_mutex; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 struct net* FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct net *VAR_2 = FUNC_3(VAR_1->sk);

 FUNC_0(&VAR_2->xfrm.xfrm_cfg_mutex);
 FUNC_2(VAR_1, &VAR_0);
 FUNC_1(&VAR_2->xfrm.xfrm_cfg_mutex);
}
