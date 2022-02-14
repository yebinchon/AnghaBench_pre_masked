
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int got; } ;
struct insn {char length; scalar_t__ kaddr; scalar_t__ next_byte; TYPE_1__ immediate; } ;


 int FUNC_0 (struct insn*) ;

void FUNC_1(struct insn *VAR_0)
{
 if (VAR_0->length)
  return;
 if (!VAR_0->immediate.got)
  FUNC_0(VAR_0);
 VAR_0->length = (unsigned char)((unsigned long)VAR_0->next_byte
         - (unsigned long)VAR_0->kaddr);
}
