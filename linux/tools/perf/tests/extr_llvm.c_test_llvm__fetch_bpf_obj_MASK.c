
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum test_llvm__testcase { ____Placeholder_test_llvm__testcase } test_llvm__testcase ;
struct TYPE_4__ {char* source; char* desc; int should_load_fail; } ;
struct TYPE_3__ {char* clang_bpf_cmd_template; char* clang_opt; int user_set_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char const*,...) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void**,size_t*) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*) ;
 int VAR_6 ;

int
FUNC_6(void **VAR_7,
    size_t *VAR_8,
    enum test_llvm__testcase VAR_9,
    bool VAR_10,
    bool *VAR_11)
{
 const char *VAR_12;
 const char *VAR_13;
 const char *VAR_14, *VAR_15;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18, VAR_19, VAR_20 = VAR_0;

 if (VAR_9 >= VAR_3)
  return VAR_0;

 VAR_12 = VAR_4[VAR_9].source;
 VAR_13 = VAR_4[VAR_9].desc;
 if (VAR_11)
  *VAR_11 = VAR_4[VAR_9].should_load_fail;





 if (!VAR_10 && (VAR_6 <= 0 &&
         !VAR_5.user_set_param &&
         FUNC_3())) {
  FUNC_4("No clang and no verbosive, skip this test\n");
  return VAR_2;
 }





 VAR_19 = VAR_6;
 if (VAR_6 == 0)
  VAR_6 = -1;

 *VAR_7 = ((void*)0);
 *VAR_8 = 0;

 if (!VAR_5.clang_bpf_cmd_template)
  goto out;

 if (!VAR_5.clang_opt)
  VAR_5.clang_opt = FUNC_5("");

 VAR_18 = FUNC_0(&VAR_16, "echo '%s' | %s%s", VAR_12,
         VAR_5.clang_bpf_cmd_template,
         VAR_19 ? "" : " 2>/dev/null");
 if (VAR_18 < 0)
  goto out;
 VAR_18 = FUNC_0(&VAR_17, "-xc %s", VAR_5.clang_opt);
 if (VAR_18 < 0)
  goto out;

 VAR_14 = VAR_5.clang_bpf_cmd_template;
 VAR_5.clang_bpf_cmd_template = VAR_16;
 VAR_15 = VAR_5.clang_opt;
 VAR_5.clang_opt = VAR_17;

 VAR_18 = FUNC_2("-", VAR_7, VAR_8);

 VAR_5.clang_bpf_cmd_template = VAR_14;
 VAR_5.clang_opt = VAR_15;

 VAR_6 = VAR_19;
 if (VAR_18)
  goto out;

 VAR_20 = VAR_1;
out:
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 if (VAR_20 != VAR_1)
  FUNC_4("Failed to compile test case: '%s'\n", VAR_13);
 return VAR_20;
}
