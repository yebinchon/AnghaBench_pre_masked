
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {char* name; scalar_t__ connection; int autocommit; } ;
typedef int PGresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,int ) ;
 struct connection* FUNC_4 (char const*) ;
 int FUNC_5 (struct connection*,char const*,int) ;
 int FUNC_6 (char*,int,char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

bool
FUNC_8(int VAR_2, const char *VAR_3, const char *VAR_4)
{
 PGresult *VAR_5;
 struct connection *VAR_6 = FUNC_4(VAR_3);

 if (!FUNC_5(VAR_6, VAR_3, VAR_2))
  return 0;

 FUNC_6("ECPGtrans on line %d: action \"%s\"; connection \"%s\"\n", VAR_2, VAR_4, VAR_6 ? VAR_6->name : "null");


 if (VAR_6 && VAR_6->connection)
 {







  if (FUNC_2(VAR_6->connection) == VAR_1 &&
   !VAR_6->autocommit &&
   FUNC_7(VAR_4, "begin", 5) != 0 &&
   FUNC_7(VAR_4, "start", 5) != 0 &&
   FUNC_7(VAR_4, "commit prepared", 15) != 0 &&
   FUNC_7(VAR_4, "rollback prepared", 17) != 0)
  {
   VAR_5 = FUNC_1(VAR_6->connection, "begin transaction");
   if (!FUNC_3(VAR_5, VAR_2, VAR_6->connection, VAR_0))
    return 0;
   FUNC_0(VAR_5);
  }

  VAR_5 = FUNC_1(VAR_6->connection, VAR_4);
  if (!FUNC_3(VAR_5, VAR_2, VAR_6->connection, VAR_0))
   return 0;
  FUNC_0(VAR_5);
 }

 return 1;
}
