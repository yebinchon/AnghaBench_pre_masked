
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int ecxt_per_tuple_memory; } ;
struct TYPE_11__ {TYPE_6__* ps_ExprContext; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;
struct TYPE_15__ {TYPE_2__ ss; scalar_t__ fdw_state; } ;
struct TYPE_14__ {int numParams; char** param_values; int cursor_exists; int eof_reached; scalar_t__ fetch_ct_2; scalar_t__ next_tuple; scalar_t__ num_tuples; int * tuples; int query; int cursor_number; int param_exprs; int param_flinfo; int * conn; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_3__ StringInfoData ;
typedef TYPE_4__ PgFdwScanState ;
typedef int PGresult ;
typedef int PGconn ;
typedef int MemoryContext ;
typedef TYPE_5__ ForeignScanState ;
typedef TYPE_6__ ExprContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int *,char const**,int *,int *,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int *,int *,int,int ) ;
 int FUNC_9 (TYPE_6__*,int ,int ,char const**) ;

__attribute__((used)) static void
FUNC_10(ForeignScanState *VAR_2)
{
 PgFdwScanState *VAR_3 = (PgFdwScanState *) VAR_2->fdw_state;
 ExprContext *VAR_4 = VAR_2->ss.ps.ps_ExprContext;
 int VAR_5 = VAR_3->numParams;
 const char **VAR_6 = VAR_3->param_values;
 PGconn *VAR_7 = VAR_3->conn;
 StringInfoData VAR_8;
 PGresult *VAR_9;






 if (VAR_5 > 0)
 {
  MemoryContext VAR_10;

  VAR_10 = FUNC_0(VAR_4->ecxt_per_tuple_memory);

  FUNC_9(VAR_4,
        VAR_3->param_flinfo,
        VAR_3->param_exprs,
        VAR_6);

  FUNC_0(VAR_10);
 }


 FUNC_5(&VAR_8);
 FUNC_4(&VAR_8, "DECLARE c%u CURSOR FOR\n%s",
      VAR_3->cursor_number, VAR_3->query);
 if (!FUNC_3(VAR_7, VAR_8.data, VAR_5,
         ((void*)0), VAR_6, ((void*)0), ((void*)0), 0))
  FUNC_8(VAR_0, ((void*)0), VAR_7, 0, VAR_8.data);







 VAR_9 = FUNC_7(VAR_7, VAR_8.data);
 if (FUNC_2(VAR_9) != VAR_1)
  FUNC_8(VAR_0, VAR_9, VAR_7, 1, VAR_3->query);
 FUNC_1(VAR_9);


 VAR_3->cursor_exists = 1;
 VAR_3->tuples = ((void*)0);
 VAR_3->num_tuples = 0;
 VAR_3->next_tuple = 0;
 VAR_3->fetch_ct_2 = 0;
 VAR_3->eof_reached = 0;


 FUNC_6(VAR_8.data);
}
