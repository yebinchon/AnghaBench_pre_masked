
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_3__ {int offset; int shift; int mask; } ;
typedef TYPE_1__ rsp_op_escape ;
typedef int rsp_instruction_priv ;


 TYPE_1__* VAR_0 ;
 int const* VAR_1 ;

__attribute__((used)) static const rsp_instruction_priv* FUNC_0(ut32 VAR_2) {
 const rsp_op_escape* VAR_3;


 if (VAR_2 == 0) {
  return &VAR_1[352];
 }

 VAR_3 = &VAR_0[(VAR_2 >> 25)];
 return &VAR_1[VAR_3->offset + ((VAR_2 >> VAR_3->shift) & VAR_3->mask)];
}
