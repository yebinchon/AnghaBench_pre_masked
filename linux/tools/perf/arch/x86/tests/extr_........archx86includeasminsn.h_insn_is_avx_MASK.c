
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {int got; } ;
struct insn {TYPE_2__ vex_prefix; TYPE_1__ prefixes; } ;


 int FUNC_0 (struct insn*) ;

__attribute__((used)) static inline int FUNC_1(struct insn *VAR_0)
{
 if (!VAR_0->prefixes.got)
  FUNC_0(VAR_0);
 return (VAR_0->vex_prefix.value != 0);
}
