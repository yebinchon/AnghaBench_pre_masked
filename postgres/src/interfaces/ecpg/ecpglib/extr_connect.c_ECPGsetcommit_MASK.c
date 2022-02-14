
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int autocommit; int connection; int name; } ;
typedef int PGresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 struct connection* FUNC_4 (char const*) ;
 int FUNC_5 (struct connection*,char const*,int) ;
 int FUNC_6 (char*,int,char const*,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int ) ;

bool
FUNC_9(int VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct connection *VAR_5 = FUNC_4(VAR_4);
 PGresult *VAR_6;

 if (!FUNC_5(VAR_5, VAR_4, VAR_2))
  return 0;

 FUNC_6("ECPGsetcommit on line %d: action \"%s\"; connection \"%s\"\n", VAR_2, VAR_3, VAR_5->name);

 if (VAR_5->autocommit && FUNC_8(VAR_3, "off", FUNC_7("off")) == 0)
 {
  if (FUNC_2(VAR_5->connection) == VAR_1)
  {
   VAR_6 = FUNC_1(VAR_5->connection, "begin transaction");
   if (!FUNC_3(VAR_6, VAR_2, VAR_5->connection, VAR_0))
    return 0;
   FUNC_0(VAR_6);
  }
  VAR_5->autocommit = 0;
 }
 else if (!VAR_5->autocommit && FUNC_8(VAR_3, "on", FUNC_7("on")) == 0)
 {
  if (FUNC_2(VAR_5->connection) != VAR_1)
  {
   VAR_6 = FUNC_1(VAR_5->connection, "commit");
   if (!FUNC_3(VAR_6, VAR_2, VAR_5->connection, VAR_0))
    return 0;
   FUNC_0(VAR_6);
  }
  VAR_5->autocommit = 1;
 }

 return 1;
}
