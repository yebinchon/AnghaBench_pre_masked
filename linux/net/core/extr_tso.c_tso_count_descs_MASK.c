
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int gso_segs; int nr_frags; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct sk_buff *VAR_0)
{

 return FUNC_0(VAR_0)->gso_segs * 2 + FUNC_0(VAR_0)->nr_frags;
}
