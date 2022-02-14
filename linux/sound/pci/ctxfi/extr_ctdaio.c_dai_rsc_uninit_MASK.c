
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dai {int daio; int * ctrl_blk; TYPE_1__* hw; } ;
struct TYPE_2__ {int (* dai_put_ctrl_blk ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dai *VAR_0)
{
 VAR_0->hw->dai_put_ctrl_blk(VAR_0->ctrl_blk);
 VAR_0->hw = VAR_0->ctrl_blk = ((void*)0);
 FUNC_0(&VAR_0->daio);
 return 0;
}
