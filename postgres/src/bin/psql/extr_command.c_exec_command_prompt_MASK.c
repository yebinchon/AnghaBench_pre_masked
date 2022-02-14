
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int vars; int inputfile; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_8 (int ,int ,int *,int) ;
 int FUNC_9 (char*,char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static backslashResult
FUNC_10(PsqlScanState VAR_6, bool VAR_7,
     const char *VAR_8)
{
 bool VAR_9 = 1;

 if (VAR_7)
 {
  char *VAR_10,
       *VAR_11 = ((void*)0);
  char *VAR_12,
       *VAR_13;

  VAR_12 = FUNC_8(VAR_6, VAR_0, ((void*)0), 0);
  VAR_13 = FUNC_8(VAR_6, VAR_0, ((void*)0), 0);

  if (!VAR_12)
  {
   FUNC_6("\\%s: missing required argument", VAR_8);
   VAR_9 = 0;
  }
  else
  {
   char *VAR_14;

   if (VAR_13)
   {
    VAR_11 = VAR_12;
    VAR_10 = VAR_13;
   }
   else
    VAR_10 = VAR_12;

   if (!VAR_3.inputfile)
   {
    VAR_14 = (char *) FUNC_7(4096);
    FUNC_9(VAR_11, VAR_14, 4096, 1);
   }
   else
   {
    if (VAR_11)
    {
     FUNC_2(VAR_11, VAR_5);
     FUNC_1(VAR_5);
    }
    VAR_14 = FUNC_4(VAR_4);
    if (!VAR_14)
    {
     FUNC_6("\\%s: could not read value for variable",
         VAR_8);
     VAR_9 = 0;
    }
   }

   if (VAR_14 &&
    !FUNC_0(VAR_3.vars, VAR_10, VAR_14))
    VAR_9 = 0;

   if (VAR_14)
    FUNC_3(VAR_14);
   if (VAR_11)
    FUNC_3(VAR_11);
   FUNC_3(VAR_10);
  }
 }
 else
  FUNC_5(VAR_6);

 return VAR_9 ? VAR_2 : VAR_1;
}
