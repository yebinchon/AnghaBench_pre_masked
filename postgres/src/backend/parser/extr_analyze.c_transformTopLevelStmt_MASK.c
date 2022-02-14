
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int stmt_len; int stmt_location; } ;
struct TYPE_6__ {int stmt_len; int stmt_location; int stmt; } ;
typedef TYPE_1__ RawStmt ;
typedef TYPE_2__ Query ;
typedef int ParseState ;


 TYPE_2__* FUNC_0 (int *,int ) ;

Query *
FUNC_1(ParseState *VAR_0, RawStmt *VAR_1)
{
 Query *VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1->stmt);

 VAR_2->stmt_location = VAR_1->stmt_location;
 VAR_2->stmt_len = VAR_1->stmt_len;

 return VAR_2;
}
