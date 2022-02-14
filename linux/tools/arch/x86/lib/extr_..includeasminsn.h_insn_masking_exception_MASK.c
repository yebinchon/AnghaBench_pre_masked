
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bytes; } ;
struct TYPE_3__ {scalar_t__* bytes; } ;
struct insn {TYPE_2__ modrm; TYPE_1__ opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct insn *VAR_2)
{
 return VAR_2->opcode.bytes[0] == VAR_1 ||
  (VAR_2->opcode.bytes[0] == VAR_0 &&
   FUNC_0(VAR_2->modrm.bytes[0]) == 2);
}
