
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int enum_mysqlnd_parse_exec_response_type ;
typedef scalar_t__ enum_func_status ;
struct TYPE_21__ {scalar_t__ last_query_type; int stats; int state; scalar_t__ field_count; TYPE_1__* m; int upsert_status; int * error_info; } ;
struct TYPE_20__ {TYPE_5__* m; TYPE_6__* data; } ;
struct TYPE_19__ {int send_types_to_server; int flags; int upsert_status; int default_rset_handler; int cursor_exists; int state; scalar_t__ field_count; TYPE_4__* result; int * error_info; TYPE_8__* conn; } ;
struct TYPE_18__ {int (* free_stmt_content ) (TYPE_7__* const) ;int use_result; int store_result; } ;
struct TYPE_17__ {TYPE_3__* unbuf; TYPE_2__* stored_data; scalar_t__ field_count; scalar_t__ conn; int type; } ;
struct TYPE_16__ {int * lengths; } ;
struct TYPE_15__ {int * lengths; } ;
struct TYPE_14__ {scalar_t__ (* query_read_result_set_header ) (TYPE_8__*,TYPE_7__* const) ;scalar_t__ (* get_reference ) (TYPE_8__*) ;} ;
typedef TYPE_6__ MYSQLND_STMT_DATA ;
typedef TYPE_7__ MYSQLND_STMT ;
typedef TYPE_8__ MYSQLND_CONN_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (TYPE_8__*,TYPE_7__* const) ;
 scalar_t__ FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (TYPE_7__* const) ;

__attribute__((used)) static enum_func_status
FUNC_21(MYSQLND_STMT * const VAR_17, enum_mysqlnd_parse_exec_response_type VAR_18)
{
 MYSQLND_STMT_DATA * VAR_19 = VAR_17? VAR_17->data : ((void*)0);
 MYSQLND_CONN_DATA * VAR_20 = VAR_19? VAR_19->conn : ((void*)0);
 enum_func_status VAR_21;

 FUNC_1("mysqlnd_stmt_execute_parse_response");
 if (!VAR_19 || !VAR_20) {
  FUNC_4(VAR_4);
 }
 FUNC_7(&VAR_20->state, VAR_0);

 VAR_21 = VAR_20->m->query_read_result_set_header(VAR_20, VAR_17);
 if (VAR_21 == VAR_4) {
  FUNC_0(VAR_19->error_info, *VAR_20->error_info);
  FUNC_13(VAR_19->upsert_status);
  FUNC_14(VAR_19->upsert_status, FUNC_9(VAR_20->upsert_status));
  if (FUNC_5(&VAR_20->state) == VAR_1) {

  }
  VAR_19->state = VAR_8;
  VAR_19->send_types_to_server = 1;
 } else {







  FUNC_8(VAR_19->error_info);
  FUNC_8(VAR_20->error_info);
  FUNC_17(VAR_19->upsert_status, FUNC_12(VAR_20->upsert_status));
  FUNC_14(VAR_19->upsert_status, FUNC_9(VAR_20->upsert_status));
  FUNC_16(VAR_19->upsert_status, FUNC_11(VAR_20->upsert_status));
  FUNC_15(VAR_19->upsert_status, FUNC_10(VAR_20->upsert_status));

  VAR_19->state = VAR_7;
  if (VAR_20->last_query_type == VAR_12 || VAR_20->last_query_type == VAR_11) {
   FUNC_2("PASS");
   FUNC_4(VAR_10);
  }

  VAR_19->result->type = VAR_6;
  if (!VAR_19->result->conn) {




   VAR_19->result->conn = VAR_20->m->get_reference(VAR_20);
  }


  VAR_19->field_count = VAR_19->result->field_count = VAR_20->field_count;
  if (VAR_19->result->stored_data) {
   VAR_19->result->stored_data->lengths = ((void*)0);
  } else if (VAR_19->result->unbuf) {
   VAR_19->result->unbuf->lengths = ((void*)0);
  }
  if (VAR_19->field_count) {
   VAR_19->state = VAR_9;





   FUNC_3("server_status=%u cursor=%u", FUNC_11(VAR_19->upsert_status),
      FUNC_11(VAR_19->upsert_status) & VAR_14);

   if (FUNC_11(VAR_19->upsert_status) & VAR_14) {
    FUNC_2("cursor exists");
    VAR_19->cursor_exists = VAR_16;
    FUNC_7(&VAR_20->state, VAR_2);

    VAR_19->default_rset_handler = VAR_17->m->use_result;
    FUNC_2("use_result");
   } else if (VAR_19->flags & VAR_3) {
    FUNC_2("asked for cursor but got none");
    VAR_19->default_rset_handler = VAR_17->m->store_result;
    FUNC_2("store_result");
   } else {
    FUNC_2("no cursor");

    VAR_19->default_rset_handler = VAR_17->m->use_result;
    FUNC_2("use_result");
   }
  }
 }

 if (FUNC_11(VAR_19->upsert_status) & VAR_13) {
  VAR_17->m->free_stmt_content(VAR_17);
  FUNC_2("PS OUT Variable RSet, skipping");

  VAR_21 = FUNC_21(VAR_17, VAR_5);
 }


 FUNC_3("server_status=%u cursor=%u", FUNC_11(VAR_19->upsert_status), FUNC_11(VAR_19->upsert_status) & VAR_14);

 if (VAR_21 == VAR_10 && VAR_20->last_query_type == VAR_12 && FUNC_9(VAR_19->upsert_status)) {
  FUNC_6(VAR_20->stats, VAR_15, FUNC_9(VAR_19->upsert_status));
 }

 FUNC_2(VAR_21 == VAR_10? "PASS":"FAIL");
 FUNC_4(VAR_21);
}
