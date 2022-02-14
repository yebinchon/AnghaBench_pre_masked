
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_4__ {int encoding; } ;
struct TYPE_5__ {TYPE_1__ topt; } ;
struct TYPE_6__ {int encoding; int vars; TYPE_2__ popt; int db; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 TYPE_3__ VAR_2 ;
 char* FUNC_7 (int ,int ,int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static backslashResult
FUNC_9(PsqlScanState VAR_3, bool VAR_4)
{
 if (VAR_4)
 {
  char *VAR_5 = FUNC_7(VAR_3,
               VAR_0, ((void*)0), 0);

  if (!VAR_5)
  {

   FUNC_8(FUNC_5(VAR_2.encoding));
  }
  else
  {

   if (FUNC_1(VAR_2.db, VAR_5) == -1)
    FUNC_6("%s: invalid encoding name or conversion procedure not found", VAR_5);
   else
   {

    VAR_2.encoding = FUNC_0(VAR_2.db);
    VAR_2.popt.topt.encoding = VAR_2.encoding;
    FUNC_2(VAR_2.vars, "ENCODING",
       FUNC_5(VAR_2.encoding));
   }
   FUNC_3(VAR_5);
  }
 }
 else
  FUNC_4(VAR_3);

 return VAR_1;
}
