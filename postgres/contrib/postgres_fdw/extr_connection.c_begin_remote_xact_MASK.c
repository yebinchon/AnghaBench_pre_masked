
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {int xact_depth; int changing_xact_state; int conn; } ;
typedef TYPE_1__ ConnCacheEntry ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(ConnCacheEntry *VAR_1)
{
 int VAR_2 = FUNC_0();


 if (VAR_1->xact_depth <= 0)
 {
  const char *VAR_3;

  FUNC_3(VAR_0, "starting remote transaction on connection %p",
    VAR_1->conn);

  if (FUNC_1())
   VAR_3 = "START TRANSACTION ISOLATION LEVEL SERIALIZABLE";
  else
   VAR_3 = "START TRANSACTION ISOLATION LEVEL REPEATABLE READ";
  VAR_1->changing_xact_state = 1;
  FUNC_2(VAR_1->conn, VAR_3);
  VAR_1->xact_depth = 1;
  VAR_1->changing_xact_state = 0;
 }






 while (VAR_1->xact_depth < VAR_2)
 {
  char VAR_4[64];

  FUNC_4(VAR_4, sizeof(VAR_4), "SAVEPOINT s%d", VAR_1->xact_depth + 1);
  VAR_1->changing_xact_state = 1;
  FUNC_2(VAR_1->conn, VAR_4);
  VAR_1->xact_depth++;
  VAR_1->changing_xact_state = 0;
 }
}
