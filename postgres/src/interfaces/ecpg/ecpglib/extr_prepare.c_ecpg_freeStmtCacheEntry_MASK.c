
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct prepared_statement {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {char* stmtID; scalar_t__ ecpgQuery; int connection; } ;
typedef TYPE_1__ stmtCacheEntry ;


 int FUNC_0 (int,int,struct connection*,struct prepared_statement*,struct prepared_statement*) ;
 struct prepared_statement* FUNC_1 (char*,struct connection*,struct prepared_statement**) ;
 int FUNC_2 (scalar_t__) ;
 struct connection* FUNC_3 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_4(int VAR_1, int VAR_2,
      int VAR_3)
{
 stmtCacheEntry *VAR_4;
 struct connection *VAR_5;
 struct prepared_statement *VAR_6,
      *VAR_7;


 if (VAR_0 == ((void*)0))
  return -1;

 VAR_4 = &VAR_0[VAR_3];
 if (!VAR_4->stmtID[0])
  return 0;

 VAR_5 = FUNC_3(VAR_4->connection);


 VAR_6 = FUNC_1(VAR_4->stmtID, VAR_5, &VAR_7);
 if (VAR_6 && !FUNC_0(VAR_1, VAR_2, VAR_5, VAR_7, VAR_6))
  return -1;

 VAR_4->stmtID[0] = '\0';


 if (VAR_4->ecpgQuery)
 {
  FUNC_2(VAR_4->ecpgQuery);
  VAR_4->ecpgQuery = 0;
 }

 return VAR_3;
}
