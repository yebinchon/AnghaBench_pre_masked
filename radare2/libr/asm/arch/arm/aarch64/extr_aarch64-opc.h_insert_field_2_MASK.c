
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int aarch64_insn ;
struct TYPE_3__ {int width; int lsb; } ;
typedef TYPE_1__ aarch64_field ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2 (const aarch64_field *VAR_0, aarch64_insn *VAR_1,
  aarch64_insn VAR_2, aarch64_insn VAR_3)
{
  FUNC_0 (VAR_0->width < 32 && VAR_0->width >= 1 && VAR_0->lsb >= 0
   && VAR_0->lsb + VAR_0->width <= 32);
  VAR_2 &= FUNC_1 (VAR_0->width);
  VAR_2 <<= VAR_0->lsb;


  VAR_2 &= ~VAR_3;
  *VAR_1 |= VAR_2;
}
