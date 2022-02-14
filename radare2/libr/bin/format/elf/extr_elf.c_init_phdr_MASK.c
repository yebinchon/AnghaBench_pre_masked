
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_5__ {scalar_t__ e_phoff; scalar_t__ e_machine; scalar_t__ e_phnum; } ;
struct TYPE_6__ {scalar_t__ size; int kv; TYPE_1__ ehdr; int b; scalar_t__ phdr; } ;
typedef TYPE_2__ ELFOBJ ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int) ;
 int FUNC_3 (char*) ;
 int const FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,char*,int,int ) ;
 int FUNC_8 (int ,char*,char*,int ) ;

__attribute__((used)) static int FUNC_9(ELFOBJ *VAR_3) {
 ut32 VAR_4;

 FUNC_5 (!VAR_3->phdr, 0);

 if (!VAR_3->ehdr.e_phnum) {
  return 0;
 }
 if (!FUNC_2 (&VAR_4, (ut32)VAR_3->ehdr.e_phnum, sizeof (FUNC_0(VAR_2)))) {
  return 0;
 }
 if (!VAR_4) {
  return 0;
 }
 if (VAR_4 > VAR_3->size) {
  return 0;
 }
 if (VAR_4 > (ut32)VAR_3->size) {
  return 0;
 }
 if (VAR_3->ehdr.e_phoff > VAR_3->size) {
  return 0;
 }
 if (VAR_3->ehdr.e_phoff + VAR_4 > VAR_3->size) {
  return 0;
 }
 if (!(VAR_3->phdr = FUNC_1 (FUNC_0(VAR_2), VAR_3->ehdr.e_phnum))) {
  FUNC_3 ("malloc (phdr)");
  return 0;
 }

 bool VAR_5 = 0;

 const int VAR_6 = 1024 * 128;
 if (FUNC_4 (VAR_3->b) > VAR_6 && (VAR_3->ehdr.e_machine == VAR_1 || VAR_3->ehdr.e_machine == VAR_0)) {
  VAR_5 = 1;
 }
 if (!FUNC_6 (VAR_3, VAR_5)) {
  return 0;
 }

 FUNC_7 (VAR_3->kv, "elf_phdr.offset", VAR_3->ehdr.e_phoff, 0);
 FUNC_7 (VAR_3->kv, "elf_phdr.size", sizeof (FUNC_0(VAR_2)), 0);
 FUNC_8 (VAR_3->kv, "elf_p_type.cparse", "enum elf_p_type {PT_NULL=0,PT_LOAD=1,PT_DYNAMIC=2,"
  "PT_INTERP=3,PT_NOTE=4,PT_SHLIB=5,PT_PHDR=6,PT_LOOS=0x60000000,"
  "PT_HIOS=0x6fffffff,PT_LOPROC=0x70000000,PT_HIPROC=0x7fffffff};",
  0);
 FUNC_8 (VAR_3->kv, "elf_p_flags.cparse", "enum elf_p_flags {PF_None=0,PF_Exec=1,"
   "PF_Write=2,PF_Write_Exec=3,PF_Read=4,PF_Read_Exec=5,PF_Read_Write=6,"
   "PF_Read_Write_Exec=7};", 0);




 FUNC_8 (VAR_3->kv, "elf_phdr.format", "[4]Exxxxx[4]Ex (elf_p_type)type offset vaddr paddr"
   " filesz memsz (elf_p_flags)flags align", 0);

 return 1;



}
