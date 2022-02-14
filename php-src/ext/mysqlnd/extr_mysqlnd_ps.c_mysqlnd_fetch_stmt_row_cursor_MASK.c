
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int zend_uchar ;
typedef scalar_t__ zend_bool ;
typedef scalar_t__ enum_func_status ;
typedef int buf ;
struct TYPE_36__ {unsigned int field_count; TYPE_16__* unbuf; TYPE_8__* meta; int conn; } ;
struct TYPE_35__ {TYPE_1__* fields; } ;
struct TYPE_34__ {TYPE_6__* data; } ;
struct TYPE_33__ {int stmt_id; scalar_t__ state; int upsert_status; TYPE_5__* result_bind; int * error_info; TYPE_12__* conn; } ;
struct TYPE_32__ {scalar_t__ bound; int zv; } ;
struct TYPE_31__ {int int_and_float_native; } ;
struct TYPE_30__ {scalar_t__ (* row_decoder ) (TYPE_15__*,int *,int ,int ,int ,int ) ;int (* free_last_data ) (TYPE_16__*,int ) ;} ;
struct TYPE_29__ {scalar_t__ (* stmt_fetch ) (TYPE_12__*,TYPE_11__ const) ;} ;
struct TYPE_28__ {scalar_t__ max_length; } ;
struct TYPE_26__ {int * ptr; } ;
struct TYPE_27__ {scalar_t__ eof_reached; int row_count; int * last_row_data; TYPE_15__ last_row_buffer; TYPE_3__ m; TYPE_10__* row_packet; } ;
struct TYPE_25__ {int (* free_chunk ) (TYPE_13__*,int *) ;} ;
struct TYPE_24__ {int upsert_status; int stats; TYPE_4__* options; int * error_info; TYPE_2__* command; } ;
struct TYPE_23__ {char const* member_0; int member_1; } ;
struct TYPE_22__ {int warning_count; int server_status; scalar_t__ eof; TYPE_15__ row_buffer; TYPE_13__* result_set_memory_pool; int fields_metadata; int field_count; int * fields; scalar_t__ skip_extraction; } ;
typedef TYPE_6__ MYSQLND_STMT_DATA ;
typedef TYPE_7__ MYSQLND_STMT ;
typedef TYPE_8__ MYSQLND_RES_METADATA ;
typedef TYPE_9__ MYSQLND_RES ;
typedef TYPE_10__ MYSQLND_PACKET_ROW ;
typedef TYPE_11__ MYSQLND_CSTRING ;
typedef TYPE_12__ MYSQLND_CONN_DATA ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_12__*,TYPE_10__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_20 (TYPE_12__*,TYPE_11__ const) ;
 int FUNC_21 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_22 (TYPE_15__*,int *,int ,int ,int ,int ) ;
 int FUNC_23 (TYPE_13__*,int *) ;
 int FUNC_24 (TYPE_13__*,int *) ;

