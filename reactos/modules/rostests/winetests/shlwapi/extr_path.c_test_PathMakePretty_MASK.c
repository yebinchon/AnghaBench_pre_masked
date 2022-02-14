
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
   char VAR_3[VAR_1];

   FUNC_1 (FUNC_0(((void*)0)) == VAR_0, "PathMakePretty: NULL path succeeded\n");
   VAR_3[0] = '\0';
   FUNC_1 (FUNC_0(VAR_3) == VAR_2, "PathMakePretty: Empty path failed\n");

   FUNC_3(VAR_3, "C:\\A LONG FILE NAME WITH \\SPACES.TXT");
   FUNC_1 (FUNC_0(VAR_3) == VAR_2, "PathMakePretty: Long UC name failed\n");
   FUNC_1 (FUNC_2(VAR_3, "C:\\a long file name with \\spaces.txt") == 0,
       "PathMakePretty: Long UC name not changed\n");

   FUNC_3(VAR_3, "C:\\A LONG FILE NAME WITH \\MixedCase.TXT");
   FUNC_1 (FUNC_0(VAR_3) == VAR_0, "PathMakePretty: Long MC name succeeded\n");
   FUNC_1 (FUNC_2(VAR_3, "C:\\A LONG FILE NAME WITH \\MixedCase.TXT") == 0,
       "PathMakePretty: Failed but modified path\n");

   FUNC_3(VAR_3, "TEST");
   FUNC_1 (FUNC_0(VAR_3) == VAR_2, "PathMakePretty: Short name failed\n");
   FUNC_1 (FUNC_2(VAR_3, "Test") == 0, "PathMakePretty: 1st char lowercased %s\n", VAR_3);
}
