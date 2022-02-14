
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* bytes; } ;
struct insn {TYPE_1__ prefixes; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct insn*) ;
 int FUNC_2 (struct insn*) ;

__attribute__((used)) static inline int FUNC_3(struct insn *VAR_0)
{
 if (FUNC_1(VAR_0))
  return FUNC_2(VAR_0);

 if (VAR_0->prefixes.bytes[3])
  return FUNC_0(VAR_0->prefixes.bytes[3]);

 return 0;
}
