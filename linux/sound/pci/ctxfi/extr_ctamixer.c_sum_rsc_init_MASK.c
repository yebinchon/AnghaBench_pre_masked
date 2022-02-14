
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hw; } ;
struct sum_mgr {TYPE_1__ mgr; } ;
struct sum_desc {int msr; } ;
struct TYPE_4__ {int * ops; } ;
struct sum {TYPE_2__ rsc; int * idx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct sum *VAR_2,
   const struct sum_desc *VAR_3,
   struct sum_mgr *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2->rsc, VAR_2->idx[0], VAR_0, VAR_3->msr, VAR_4->mgr.hw);
 if (VAR_5)
  return VAR_5;

 VAR_2->rsc.ops = &VAR_1;

 return 0;
}
