
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dao {int ctrl_blk; TYPE_1__* hw; } ;
struct TYPE_2__ {int (* dao_get_spos ) (int ,unsigned int*) ;} ;


 int FUNC_0 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct dao *VAR_0, unsigned int *VAR_1)
{
 VAR_0->hw->dao_get_spos(VAR_0->ctrl_blk, VAR_1);
 return 0;
}
