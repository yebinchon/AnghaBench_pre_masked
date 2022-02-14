
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int crosstab_flag; int * ctv_args; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_3(PsqlScanState VAR_4, bool VAR_5)
{
 backslashResult VAR_6 = VAR_2;

 if (VAR_5)
 {
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_3.ctv_args); VAR_7++)
   VAR_3.ctv_args[VAR_7] = FUNC_2(VAR_4,
               VAR_0, ((void*)0), 1);
  VAR_3.crosstab_flag = 1;
  VAR_6 = VAR_1;
 }
 else
  FUNC_0(VAR_4);

 return VAR_6;
}
