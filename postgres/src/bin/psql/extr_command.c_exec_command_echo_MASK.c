
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int * queryFout; } ;
typedef int PsqlScanState ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_4 (int ,int ,char*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_5, bool VAR_6, const char *VAR_7)
{
 if (VAR_6)
 {
  char *VAR_8;
  char VAR_9;
  bool VAR_10 = 0;
  bool VAR_11 = 1;
  FILE *VAR_12;

  if (FUNC_5(VAR_7, "qecho") == 0)
   VAR_12 = VAR_2.queryFout;
  else if (FUNC_5(VAR_7, "warn") == 0)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_4;

  while ((VAR_8 = FUNC_4(VAR_5,
              VAR_0, &VAR_9, 0)))
  {
   if (VAR_11 && !VAR_10 && !VAR_9 && FUNC_5(VAR_8, "-n") == 0)
    VAR_10 = 1;
   else
   {
    if (VAR_11)
     VAR_11 = 0;
    else
     FUNC_0(' ', VAR_12);
    FUNC_1(VAR_8, VAR_12);
   }
   FUNC_2(VAR_8);
  }
  if (!VAR_10)
   FUNC_1("\n", VAR_12);
 }
 else
  FUNC_3(VAR_5);

 return VAR_1;
}
