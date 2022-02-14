
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int x86_64; int opnd_bytes; int addr_bytes; void const* next_byte; void const* end_kaddr; void const* kaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct insn*,int ,int) ;

void FUNC_1(struct insn *VAR_1, const void *VAR_2, int VAR_3, int VAR_4)
{




 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->kaddr = VAR_2;
 VAR_1->end_kaddr = VAR_2 + VAR_3;
 VAR_1->next_byte = VAR_2;
 VAR_1->x86_64 = VAR_4 ? 1 : 0;
 VAR_1->opnd_bytes = 4;
 if (VAR_4)
  VAR_1->addr_bytes = 8;
 else
  VAR_1->addr_bytes = 4;
}
