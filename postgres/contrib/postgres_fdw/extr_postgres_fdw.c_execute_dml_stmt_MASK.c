
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ps_ExprContext; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; scalar_t__ fdw_state; } ;
struct TYPE_8__ {int numParams; char** param_values; int * result; int num_tuples; scalar_t__ has_returning; int query; int conn; int param_exprs; int param_flinfo; } ;
typedef TYPE_3__ PgFdwDirectModifyState ;
typedef TYPE_4__ ForeignScanState ;
typedef int ExprContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int *,char const**,int *,int *,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ,int,int ) ;
 int FUNC_7 (int *,int ,int ,char const**) ;

__attribute__((used)) static void
FUNC_8(ForeignScanState *VAR_3)
{
 PgFdwDirectModifyState *VAR_4 = (PgFdwDirectModifyState *) VAR_3->fdw_state;
 ExprContext *VAR_5 = VAR_3->ss.ps.ps_ExprContext;
 int VAR_6 = VAR_4->numParams;
 const char **VAR_7 = VAR_4->param_values;




 if (VAR_6 > 0)
  FUNC_7(VAR_5,
        VAR_4->param_flinfo,
        VAR_4->param_exprs,
        VAR_7);
 if (!FUNC_3(VAR_4->conn, VAR_4->query, VAR_6,
         ((void*)0), VAR_7, ((void*)0), ((void*)0), 0))
  FUNC_6(VAR_0, ((void*)0), VAR_4->conn, 0, VAR_4->query);







 VAR_4->result = FUNC_5(VAR_4->conn, VAR_4->query);
 if (FUNC_2(VAR_4->result) !=
  (VAR_4->has_returning ? VAR_2 : VAR_1))
  FUNC_6(VAR_0, VAR_4->result, VAR_4->conn, 1,
         VAR_4->query);


 if (VAR_4->has_returning)
  VAR_4->num_tuples = FUNC_1(VAR_4->result);
 else
  VAR_4->num_tuples = FUNC_4(FUNC_0(VAR_4->result));
}
