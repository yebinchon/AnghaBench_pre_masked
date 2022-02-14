
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* title; } ;
typedef TYPE_1__ printQueryOpt ;
typedef int instr_time ;
struct TYPE_6__ {scalar_t__ timing; int queryFout; int logfile; int db; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;






 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (double) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,TYPE_1__ const*,int ,int,int ) ;
 TYPE_2__ VAR_1 ;

int
FUNC_16(const char *VAR_2, const printQueryOpt *VAR_3)
{
 PGresult *VAR_4;
 double VAR_5 = 0;
 instr_time VAR_6;
 instr_time VAR_7;

 if (!VAR_1.db)
 {
  FUNC_14("You are currently not connected to a database.");
  return 0;
 }

 FUNC_11();

 if (VAR_1.timing)
  FUNC_3(VAR_6);

 VAR_4 = FUNC_7(VAR_1.db, VAR_2);

 FUNC_10();

 if (!FUNC_0(VAR_4))
 {
  FUNC_1(VAR_4);
  return 0;
 }

 if (VAR_1.timing)
 {
  FUNC_3(VAR_7);
  FUNC_4(VAR_7, VAR_6);
  VAR_5 = FUNC_2(VAR_7);
 }






 if (VAR_0)
 {
  FUNC_5(VAR_4);
  return 0;
 }

 switch (FUNC_8(VAR_4))
 {
  case 128:
   FUNC_15(VAR_4, VAR_3, VAR_1.queryFout, 0, VAR_1.logfile);
   break;

  case 133:
   FUNC_13(VAR_1.queryFout, "%s\n%s\n\n", VAR_3->title, FUNC_6(VAR_4));
   break;

  case 129:
   FUNC_14("\\watch cannot be used with an empty query");
   FUNC_5(VAR_4);
   return -1;

  case 130:
  case 131:
  case 132:
   FUNC_14("\\watch cannot be used with COPY");
   FUNC_5(VAR_4);
   return -1;

  default:
   FUNC_14("unexpected result status for \\watch");
   FUNC_5(VAR_4);
   return -1;
 }

 FUNC_5(VAR_4);

 FUNC_12(VAR_1.queryFout);


 if (VAR_1.timing)
  FUNC_9(VAR_5);

 return 1;
}
