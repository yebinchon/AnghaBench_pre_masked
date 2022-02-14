
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int vars; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,scalar_t__) ;
 char* FUNC_5 (char*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static backslashResult
FUNC_9(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_6(VAR_4,
              VAR_0, ((void*)0), 0);

  if (!VAR_7)
  {

   FUNC_0(VAR_3.vars);
   VAR_6 = 1;
  }
  else
  {



   char *VAR_8;
   char *VAR_9;

   VAR_9 = FUNC_6(VAR_4,
           VAR_0, ((void*)0), 0);
   VAR_8 = FUNC_5(VAR_9 ? VAR_9 : "");
   FUNC_2(VAR_9);

   while ((VAR_9 = FUNC_6(VAR_4,
             VAR_0, ((void*)0), 0)))
   {
    VAR_8 = FUNC_4(VAR_8, FUNC_8(VAR_8) + FUNC_8(VAR_9) + 1);
    FUNC_7(VAR_8, VAR_9);
    FUNC_2(VAR_9);
   }

   if (!FUNC_1(VAR_3.vars, VAR_7, VAR_8))
    VAR_6 = 0;

   FUNC_2(VAR_8);
  }
  FUNC_2(VAR_7);
 }
 else
  FUNC_3(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
