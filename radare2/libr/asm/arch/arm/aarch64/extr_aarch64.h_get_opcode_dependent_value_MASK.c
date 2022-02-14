
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ aarch64_opcode ;



__attribute__((used)) static inline unsigned int
FUNC_0 (const aarch64_opcode *VAR_0)
{
  return (VAR_0->flags >> 24) & 0x7;
}
