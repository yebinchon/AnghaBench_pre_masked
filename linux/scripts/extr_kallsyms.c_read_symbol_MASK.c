
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {char* sym; int addr; scalar_t__ percpu_absolute; scalar_t__ len; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ,int *,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,char*,int *,char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int * VAR_6 ;
 unsigned char FUNC_12 (char) ;

__attribute__((used)) static int FUNC_13(FILE *VAR_7, struct sym_entry *VAR_8)
{
 char VAR_9[500], VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_7, "%llx %c %499s\n", &VAR_8->addr, &VAR_10, VAR_9);
 if (VAR_11 != 3) {
  if (VAR_11 != VAR_0 && FUNC_3(VAR_9, 500, VAR_7) == ((void*)0))
   FUNC_4(VAR_5, "Read error or end of file.\n");
  return -1;
 }
 if (FUNC_10(VAR_9) >= VAR_2) {
  FUNC_4(VAR_5, "Symbol %s too long for kallsyms (%zu >= %d).\n"
    "Please increase KSYM_NAME_LEN both in kernel and kallsyms.c\n",
   VAR_9, FUNC_10(VAR_9), VAR_2);
  return -1;
 }


 if (FUNC_8(VAR_9, "_text") == 0)
  VAR_3 = VAR_8->addr;
 else if (FUNC_1(VAR_9, VAR_8->addr, VAR_6,
        FUNC_0(VAR_6)) == 0)
                     ;
 else if (FUNC_12(VAR_10) == 'A')
 {

  if (FUNC_8(VAR_9, "__kernel_syscall_via_break") &&
      FUNC_8(VAR_9, "__kernel_syscall_via_epc") &&
      FUNC_8(VAR_9, "__kernel_sigtramp") &&
      FUNC_8(VAR_9, "__gp"))
   return -1;

 }
 else if (FUNC_12(VAR_10) == 'U' ||
   FUNC_6(VAR_9))
  return -1;

 else if (VAR_9[0] == '$')
  return -1;

 else if (VAR_10 == 'N' || VAR_10 == 'n')
  return -1;

 else if (!FUNC_11(VAR_9, ".LASANPC", 8))
  return -1;



 VAR_8->len = FUNC_10(VAR_9) + 1;
 VAR_8->sym = FUNC_7(VAR_8->len + 1);
 if (!VAR_8->sym) {
  FUNC_4(VAR_5, "kallsyms failure: "
   "unable to allocate required amount of memory\n");
  FUNC_2(VAR_1);
 }
 FUNC_9((char *)VAR_8->sym + 1, VAR_9);
 VAR_8->sym[0] = VAR_10;

 VAR_8->percpu_absolute = 0;


 FUNC_1(VAR_9, VAR_8->addr, &VAR_4, 1);

 return 0;
}