enum_func_status
FUNC_25(MYSQLND_RES * VAR_11, void * VAR_12, const unsigned int VAR_13, zend_bool * VAR_14)
{
 enum_func_status VAR_15;
 MYSQLND_STMT * VAR_16 = (MYSQLND_STMT *) VAR_12;
 MYSQLND_STMT_DATA * VAR_17 = VAR_16? VAR_16->data : ((void*)0);
 MYSQLND_CONN_DATA * VAR_18 = VAR_17? VAR_17->conn : ((void*)0);
 zend_uchar VAR_19[VAR_4 + 4 ];
 MYSQLND_PACKET_ROW * VAR_20;

 FUNC_1("mysqlnd_fetch_stmt_row_cursor");

 if (!VAR_17 || !VAR_17->conn || !VAR_11 || !VAR_11->conn || !VAR_11->unbuf) {
  FUNC_2("no statement");
  FUNC_5(VAR_1);
 }
 FUNC_4("stmt=%lu flags=%u", VAR_17->stmt_id, VAR_13);

 if (VAR_17->state < VAR_5) {

  FUNC_8(VAR_18->error_info, VAR_0, VAR_9, VAR_10);
  FUNC_2("command out of sync");
  FUNC_5(VAR_1);
 }
 if (!(VAR_20 = VAR_11->unbuf->row_packet)) {
  FUNC_5(VAR_1);
 }

 FUNC_9(VAR_17->error_info);
 FUNC_9(VAR_18->error_info);

 FUNC_19(VAR_19, VAR_17->stmt_id);
 FUNC_19(VAR_19 + VAR_4, 1);

 {
  const MYSQLND_CSTRING VAR_21 = {(const char*) VAR_19, sizeof(VAR_19)};

  VAR_15 = VAR_18->command->stmt_fetch(VAR_18, VAR_21);
  if (VAR_15 == VAR_1) {
   FUNC_0(VAR_17->error_info, *VAR_18->error_info);
   FUNC_5(VAR_1);
  }

 }

 VAR_20->skip_extraction = VAR_17->result_bind? VAR_2:VAR_8;

 FUNC_10(VAR_17->upsert_status);
 if (VAR_6 == (VAR_15 = FUNC_7(VAR_18, VAR_20)) && !VAR_20->eof) {
  const MYSQLND_RES_METADATA * const VAR_22 = VAR_11->meta;
  unsigned int VAR_23, VAR_24 = VAR_11->field_count;

  if (!VAR_20->skip_extraction) {
   VAR_11->unbuf->m.free_last_data(VAR_11->unbuf, VAR_18->stats);

   VAR_11->unbuf->last_row_data = VAR_20->fields;
   VAR_11->unbuf->last_row_buffer = VAR_20->row_buffer;
   VAR_20->fields = ((void*)0);
   VAR_20->row_buffer.ptr = ((void*)0);

   if (VAR_6 != VAR_11->unbuf->m.row_decoder(&VAR_11->unbuf->last_row_buffer,
           VAR_11->unbuf->last_row_data,
           VAR_20->field_count,
           VAR_20->fields_metadata,
           VAR_18->options->int_and_float_native,
           VAR_18->stats))
   {
    FUNC_5(VAR_1);
   }


   for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    zval *VAR_25 = &VAR_17->result_bind[VAR_23].zv;
    if (VAR_17->result_bind[VAR_23].bound == VAR_8) {
     zval *VAR_26 = &VAR_11->unbuf->last_row_data[VAR_23];

     FUNC_4("i=%u bound_var=%p type=%u refc=%u", VAR_23, &VAR_17->result_bind[VAR_23].zv,
        FUNC_18(VAR_26), FUNC_16(VAR_17->result_bind[VAR_23].zv)?
           FUNC_15(VAR_17->result_bind[VAR_23].zv) : 0);

     if (FUNC_18(VAR_26) == VAR_3 &&
       (VAR_22->fields[VAR_23].max_length < (zend_ulong) FUNC_17(VAR_26))) {
      VAR_22->fields[VAR_23].max_length = FUNC_17(VAR_26);
     }

     FUNC_13(VAR_25, VAR_26, 0);

     FUNC_14(VAR_26);
    }
   }
  } else {
   FUNC_3("skipping extraction");






   VAR_20->result_set_memory_pool->free_chunk(
    VAR_20->result_set_memory_pool, VAR_20->row_buffer.ptr);
   VAR_20->row_buffer.ptr = ((void*)0);
  }

  VAR_15 = FUNC_7(VAR_18, VAR_20);
  if (VAR_20->row_buffer.ptr) {
   VAR_20->result_set_memory_pool->free_chunk(
    VAR_20->result_set_memory_pool, VAR_20->row_buffer.ptr);
   VAR_20->row_buffer.ptr = ((void*)0);
  }
  FUNC_6(VAR_18->stats, VAR_7);

  VAR_11->unbuf->row_count++;
  *VAR_14 = VAR_8;
 } else {
  *VAR_14 = VAR_2;
  FUNC_12(VAR_17->upsert_status, VAR_20->warning_count);
  FUNC_12(VAR_18->upsert_status, VAR_20->warning_count);

  FUNC_11(VAR_17->upsert_status, VAR_20->server_status);
  FUNC_11(VAR_18->upsert_status, VAR_20->server_status);

  VAR_11->unbuf->eof_reached = VAR_20->eof;
 }
 FUNC_12(VAR_17->upsert_status, VAR_20->warning_count);
 FUNC_12(VAR_18->upsert_status, VAR_20->warning_count);

 FUNC_11(VAR_17->upsert_status, VAR_20->server_status);
 FUNC_11(VAR_18->upsert_status, VAR_20->server_status);

 FUNC_4("ret=%s fetched=%u server_status=%u warnings=%u eof=%u",
    VAR_15 == VAR_6? "PASS":"FAIL", *VAR_14,
    VAR_20->server_status, VAR_20->warning_count,
    VAR_11->unbuf->eof_reached);
 FUNC_5(VAR_15);
}
