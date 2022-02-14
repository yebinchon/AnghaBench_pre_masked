
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* kbuild_opts; int * kbuild_dir; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,void**,int *) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char**) ;

void FUNC_9(char **VAR_3, char **VAR_4)
{
 static char *VAR_5;
 static char *VAR_6;
 int VAR_7;

 if (!VAR_3 || !VAR_4)
  return;

 *VAR_3 = ((void*)0);
 *VAR_4 = ((void*)0);

 if (VAR_5 && VAR_6 &&
     !FUNC_1(VAR_5) && !FUNC_1(VAR_6)) {
  *VAR_3 = FUNC_7(VAR_5);
  *VAR_4 = FUNC_7(VAR_6);

  if (*VAR_3 && *VAR_4)
   return;

  FUNC_8(VAR_3);
  FUNC_8(VAR_4);





  return;
 }

 if (VAR_2.kbuild_dir && !VAR_2.kbuild_dir[0]) {
  FUNC_4("[llvm.kbuild-dir] is set to \"\" deliberately.\n");
  FUNC_4("Skip kbuild options detection.\n");
  goto errout;
 }

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7) {
  FUNC_5(
"WARNING:\tunable to get correct kernel building directory.\n"
"Hint:\tSet correct kbuild directory using 'kbuild-dir' option in [llvm]\n"
"     \tsection of ~/.perfconfig or set it to \"\" to suppress kbuild\n"
"     \tdetection.\n\n");
  goto errout;
 }

 FUNC_4("Kernel build dir is set to %s\n", *VAR_3);
 FUNC_3("KBUILD_DIR", *VAR_3);
 FUNC_3("KBUILD_OPTS", VAR_2.kbuild_opts);
 VAR_7 = FUNC_6(VAR_1,
        (void **)VAR_4,
        ((void*)0));
 if (VAR_7) {
  FUNC_5(
"WARNING:\tunable to get kernel include directories from '%s'\n"
"Hint:\tTry set clang include options using 'clang-bpf-cmd-template'\n"
"     \toption in [llvm] section of ~/.perfconfig and set 'kbuild-dir'\n"
"     \toption in [llvm] to \"\" to suppress this detection.\n\n",
   *VAR_3);

  FUNC_8(VAR_3);
  goto errout;
 }

 FUNC_4("include option is set to %s\n", *VAR_4);

 VAR_5 = FUNC_7(*VAR_3);
 VAR_6 = FUNC_7(*VAR_4);

 if (!VAR_5 || !VAR_6) {
  FUNC_8(&VAR_5);
  FUNC_8(&VAR_6);
 }
 return;
errout:
 VAR_5 = FUNC_0(-VAR_0);
 VAR_6 = FUNC_0(-VAR_0);
}
