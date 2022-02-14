
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*) ;
 char* FUNC_8 (int ,int ,int *,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static backslashResult
FUNC_10(PsqlScanState VAR_4, bool VAR_5, const char *VAR_6)
{
 backslashResult VAR_7 = VAR_2;
 bool VAR_8 = 1;

 if (VAR_5)
 {
  char *VAR_9,
       *VAR_10;

  VAR_9 = FUNC_8(VAR_4,
           VAR_0, ((void*)0), 1);
  VAR_10 = FUNC_8(VAR_4,
           VAR_0, ((void*)0), 1);

  if (FUNC_9(VAR_6 + 3, "export") == 0)
  {
   if (!VAR_10)
   {
    FUNC_7("\\%s: missing required argument", VAR_6);
    VAR_8 = 0;
   }
   else
   {
    FUNC_4(&VAR_10);
    VAR_8 = FUNC_0(VAR_9, VAR_10);
   }
  }

  else if (FUNC_9(VAR_6 + 3, "import") == 0)
  {
   if (!VAR_9)
   {
    FUNC_7("\\%s: missing required argument", VAR_6);
    VAR_8 = 0;
   }
   else
   {
    FUNC_4(&VAR_9);
    VAR_8 = FUNC_1(VAR_9, VAR_10);
   }
  }

  else if (FUNC_9(VAR_6 + 3, "list") == 0)
   VAR_8 = FUNC_2();

  else if (FUNC_9(VAR_6 + 3, "unlink") == 0)
  {
   if (!VAR_9)
   {
    FUNC_7("\\%s: missing required argument", VAR_6);
    VAR_8 = 0;
   }
   else
    VAR_8 = FUNC_3(VAR_9);
  }

  else
   VAR_7 = VAR_3;

  FUNC_5(VAR_9);
  FUNC_5(VAR_10);
 }
 else
  FUNC_6(VAR_4);

 if (!VAR_8)
  VAR_7 = VAR_1;

 return VAR_7;
}
