
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym {unsigned long name; unsigned long address; unsigned long size; scalar_t__ offset; } ;
typedef int Elf_Ehdr ;


 int FUNC_0 (char*,unsigned long) ;

__attribute__((used)) static void FUNC_1(Elf_Ehdr *VAR_0, struct sym *VAR_1)
{
 FUNC_0("sym:    %s\n", VAR_1->name);
 FUNC_0("addr:   0x%lx\n", VAR_1->address);
 FUNC_0("size:   %d\n", VAR_1->size);
 FUNC_0("offset: 0x%lx\n", (unsigned long)VAR_1->offset);
}
