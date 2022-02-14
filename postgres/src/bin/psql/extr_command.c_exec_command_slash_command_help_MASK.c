
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_4__ {int pager; } ;
struct TYPE_5__ {TYPE_1__ topt; } ;
struct TYPE_6__ {TYPE_2__ popt; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_2 ;
 char* FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static backslashResult
FUNC_7(PsqlScanState VAR_3, bool VAR_4)
{
 if (VAR_4)
 {
  char *VAR_5 = FUNC_3(VAR_3,
              VAR_0, ((void*)0), 0);

  if (!VAR_5 || FUNC_5(VAR_5, "commands") == 0)
   FUNC_4(VAR_2.popt.topt.pager);
  else if (FUNC_5(VAR_5, "options") == 0)
   FUNC_6(VAR_2.popt.topt.pager);
  else if (FUNC_5(VAR_5, "variables") == 0)
   FUNC_1(VAR_2.popt.topt.pager);
  else
   FUNC_4(VAR_2.popt.topt.pager);

  if (VAR_5)
   FUNC_0(VAR_5);
 }
 else
  FUNC_2(VAR_3);

 return VAR_1;
}
