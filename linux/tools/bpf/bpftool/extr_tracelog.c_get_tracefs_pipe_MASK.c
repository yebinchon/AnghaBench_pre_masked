
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int format ;
typedef int FILE ;


 int FUNC_0 (char const* const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*,char const* const) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,scalar_t__) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const* const) ;
 scalar_t__ FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char*,int ) ;

__attribute__((used)) static bool FUNC_13(char *VAR_3)
{
 static const char * const VAR_4[] = {
  "/sys/kernel/debug/tracing",
  "/sys/kernel/tracing",
  "/tracing",
  "/trace",
 };
 const char *VAR_5 = "/trace_pipe";
 const char *VAR_6 = "tracefs";
 char VAR_7[100], VAR_8[32];
 const char * const *VAR_9;
 bool VAR_10 = 0;
 FILE *VAR_11;

 for (VAR_9 = VAR_4; VAR_9 < VAR_4 + FUNC_0(VAR_4); VAR_9++)
  if (FUNC_2(VAR_1, VAR_3, *VAR_9))
   goto exit_found;

 VAR_11 = FUNC_3("/proc/mounts", "r");
 if (!VAR_11)
  return 0;


 FUNC_7(VAR_8, sizeof(VAR_8), "%%*s %%%zds %%99s %%*s %%*d %%*d\\n",
   VAR_0 - FUNC_11(VAR_5) - 1);
 while (FUNC_4(VAR_11, VAR_8, VAR_3, VAR_7) == 2)
  if (FUNC_9(VAR_7, VAR_6) == 0) {
   VAR_10 = 1;
   break;
  }
 FUNC_1(VAR_11);


 if (VAR_10 && FUNC_12(VAR_3, VAR_1))
  goto exit_found;

 if (VAR_2)
  return 0;

 FUNC_6("could not find tracefs, attempting to mount it now");





 FUNC_10(VAR_3, VAR_4[1]);
 if (FUNC_5(VAR_3))
  return 0;

exit_found:
 FUNC_8(VAR_3, VAR_5);
 return 1;
}
