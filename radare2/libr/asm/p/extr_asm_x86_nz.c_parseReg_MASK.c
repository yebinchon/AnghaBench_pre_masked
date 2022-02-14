
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {int bits; } ;
typedef int Register ;
typedef TYPE_1__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,size_t*,size_t*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static Register FUNC_5(RAsm *VAR_16, const char *VAR_17, size_t *VAR_18, ut32 *VAR_19) {
 int VAR_20;

 const char *VAR_21[] = { "eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi", "eip", ((void*)0) };
 const char *VAR_22[] = { "r8d", "r9d", "r10d", "r11d", "r12d", "r13d", "r14d", "r15d", ((void*)0) };
 const char *VAR_23[] = { "al", "cl", "dl", "bl", "ah", "ch", "dh", "bh", ((void*)0) };
 const char *VAR_24[] = { "ax", "cx", "dx", "bx", "sp", "bp", "si", "di", ((void*)0) };
 const char *VAR_25[] = { "rax", "rcx", "rdx", "rbx", "rsp", "rbp", "rsi", "rdi", "rip", ((void*)0) };
 const char *VAR_26[] = { "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", ((void*)0) };
 const char *VAR_27[] = { "es", "cs", "ss", "ds", "fs", "gs", ((void*)0) };
 const char *VAR_28[] = { "cr0", "cr1", "cr2","cr3", "cr4", "cr5", "cr6", "cr7", ((void*)0) };
 const char *VAR_29[] = { "dr0", "dr1", "dr2","dr3", "dr4", "dr5", "dr6", "dr7", ((void*)0) };


 size_t VAR_30, VAR_31;
 const char *VAR_32;
 FUNC_2 (VAR_17, VAR_18, &VAR_30);
 VAR_32 = VAR_17 + *VAR_18;
 VAR_31 = VAR_30 - *VAR_18;
 *VAR_18 = VAR_30;


 if (VAR_31 == 3 && VAR_32[0] == 'e') {
  for (VAR_20 = 0; VAR_21[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_21[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_3;
    return VAR_20;
   }
  }
 }

 if (VAR_31 == 3 && VAR_32[0] == 'c') {
  for (VAR_20 = 0; VAR_28[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_28[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_1 & FUNC_0 (VAR_20)) | VAR_3;
    return VAR_20;
   }
  }
 }

 if (VAR_31 == 3 && VAR_32[0] == 'd') {
  for (VAR_20 = 0; VAR_28[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_29[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_2 & FUNC_0 (VAR_20)) | VAR_3;
    return VAR_20;
   }
  }
 }
 if (VAR_31 == 2) {
  if (VAR_32[1] == 'l' || VAR_32[1] == 'h') {
   for (VAR_20 = 0; VAR_23[VAR_20]; VAR_20++) {
    if (!FUNC_4 (VAR_23[VAR_20], VAR_32, VAR_31)) {
     *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_0;
     return VAR_20;
    }
   }
  }
  for (VAR_20 = 0; VAR_24[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_24[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_11;
    return VAR_20;
   }
  }

  for (VAR_20 = 0; VAR_27[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_27[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_10 & FUNC_0 (VAR_20)) | VAR_11;
    return VAR_20;
   }
  }
 }
 if (VAR_32[0] == 'r') {
  for (VAR_20 = 0; VAR_25[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_25[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_7;
    VAR_16->bits = 64;
    return VAR_20;
   }
  }
  for (VAR_20 = 0; VAR_26[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_26[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_7;
    VAR_16->bits = 64;
    return VAR_20 + 9;
   }
  }
  for (VAR_20 = 0; VAR_22[VAR_20]; VAR_20++) {
   if (!FUNC_4 (VAR_22[VAR_20], VAR_32, VAR_31)) {
    *VAR_19 = (VAR_5 & FUNC_0 (VAR_20)) | VAR_3;
    if (VAR_16->bits < 32) {
     VAR_16->bits = 32;
    }
    return VAR_20 + 9;
   }
  }
 }

 if (!FUNC_4 ("st", VAR_32, 2)) {
  *VAR_19 = (VAR_4 & ~VAR_8);
  *VAR_18 = 2;
 }
 if (!FUNC_4 ("mm", VAR_32, 2)) {
  *VAR_19 = (VAR_6 & ~VAR_8);
  *VAR_18 = 2;
 }
 if (!FUNC_4 ("xmm", VAR_32, 3)) {
  *VAR_19 = (VAR_12 & ~VAR_8);
  *VAR_18 = 3;
 }

 if (*VAR_19 & (VAR_4 | VAR_6 | VAR_12) & ~VAR_8) {
  Register VAR_33 = VAR_15;

  if (FUNC_2 (VAR_32, VAR_18, &VAR_30) == VAR_14 && VAR_32[*VAR_18] == '(') {
   *VAR_18 = VAR_30;
  }


  if (FUNC_2 (VAR_32, VAR_18, &VAR_30) != VAR_13) {
   FUNC_1 ("Expected register number '%s'\n", VAR_17 + *VAR_18);
   return VAR_15;
  }
  VAR_33 = FUNC_3 (VAR_16, VAR_32 + *VAR_18);

  if ((VAR_33 > 15) || ((*VAR_19 & (VAR_4 | VAR_6 ) & ~VAR_8) && VAR_33 > 7)) {
   FUNC_1 ("Too large register index!\n");
   return VAR_15;
  }
  *VAR_18 = VAR_30;


  if (FUNC_2 (VAR_32, VAR_18, &VAR_30) == VAR_14 && VAR_32[*VAR_18] == ')') {
   *VAR_18 = VAR_30;
  }
  *VAR_19 |= (FUNC_0 (VAR_33) & ~VAR_9);
  return VAR_33;
 }
 return VAR_15;
}
