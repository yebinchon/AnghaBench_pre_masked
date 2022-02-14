
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int timing; int quiet; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_4(VAR_4,
             VAR_0, ((void*)0), 0);

  if (VAR_7)
   VAR_6 = FUNC_0(VAR_7, "\\timing", &VAR_3.timing);
  else
   VAR_3.timing = !VAR_3.timing;
  if (!VAR_3.quiet)
  {
   if (VAR_3.timing)
    FUNC_5(FUNC_1("Timing is on."));
   else
    FUNC_5(FUNC_1("Timing is off."));
  }
  FUNC_2(VAR_7);
 }
 else
  FUNC_3(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
