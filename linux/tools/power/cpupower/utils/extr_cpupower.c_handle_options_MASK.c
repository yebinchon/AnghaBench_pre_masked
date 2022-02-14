
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(int *VAR_5, const char ***VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 if (*VAR_5 < 1)
  return;

 for (VAR_8 = 0; VAR_8 < *VAR_5 && ((*VAR_6)[VAR_8])[0] == '-'; VAR_8++) {
  const char *VAR_10 = (*VAR_6)[VAR_8];
  if (!FUNC_7(VAR_10, "-h") || !FUNC_7(VAR_10, "--help")) {
   FUNC_5();
   FUNC_3(VAR_1);
  } else if (!FUNC_7(VAR_10, "-c") || !FUNC_7(VAR_10, "--cpu")) {
   if (*VAR_5 < 2) {
    FUNC_5();
    FUNC_3(VAR_0);
   }
   if (!FUNC_7((*VAR_6)[VAR_8+1], "all"))
    FUNC_2(VAR_3);
   else {
    VAR_7 = FUNC_1(
      (*VAR_6)[VAR_8+1], VAR_3);
    if (VAR_7 < 0) {
     FUNC_4(VAR_4, "%s", FUNC_0("Error parsing cpu "
         "list\n"));
     FUNC_3(VAR_0);
    }
   }
   VAR_8 += 1;

   VAR_9 += 2;
   continue;
  } else if (!FUNC_7(VAR_10, "-v") ||
   !FUNC_7(VAR_10, "--version")) {
   FUNC_6();
   FUNC_3(VAR_1);






  } else {
   FUNC_4(VAR_4, "Unknown option: %s\n", VAR_10);
   FUNC_5();
   FUNC_3(VAR_0);
  }
 }
 *VAR_5 -= VAR_9;
 *VAR_6 += VAR_9;
}
