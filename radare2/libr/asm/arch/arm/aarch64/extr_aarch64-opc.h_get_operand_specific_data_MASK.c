
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int flags; } ;
typedef TYPE_1__ aarch64_operand ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int
FUNC_0 (const aarch64_operand *VAR_2)
{
  return (VAR_2->flags & VAR_1) >> VAR_0;
}
