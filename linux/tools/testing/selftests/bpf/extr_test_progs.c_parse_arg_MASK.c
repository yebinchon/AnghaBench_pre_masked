
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* name; } ;
struct test_env {int verifier_stats; int very_verbose; int verbose; TYPE_1__ test_selector; TYPE_1__ subtest_selector; } ;
struct argp_state {struct test_env* input; } ;
typedef int error_t ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct argp_state*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static error_t FUNC_6(int VAR_4, char *VAR_5, struct argp_state *VAR_6)
{
 struct test_env *VAR_7 = VAR_6->input;

 switch (VAR_4) {
 case 130: {
  char *VAR_8 = FUNC_3(VAR_5, '/');

  if (VAR_8) {
   *VAR_8 = '\0';
   if (FUNC_2(VAR_8 + 1,
        &VAR_7->subtest_selector)) {
    FUNC_1(VAR_3,
     "Failed to parse subtest numbers.\n");
    return -VAR_1;
   }
  }
  if (FUNC_2(VAR_5, &VAR_7->test_selector)) {
   FUNC_1(VAR_3, "Failed to parse test numbers.\n");
   return -VAR_1;
  }
  break;
 }
 case 131: {
  char *VAR_9 = FUNC_3(VAR_5, '/');

  if (VAR_9) {
   *VAR_9 = '\0';
   VAR_7->subtest_selector.name = FUNC_5(VAR_9 + 1);
   if (!VAR_7->subtest_selector.name)
    return -VAR_2;
  }
  VAR_7->test_selector.name = FUNC_5(VAR_5);
  if (!VAR_7->test_selector.name)
   return -VAR_2;
  break;
 }
 case 128:
  VAR_7->verifier_stats = 1;
  break;
 case 129:
  if (VAR_5) {
   if (FUNC_4(VAR_5, "v") == 0) {
    VAR_7->very_verbose = 1;
   } else {
    FUNC_1(VAR_3,
     "Unrecognized verbosity setting ('%s'), only -v and -vv are supported\n",
     VAR_5);
    return -VAR_1;
   }
  }
  VAR_7->verbose = 1;
  break;
 case 133:
  FUNC_0(VAR_6);
  break;
 case 132:
  break;
 default:
  return VAR_0;
 }
 return 0;
}
