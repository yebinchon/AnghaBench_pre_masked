
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_blk; struct hw* hw; } ;
struct src {TYPE_1__ rsc; } ;
struct hw {int (* src_set_clear_zbufs ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct src *VAR_0)
{
 struct hw *VAR_1;

 VAR_1 = VAR_0->rsc.hw;
 VAR_1->src_set_clear_zbufs(VAR_0->rsc.ctrl_blk, 1);

 return 0;
}
