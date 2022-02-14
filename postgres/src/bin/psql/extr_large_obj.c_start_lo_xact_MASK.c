
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;
typedef int PGresult ;
typedef int PGTransactionStatusType ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_1, bool *VAR_2)
{
 PGTransactionStatusType VAR_3;
 PGresult *VAR_4;

 *VAR_2 = 0;

 if (!VAR_0.db)
 {
  FUNC_3("%s: not connected to a database", VAR_1);
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0.db);

 switch (VAR_3)
 {
  case 130:

   if (!(VAR_4 = FUNC_2("BEGIN")))
    return 0;
   FUNC_0(VAR_4);
   *VAR_2 = 1;
   break;
  case 128:

   break;
  case 129:
   FUNC_3("%s: current transaction is aborted", VAR_1);
   return 0;
  default:
   FUNC_3("%s: unknown transaction status", VAR_1);
   return 0;
 }

 return 1;
}
