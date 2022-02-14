
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;
struct elf {TYPE_1__ ehdr; } ;




 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct elf *VAR_0)
{
 switch (VAR_0->ehdr.e_machine) {
 case 128:
  return 1;
 case 129:
  return 0;
 default:
  FUNC_0("unexpected ELF machine type %d", VAR_0->ehdr.e_machine);
  return -1;
 }
}
