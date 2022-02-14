
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ aarch64_opcode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (const aarch64_opcode *VAR_2, unsigned int VAR_3)
{
  return (((VAR_2->flags >> 12) & 0x7) == VAR_3 + 1)
    ? VAR_1 : VAR_0;
}
