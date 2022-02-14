
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static backslashResult
FUNC_8(PsqlScanState VAR_3, bool VAR_4,
     const char *VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_4)
 {
  char *VAR_7 = FUNC_4(VAR_3,
             VAR_0, ((void*)0), 0);
  char *VAR_8 = FUNC_4(VAR_3,
             VAR_0, ((void*)0), 0);

  if (!VAR_7)
  {
   FUNC_2("\\%s: missing required argument", VAR_5);
   VAR_6 = 0;
  }
  else if (FUNC_6(VAR_7, '=') != ((void*)0))
  {
   FUNC_2("\\%s: environment variable name must not contain \"=\"",
       VAR_5);
   VAR_6 = 0;
  }
  else if (!VAR_8)
  {

   FUNC_7(VAR_7);
   VAR_6 = 1;
  }
  else
  {

   char *VAR_9;

   VAR_9 = FUNC_3("%s=%s", VAR_7, VAR_8);
   FUNC_5(VAR_9);
   VAR_6 = 1;






  }
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);
 }
 else
  FUNC_1(VAR_3);

 return VAR_6 ? VAR_2 : VAR_1;
}
