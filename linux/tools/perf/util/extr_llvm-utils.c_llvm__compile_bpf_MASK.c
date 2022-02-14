
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int serr ;
typedef int nr_cpus_avail_str ;
typedef int linux_version_code_str ;
struct TYPE_2__ {char* clang_opt; char* clang_bpf_cmd_template; char* opts; int llc_path; int clang_path; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned int*,int *,int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,char**) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char const*,void**,size_t*) ;
 int * FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (char*,int,char*,unsigned int) ;
 int FUNC_12 (int,char*,int) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 () ;

int FUNC_15(const char *VAR_7, void **VAR_8,
        size_t *VAR_9)
{
 size_t VAR_10;
 void *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;
 unsigned int VAR_14;
 char VAR_15[64];
 const char *VAR_16 = VAR_6.clang_opt;
 char VAR_17[VAR_2], VAR_18[VAR_2], VAR_19[VAR_2], VAR_20[64];
 char VAR_21[VAR_4];
 char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0),
      *VAR_24 = ((void*)0);
 const char *VAR_25 = VAR_6.clang_bpf_cmd_template;
 char *VAR_26 = ((void*)0);
 const char *VAR_27 = VAR_6.opts;
 char *VAR_28 = ((void*)0), *VAR_29;
 char *VAR_30 = FUNC_13(VAR_3);

 if (VAR_7[0] != '-' && FUNC_9(VAR_7, VAR_19) == ((void*)0)) {
  VAR_12 = VAR_5;
  FUNC_7("ERROR: problems with path %s: %s\n",
         VAR_7, FUNC_12(VAR_12, VAR_21, sizeof(VAR_21)));
  return -VAR_12;
 }

 if (!VAR_25)
  VAR_25 = VAR_0;

 VAR_12 = FUNC_10(VAR_6.clang_path,
        "clang", VAR_17);
 if (VAR_12) {
  FUNC_7(
"ERROR:\tunable to find clang.\n"
"Hint:\tTry to install latest clang/llvm to support BPF. Check your $PATH\n"
"     \tand 'clang-path' option in [llvm] section of ~/.perfconfig.\n");
  FUNC_14();
  return -VAR_1;
 }





 FUNC_4(&VAR_22, &VAR_23);

 VAR_13 = FUNC_5();
 FUNC_11(VAR_20, sizeof(VAR_20), "%d",
   VAR_13);

 if (FUNC_1(&VAR_14, ((void*)0), 0))
  VAR_14 = 0;

 FUNC_11(VAR_15, sizeof(VAR_15),
   "0x%x", VAR_14);
 if (FUNC_0(&VAR_24, "-I%s/bpf", VAR_30) < 0)
  goto errout;
 FUNC_2("NR_CPUS", VAR_20);
 FUNC_2("LINUX_VERSION_CODE", VAR_15);
 FUNC_2("CLANG_EXEC", VAR_17);
 FUNC_2("CLANG_OPTIONS", VAR_16);
 FUNC_2("KERNEL_INC_OPTIONS", VAR_23);
 FUNC_2("PERF_BPF_INC_OPTIONS", VAR_24);
 FUNC_2("WORKING_DIR", VAR_22 ? : ".");

 if (VAR_27) {
  VAR_12 = FUNC_10(VAR_6.llc_path, "llc", VAR_18);
  if (VAR_12) {
   FUNC_7("ERROR:\tunable to find llc.\n"
          "Hint:\tTry to install latest clang/llvm to support BPF. Check your $PATH\n"
          "     \tand 'llc-path' option in [llvm] section of ~/.perfconfig.\n");
   FUNC_14();
   goto errout;
  }

  if (FUNC_0(&VAR_26, "%s -emit-llvm | %s -march=bpf %s -filetype=obj -o -",
         VAR_25, VAR_18, VAR_27) < 0) {
   FUNC_7("ERROR:\tnot enough memory to setup command line\n");
   goto errout;
  }

  VAR_25 = VAR_26;

 }






 FUNC_2("CLANG_SOURCE",
        (VAR_7[0] == '-') ? VAR_7 : VAR_19);

 FUNC_6("llvm compiling command template: %s\n", VAR_25);

 if (FUNC_0(&VAR_28, "echo -n \"%s\"", VAR_25) < 0)
  goto errout;

 VAR_12 = FUNC_8(VAR_28, (void **) &VAR_29, ((void*)0));
 if (VAR_12)
  goto errout;

 FUNC_6("llvm compiling command : %s\n", VAR_29);

 VAR_12 = FUNC_8(VAR_25, &VAR_11, &VAR_10);
 if (VAR_12) {
  FUNC_7("ERROR:\tunable to compile %s\n", VAR_7);
  FUNC_7("Hint:\tCheck error message shown above.\n");
  FUNC_7("Hint:\tYou can also pre-compile it into .o using:\n");
  FUNC_7("     \t\tclang -target bpf -O2 -c %s\n", VAR_7);
  FUNC_7("     \twith proper -I and -D options.\n");
  goto errout;
 }

 FUNC_3(VAR_28);
 FUNC_3(VAR_29);
 FUNC_3(VAR_22);
 FUNC_3(VAR_23);
 FUNC_3(VAR_24);
 FUNC_3(VAR_30);

 if (!VAR_8)
  FUNC_3(VAR_11);
 else
  *VAR_8 = VAR_11;

 if (VAR_9)
  *VAR_9 = VAR_10;
 return 0;
errout:
 FUNC_3(VAR_28);
 FUNC_3(VAR_22);
 FUNC_3(VAR_23);
 FUNC_3(VAR_11);
 FUNC_3(VAR_24);
 FUNC_3(VAR_30);
 FUNC_3(VAR_26);
 if (VAR_8)
  *VAR_8 = ((void*)0);
 if (VAR_9)
  *VAR_9 = 0;
 return VAR_12;
}
