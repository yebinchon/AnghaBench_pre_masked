
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {int dummy; } ;
struct directive {int d_inst; int d_asm; } ;
struct TYPE_2__ {int in_opcode; int in_reg; int in_mode; int in_operand; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct state *VAR_1, struct directive *VAR_2) {




 FUNC_2 (VAR_2->d_asm, "DC 0x%4x", FUNC_0(&VAR_2->d_inst));
}
