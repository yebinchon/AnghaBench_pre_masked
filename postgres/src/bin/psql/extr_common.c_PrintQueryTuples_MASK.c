
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int expanded; } ;
struct TYPE_6__ {TYPE_1__ topt; } ;
typedef TYPE_2__ printQueryOpt ;
struct TYPE_7__ {int logfile; int * queryFout; scalar_t__ gfname; scalar_t__ g_expanded; TYPE_2__ popt; } ;
typedef int PGresult ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int **,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,TYPE_2__*,int *,int,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static bool
FUNC_6(const PGresult *VAR_1)
{
 printQueryOpt VAR_2 = VAR_0.popt;


 if (VAR_0.g_expanded)
  VAR_2.topt.expanded = 1;


 if (VAR_0.gfname)
 {
  FILE *VAR_3;
  bool VAR_4;

  if (!FUNC_2(VAR_0.gfname, &VAR_3, &VAR_4))
   return 0;
  if (VAR_4)
   FUNC_0();

  FUNC_4(VAR_1, &VAR_2, VAR_3, 0, VAR_0.logfile);

  if (VAR_4)
  {
   FUNC_3(VAR_3);
   FUNC_5();
  }
  else
   FUNC_1(VAR_3);
 }
 else
  FUNC_4(VAR_1, &VAR_2, VAR_0.queryFout, 0, VAR_0.logfile);

 return 1;
}
