
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_1 (char**,char*,char const* const,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char const* const*,char const*) ;
 char** VAR_4 ;
 char const* FUNC_6 (struct perf_env*) ;
 char** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,char const*,...) ;
 char** VAR_9 ;
 int FUNC_9 (char**) ;

__attribute__((used)) static int FUNC_10(struct perf_env *VAR_10,
       const char *VAR_11, const char **VAR_12)
{
 int VAR_13;
 const char *VAR_14 = FUNC_6(VAR_10), *VAR_15;
 const char *const *VAR_16;
 char *VAR_17 = ((void*)0);





 if (!FUNC_7(FUNC_6(((void*)0)), VAR_14))
  goto out;

 VAR_15 = FUNC_3("CROSS_COMPILE");
 if (VAR_15) {
  if (FUNC_1(&VAR_17, "%s%s", VAR_15, VAR_11) < 0)
   goto out_error;
  if (VAR_17[0] == '/') {
   if (FUNC_0(VAR_17, VAR_0) == 0)
    goto out;
   goto out_error;
  }
  if (FUNC_4(VAR_17))
   goto out;
  FUNC_9(&VAR_17);
 }

 if (!FUNC_7(VAR_14, "arc"))
  VAR_16 = VAR_1;
 else if (!FUNC_7(VAR_14, "arm"))
  VAR_16 = VAR_3;
 else if (!FUNC_7(VAR_14, "arm64"))
  VAR_16 = VAR_2;
 else if (!FUNC_7(VAR_14, "powerpc"))
  VAR_16 = VAR_5;
 else if (!FUNC_7(VAR_14, "sh"))
  VAR_16 = VAR_7;
 else if (!FUNC_7(VAR_14, "s390"))
  VAR_16 = VAR_6;
 else if (!FUNC_7(VAR_14, "sparc"))
  VAR_16 = VAR_8;
 else if (!FUNC_7(VAR_14, "x86"))
  VAR_16 = VAR_9;
 else if (!FUNC_7(VAR_14, "mips"))
  VAR_16 = VAR_4;
 else {
  FUNC_8("binutils for %s not supported.\n", VAR_14);
  goto out_error;
 }

 VAR_13 = FUNC_5(VAR_16, VAR_11);
 if (VAR_13 < 0) {
  FUNC_8("Please install %s for %s.\n"
     "You can add it to PATH, set CROSS_COMPILE or "
     "override the default using --%s.\n",
     VAR_11, VAR_14, VAR_11);
  goto out_error;
 }

 if (FUNC_1(&VAR_17, "%s%s", VAR_16[VAR_13], VAR_11) < 0)
  goto out_error;

out:
 *VAR_12 = VAR_17;
 return 0;
out_error:
 FUNC_2(VAR_17);
 *VAR_12 = ((void*)0);
 return -1;
}
