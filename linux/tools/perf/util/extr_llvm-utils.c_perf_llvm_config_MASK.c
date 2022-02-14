
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dump_obj; int user_set_param; void* opts; void* kbuild_opts; void* kbuild_dir; void* clang_opt; void* clang_bpf_cmd_template; void* clang_path; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_1, const char *VAR_2)
{
 if (!FUNC_4(VAR_1, "llvm."))
  return 0;
 VAR_1 += sizeof("llvm.") - 1;

 if (!FUNC_2(VAR_1, "clang-path"))
  VAR_0.clang_path = FUNC_3(VAR_2);
 else if (!FUNC_2(VAR_1, "clang-bpf-cmd-template"))
  VAR_0.clang_bpf_cmd_template = FUNC_3(VAR_2);
 else if (!FUNC_2(VAR_1, "clang-opt"))
  VAR_0.clang_opt = FUNC_3(VAR_2);
 else if (!FUNC_2(VAR_1, "kbuild-dir"))
  VAR_0.kbuild_dir = FUNC_3(VAR_2);
 else if (!FUNC_2(VAR_1, "kbuild-opts"))
  VAR_0.kbuild_opts = FUNC_3(VAR_2);
 else if (!FUNC_2(VAR_1, "dump-obj"))
  VAR_0.dump_obj = !!FUNC_0(VAR_1, VAR_2);
 else if (!FUNC_2(VAR_1, "opts"))
  VAR_0.opts = FUNC_3(VAR_2);
 else {
  FUNC_1("Invalid LLVM config option: %s\n", VAR_2);
  return -1;
 }
 VAR_0.user_set_param = 1;
 return 0;
}
