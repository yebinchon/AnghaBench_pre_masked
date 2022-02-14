
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef scalar_t__ zend_bool ;
typedef scalar_t__ enum_func_status ;
struct TYPE_25__ {scalar_t__ error_no; } ;
struct TYPE_22__ {int * ptr; } ;
struct TYPE_34__ {int server_status; int warning_count; scalar_t__ eof; TYPE_19__ error_info; TYPE_12__ row_buffer; TYPE_11__* result_set_memory_pool; int fields_metadata; int field_count; int * fields; scalar_t__ skip_extraction; } ;
struct TYPE_33__ {unsigned int field_count; TYPE_15__* memory_pool; TYPE_13__* unbuf; TYPE_7__* meta; TYPE_10__* conn; } ;
struct TYPE_32__ {TYPE_4__* fields; } ;
struct TYPE_31__ {TYPE_5__* data; } ;
struct TYPE_30__ {int error_info; TYPE_3__* result_bind; } ;
struct TYPE_29__ {scalar_t__ max_length; } ;
struct TYPE_28__ {scalar_t__ bound; int zv; } ;
struct TYPE_27__ {int int_and_float_native; } ;
struct TYPE_26__ {scalar_t__ (* row_decoder ) (TYPE_12__*,int *,int ,int ,int ,int ) ;int (* free_last_data ) (TYPE_13__*,int ) ;} ;
struct TYPE_24__ {void* checkpoint; } ;
struct TYPE_23__ {scalar_t__ eof_reached; int row_count; int * last_row_data; TYPE_12__ last_row_buffer; TYPE_1__ m; TYPE_9__* row_packet; } ;
struct TYPE_21__ {int (* free_chunk ) (TYPE_11__*,int *) ;} ;
struct TYPE_20__ {int state; int upsert_status; int error_info; int stats; TYPE_2__* options; } ;
typedef TYPE_5__ MYSQLND_STMT_DATA ;
typedef TYPE_6__ MYSQLND_STMT ;
typedef TYPE_7__ MYSQLND_RES_METADATA ;
typedef TYPE_8__ MYSQLND_RES ;
typedef TYPE_9__ MYSQLND_PACKET_ROW ;
typedef TYPE_10__ MYSQLND_CONN_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_19__) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_10__*,TYPE_9__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (TYPE_15__*) ;
 int FUNC_20 (TYPE_15__*) ;
 int VAR_12 ;
 int FUNC_21 (TYPE_13__*,int ) ;
 scalar_t__ FUNC_22 (TYPE_12__*,int *,int ,int ,int ,int ) ;
 int FUNC_23 (TYPE_11__*,int *) ;

enum_func_status
FUNC_24(MYSQLND_RES * VAR_13, void * VAR_14, const unsigned int VAR_15, zend_bool * VAR_16)
{
 enum_func_status VAR_17;
 MYSQLND_STMT * VAR_18 = (MYSQLND_STMT *) VAR_14;
 MYSQLND_STMT_DATA * VAR_19 = VAR_18? VAR_18->data : ((void*)0);
 MYSQLND_PACKET_ROW * VAR_20;
 MYSQLND_CONN_DATA * VAR_21 = VAR_13->conn;
 const MYSQLND_RES_METADATA * const VAR_22 = VAR_13->meta;
 void *VAR_23;

 FUNC_1("mysqlnd_stmt_fetch_row_unbuffered");

 *VAR_16 = VAR_5;

 if (VAR_13->unbuf->eof_reached) {

  FUNC_3("EOF already reached");
  FUNC_5(VAR_7);
 }
 if (FUNC_6(&VAR_21->state) != VAR_0) {
  FUNC_9(VAR_21->error_info, VAR_3, VAR_11, VAR_12);
  FUNC_2("command out of sync");
  FUNC_5(VAR_4);
 }
 if (!(VAR_20 = VAR_13->unbuf->row_packet)) {
  FUNC_5(VAR_4);
 }


 VAR_20->skip_extraction = VAR_19 && VAR_19->result_bind? VAR_5:VAR_10;

 VAR_23 = VAR_13->memory_pool->checkpoint;
 FUNC_20(VAR_13->memory_pool);





 if (VAR_7 == (VAR_17 = FUNC_8(VAR_21, VAR_20)) && !VAR_20->eof) {
  unsigned int VAR_24, VAR_25 = VAR_13->field_count;

  if (!VAR_20->skip_extraction) {
   VAR_13->unbuf->m.free_last_data(VAR_13->unbuf, VAR_21->stats);

   VAR_13->unbuf->last_row_data = VAR_20->fields;
   VAR_13->unbuf->last_row_buffer = VAR_20->row_buffer;
   VAR_20->fields = ((void*)0);
   VAR_20->row_buffer.ptr = ((void*)0);

   if (VAR_7 != VAR_13->unbuf->m.row_decoder(&VAR_13->unbuf->last_row_buffer,
         VAR_13->unbuf->last_row_data,
         VAR_20->field_count,
         VAR_20->fields_metadata,
         VAR_21->options->int_and_float_native,
         VAR_21->stats))
   {
    FUNC_19(VAR_13->memory_pool);
    VAR_13->memory_pool->checkpoint = VAR_23;
    FUNC_5(VAR_4);
   }

   for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
    zval *VAR_26 = &VAR_19->result_bind[VAR_24].zv;
    if (VAR_19->result_bind[VAR_24].bound == VAR_10) {
     zval *VAR_27 = &VAR_13->unbuf->last_row_data[VAR_24];

     if (FUNC_18(VAR_27) == VAR_6 && (VAR_22->fields[VAR_24].max_length < (zend_ulong) FUNC_17(VAR_27))){
      VAR_22->fields[VAR_24].max_length = FUNC_17(VAR_27);
     }

     FUNC_15(VAR_26, VAR_27, 0);

     FUNC_16(VAR_27);
    }
   }
   FUNC_7(VAR_21->stats, VAR_9);
  } else {
   FUNC_3("skipping extraction");






   VAR_20->result_set_memory_pool->free_chunk(
    VAR_20->result_set_memory_pool, VAR_20->row_buffer.ptr);
   VAR_20->row_buffer.ptr = ((void*)0);
  }

  VAR_13->unbuf->row_count++;
  *VAR_16 = VAR_10;
 } else if (VAR_17 == VAR_4) {
  if (VAR_20->error_info.error_no) {
   FUNC_0(VAR_21->error_info, VAR_20->error_info);
   FUNC_0(VAR_19->error_info, VAR_20->error_info);
  }
  FUNC_10(&VAR_21->state, VAR_2);
  VAR_13->unbuf->eof_reached = VAR_10;
 } else if (VAR_20->eof) {
  FUNC_3("EOF");

  VAR_13->unbuf->eof_reached = VAR_10;
  FUNC_12(VAR_21->upsert_status);
  FUNC_14(VAR_21->upsert_status, VAR_20->warning_count);
  FUNC_13(VAR_21->upsert_status, VAR_20->server_status);





  if (FUNC_11(VAR_21->upsert_status) & VAR_8) {
   FUNC_10(&VAR_21->state, VAR_1);
  } else {
   FUNC_10(&VAR_21->state, VAR_2);
  }
 }

 FUNC_19(VAR_13->memory_pool);
 VAR_13->memory_pool->checkpoint = VAR_23;

 FUNC_4("ret=%s fetched_anything=%u", VAR_17 == VAR_7? "PASS":"FAIL", *VAR_16);
 FUNC_5(VAR_17);
}
