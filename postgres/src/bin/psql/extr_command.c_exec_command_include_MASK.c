
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 char* FUNC_5 (int ,int ,int *,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static backslashResult
FUNC_7(PsqlScanState VAR_4, bool VAR_5, const char *VAR_6)
{
 bool VAR_7 = 1;

 if (VAR_5)
 {
  char *VAR_8 = FUNC_5(VAR_4,
               VAR_1, ((void*)0), 1);

  if (!VAR_8)
  {
   FUNC_3("\\%s: missing required argument", VAR_6);
   VAR_7 = 0;
  }
  else
  {
   bool VAR_9;

   VAR_9 = (FUNC_6(VAR_6, "ir") == 0
        || FUNC_6(VAR_6, "include_relative") == 0);
   FUNC_0(&VAR_8);
   VAR_7 = (FUNC_4(VAR_8, VAR_9) == VAR_0);
   FUNC_1(VAR_8);
  }
 }
 else
  FUNC_2(VAR_4);

 return VAR_7 ? VAR_3 : VAR_2;
}
