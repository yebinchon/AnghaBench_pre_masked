
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {int s_prefix; int s_prefix_val; } ;
struct TYPE_2__ {int in_operand; } ;
struct directive {TYPE_1__ d_inst; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct state *VAR_0, struct directive *VAR_1) {
 int VAR_2 = FUNC_0(VAR_1->d_inst.in_operand, 0);
 if (VAR_0->s_prefix)
  VAR_2 += FUNC_0(VAR_0->s_prefix_val, 8);
 if (VAR_0->s_prefix == 2)
  VAR_2 += FUNC_0(VAR_0->s_prefix_val, 16);
 return VAR_2;
}
