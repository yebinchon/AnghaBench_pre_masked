
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {scalar_t__ last_error_result; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static backslashResult
FUNC_5(PsqlScanState VAR_4, bool VAR_5)
{
 if (VAR_5)
 {
  if (VAR_3.last_error_result)
  {
   char *VAR_6;

   VAR_6 = FUNC_1(VAR_3.last_error_result,
             VAR_0,
             VAR_1);
   if (VAR_6)
   {
    FUNC_3("%s", VAR_6);
    FUNC_0(VAR_6);
   }
   else
    FUNC_4(FUNC_2("out of memory"));
  }
  else
   FUNC_4(FUNC_2("There is no previous error."));
 }

 return VAR_2;
}
