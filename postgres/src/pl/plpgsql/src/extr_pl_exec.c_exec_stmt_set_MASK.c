
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int no_snapshots; } ;
struct TYPE_11__ {int readonly_func; } ;
struct TYPE_10__ {int query; TYPE_8__* plan; } ;
struct TYPE_9__ {TYPE_2__* expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_set ;
typedef TYPE_2__ PLpgSQL_expr ;
typedef TYPE_3__ PLpgSQL_execstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*,int *,int *,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(PLpgSQL_execstate *VAR_3, PLpgSQL_stmt_set *VAR_4)
{
 PLpgSQL_expr *VAR_5 = VAR_4->expr;
 int VAR_6;

 if (VAR_5->plan == ((void*)0))
 {
  FUNC_3(VAR_3, VAR_5, 0, 1);
  VAR_5->plan->no_snapshots = 1;
 }

 VAR_6 = FUNC_0(VAR_5->plan, ((void*)0), ((void*)0), VAR_3->readonly_func, 0);

 if (VAR_6 != VAR_2)
  FUNC_2(VAR_0, "SPI_execute_plan failed executing query \"%s\": %s",
    VAR_5->query, FUNC_1(VAR_6));

 return VAR_1;
}
