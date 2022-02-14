
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sql ;
struct TYPE_6__ {int * chgParam; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; scalar_t__ fdw_state; } ;
struct TYPE_8__ {int cursor_exists; int cursor_number; int fetch_ct_2; int eof_reached; scalar_t__ next_tuple; scalar_t__ num_tuples; int * tuples; int conn; } ;
typedef TYPE_3__ PgFdwScanState ;
typedef int PGresult ;
typedef TYPE_4__ ForeignScanState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ,int,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(ForeignScanState *VAR_2)
{
 PgFdwScanState *VAR_3 = (PgFdwScanState *) VAR_2->fdw_state;
 char VAR_4[64];
 PGresult *VAR_5;


 if (!VAR_3->cursor_exists)
  return;







 if (VAR_2->ss.ps.chgParam != ((void*)0))
 {
  VAR_3->cursor_exists = 0;
  FUNC_4(VAR_4, sizeof(VAR_4), "CLOSE c%u",
     VAR_3->cursor_number);
 }
 else if (VAR_3->fetch_ct_2 > 1)
 {
  FUNC_4(VAR_4, sizeof(VAR_4), "MOVE BACKWARD ALL IN c%u",
     VAR_3->cursor_number);
 }
 else
 {

  VAR_3->next_tuple = 0;
  return;
 }





 VAR_5 = FUNC_2(VAR_3->conn, VAR_4);
 if (FUNC_1(VAR_5) != VAR_1)
  FUNC_3(VAR_0, VAR_5, VAR_3->conn, 1, VAR_4);
 FUNC_0(VAR_5);


 VAR_3->tuples = ((void*)0);
 VAR_3->num_tuples = 0;
 VAR_3->next_tuple = 0;
 VAR_3->fetch_ct_2 = 0;
 VAR_3->eof_reached = 0;
}
