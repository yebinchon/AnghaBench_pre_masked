
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* amixer_get_y ) (int ) ;} ;
struct TYPE_2__ {int ctrl_blk; struct hw* hw; } ;
struct amixer {TYPE_1__ rsc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct amixer *VAR_0)
{
 struct hw *VAR_1;

 VAR_1 = VAR_0->rsc.hw;
 return VAR_1->amixer_get_y(VAR_0->rsc.ctrl_blk);
}
