
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
struct TYPE_6__ {int quiet; TYPE_2__ popt; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*) ;
 TYPE_3__ VAR_3 ;
 char* FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (char) ;

__attribute__((used)) static backslashResult
FUNC_8(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_6(VAR_4,
               VAR_0, ((void*)0), 1);

  FUNC_1(&VAR_7);
  VAR_6 = FUNC_4(VAR_7, VAR_3.popt.topt.pager);
  if (VAR_6 && !VAR_3.quiet && VAR_7)
   FUNC_5(FUNC_0("Wrote history to file \"%s\".\n"), VAR_7);
  if (!VAR_7)
   FUNC_7('\n');
  FUNC_2(VAR_7);
 }
 else
  FUNC_3(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
