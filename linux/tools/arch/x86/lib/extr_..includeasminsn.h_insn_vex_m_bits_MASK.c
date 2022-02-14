
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; int * bytes; } ;
struct insn {TYPE_1__ vex_prefix; } ;
typedef int insn_byte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline insn_byte_t FUNC_2(struct insn *VAR_1)
{
 if (VAR_1->vex_prefix.nbytes == 2)
  return VAR_0;
 else if (VAR_1->vex_prefix.nbytes == 3)
  return FUNC_1(VAR_1->vex_prefix.bytes[1]);
 else
  return FUNC_0(VAR_1->vex_prefix.bytes[1]);
}
