
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
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_5(PsqlScanState VAR_4, bool VAR_5,
       const char *VAR_6)
{
 bool VAR_7 = 1;

 if (VAR_5)
 {
  char *VAR_8 = FUNC_4(VAR_4,
             VAR_0, ((void*)0), 0);

  if (!VAR_8)
  {
   FUNC_3("\\%s: missing required argument", VAR_6);
   VAR_7 = 0;
  }
  else if (!FUNC_0(VAR_3.vars, VAR_8, ((void*)0)))
   VAR_7 = 0;

  FUNC_1(VAR_8);
 }
 else
  FUNC_2(VAR_4);

 return VAR_7 ? VAR_2 : VAR_1;
}
