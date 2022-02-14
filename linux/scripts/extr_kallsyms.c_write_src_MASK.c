
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; int len; int* sym; } ;


 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* VAR_12 ;
 unsigned int VAR_13 ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17[256];
 unsigned int *VAR_18;
 char VAR_19[VAR_3];

 FUNC_6("#include <asm/bitsperlong.h>\n");
 FUNC_6("#if BITS_PER_LONG == 64\n");
 FUNC_6("#define PTR .quad\n");
 FUNC_6("#define ALGN .balign 8\n");
 FUNC_6("#else\n");
 FUNC_6("#define PTR .long\n");
 FUNC_6("#define ALGN .balign 4\n");
 FUNC_6("#endif\n");

 FUNC_6("\t.section .rodata, \"a\"\n");
 if (!VAR_7)
  FUNC_5("kallsyms_addresses");
 else
  FUNC_5("kallsyms_offsets");

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (VAR_7) {
   long long VAR_20;
   int VAR_21;

   if (!VAR_6) {
    VAR_20 = VAR_12[VAR_14].addr - VAR_10;
    VAR_21 = (VAR_20 < 0 || VAR_20 > VAR_4);
   } else if (FUNC_8(&VAR_12[VAR_14])) {
    VAR_20 = VAR_12[VAR_14].addr;
    VAR_21 = (VAR_20 < 0 || VAR_20 > VAR_1);
   } else {
    VAR_20 = VAR_10 - VAR_12[VAR_14].addr - 1;
    VAR_21 = (VAR_20 < VAR_2 || VAR_20 >= 0);
   }
   if (VAR_21) {
    FUNC_2(VAR_11, "kallsyms failure: "
     "%s symbol value %#x out of range in relative mode\n",
     FUNC_8(&VAR_12[VAR_14]) ? "absolute" : "relative",
     VAR_12[VAR_14].addr);
    FUNC_0(VAR_0);
   }
   FUNC_6("\t.long\t%#x\n", (int)VAR_20);
  } else if (!FUNC_8(&VAR_12[VAR_14])) {
   if (VAR_5 <= VAR_12[VAR_14].addr)
    FUNC_6("\tPTR\t_text + %#llx\n",
     VAR_12[VAR_14].addr - VAR_5);
   else
    FUNC_6("\tPTR\t_text - %#llx\n",
     VAR_5 - VAR_12[VAR_14].addr);
  } else {
   FUNC_6("\tPTR\t%#llx\n", VAR_12[VAR_14].addr);
  }
 }
 FUNC_6("\n");

 if (VAR_7) {
  FUNC_5("kallsyms_relative_base");
  FUNC_6("\tPTR\t_text - %#llx\n", VAR_5 - VAR_10);
  FUNC_6("\n");
 }

 FUNC_5("kallsyms_num_syms");
 FUNC_6("\t.long\t%u\n", VAR_13);
 FUNC_6("\n");



 VAR_18 = FUNC_4(sizeof(unsigned int) * ((VAR_13 + 255) / 256));
 if (!VAR_18) {
  FUNC_2(VAR_11, "kallsyms failure: "
   "unable to allocate required memory\n");
  FUNC_0(VAR_0);
 }

 FUNC_5("kallsyms_names");
 VAR_16 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if ((VAR_14 & 0xFF) == 0)
   VAR_18[VAR_14 >> 8] = VAR_16;

  FUNC_6("\t.byte 0x%02x", VAR_12[VAR_14].len);
  for (VAR_15 = 0; VAR_15 < VAR_12[VAR_14].len; VAR_15++)
   FUNC_6(", 0x%02x", VAR_12[VAR_14].sym[VAR_15]);
  FUNC_6("\n");

  VAR_16 += VAR_12[VAR_14].len + 1;
 }
 FUNC_6("\n");

 FUNC_5("kallsyms_markers");
 for (VAR_14 = 0; VAR_14 < ((VAR_13 + 255) >> 8); VAR_14++)
  FUNC_6("\t.long\t%u\n", VAR_18[VAR_14]);
 FUNC_6("\n");

 FUNC_3(VAR_18);

 FUNC_5("kallsyms_token_table");
 VAR_16 = 0;
 for (VAR_14 = 0; VAR_14 < 256; VAR_14++) {
  VAR_17[VAR_14] = VAR_16;
  FUNC_1(VAR_8[VAR_14], VAR_9[VAR_14], VAR_19);
  FUNC_6("\t.asciz\t\"%s\"\n", VAR_19);
  VAR_16 += FUNC_7(VAR_19) + 1;
 }
 FUNC_6("\n");

 FUNC_5("kallsyms_token_index");
 for (VAR_14 = 0; VAR_14 < 256; VAR_14++)
  FUNC_6("\t.short\t%d\n", VAR_17[VAR_14]);
 FUNC_6("\n");
}
