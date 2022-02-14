
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {scalar_t__ format; } ;
struct TYPE_5__ {TYPE_1__ topt; } ;
struct TYPE_6__ {int vars; scalar_t__ logfile; scalar_t__ queryFout; TYPE_2__ popt; int quiet; } ;
typedef int PGresult ;


 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (scalar_t__,char*,char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 TYPE_3__ VAR_1 ;
 int FUNC_6 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_7(PGresult *VAR_2)
{
 char VAR_3[16];

 if (!VAR_1.quiet)
 {
  if (VAR_1.popt.topt.format == VAR_0)
  {
   FUNC_4("<p>", VAR_1.queryFout);
   FUNC_5(FUNC_0(VAR_2), VAR_1.queryFout);
   FUNC_4("</p>\n", VAR_1.queryFout);
  }
  else
   FUNC_3(VAR_1.queryFout, "%s\n", FUNC_0(VAR_2));
 }

 if (VAR_1.logfile)
  FUNC_3(VAR_1.logfile, "%s\n", FUNC_0(VAR_2));

 FUNC_6(VAR_3, sizeof(VAR_3), "%u", (unsigned int) FUNC_1(VAR_2));
 FUNC_2(VAR_1.vars, "LASTOID", VAR_3);
}
