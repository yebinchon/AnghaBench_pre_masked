
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int aarch64_insn ;
struct TYPE_3__ {int lsb; int width; } ;
typedef TYPE_1__ aarch64_field ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline aarch64_insn
FUNC_1 (const aarch64_field *VAR_0, aarch64_insn VAR_1,
   aarch64_insn VAR_2)
{
  aarch64_insn VAR_3;

  VAR_1 &= ~VAR_2;
  VAR_3 = (VAR_1 >> VAR_0->lsb) & FUNC_0 (VAR_0->width);
  return VAR_3;
}
