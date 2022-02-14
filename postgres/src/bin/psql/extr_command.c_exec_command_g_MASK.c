
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int g_expanded; int * gfname; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_4 (int ,int ,int *,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_4, bool VAR_5, const char *VAR_6)
{
 backslashResult VAR_7 = VAR_2;

 if (VAR_5)
 {
  char *VAR_8 = FUNC_4(VAR_4,
               VAR_0, ((void*)0), 0);

  if (!VAR_8)
   VAR_3.gfname = ((void*)0);
  else
  {
   FUNC_0(&VAR_8);
   VAR_3.gfname = FUNC_3(VAR_8);
  }
  FUNC_1(VAR_8);
  if (FUNC_5(VAR_6, "gx") == 0)
   VAR_3.g_expanded = 1;
  VAR_7 = VAR_1;
 }
 else
  FUNC_2(VAR_4);

 return VAR_7;
}
