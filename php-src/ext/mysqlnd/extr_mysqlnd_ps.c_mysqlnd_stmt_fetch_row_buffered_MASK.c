
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef scalar_t__ zend_bool ;
typedef size_t uint64_t ;
typedef scalar_t__ enum_func_status ;
struct TYPE_23__ {int * data_cursor; int * data; } ;
struct TYPE_22__ {unsigned int field_count; TYPE_11__* fields; } ;
struct TYPE_21__ {TYPE_6__* data; } ;
struct TYPE_20__ {long stmt_id; TYPE_4__* result_bind; scalar_t__ update_max_length; } ;
struct TYPE_15__ {scalar_t__ (* row_decoder ) (int *,int *,unsigned int,TYPE_11__*,int ,int ) ;} ;
struct TYPE_19__ {scalar_t__ type; unsigned int row_count; int initialized_rows; int * row_buffers; TYPE_1__ m; } ;
struct TYPE_18__ {scalar_t__ bound; int zv; } ;
struct TYPE_17__ {int stats; TYPE_2__* options; } ;
struct TYPE_16__ {int int_and_float_native; } ;
struct TYPE_14__ {scalar_t__ max_length; } ;
struct TYPE_13__ {unsigned int field_count; TYPE_5__* stored_data; TYPE_3__* conn; TYPE_8__* meta; } ;
typedef TYPE_6__ MYSQLND_STMT_DATA ;
typedef TYPE_7__ MYSQLND_STMT ;
typedef TYPE_8__ MYSQLND_RES_METADATA ;
typedef TYPE_9__ MYSQLND_RES_BUFFERED_ZVAL ;
typedef TYPE_10__ MYSQLND_RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *,unsigned int,TYPE_11__*,int ,int ) ;

enum_func_status
FUNC_10(MYSQLND_RES * VAR_8, void * VAR_9, const unsigned int VAR_10, zend_bool * VAR_11)
{
 MYSQLND_STMT * VAR_12 = (MYSQLND_STMT *) VAR_9;
 MYSQLND_STMT_DATA * VAR_13 = VAR_12? VAR_12->data : ((void*)0);
 const MYSQLND_RES_METADATA * const VAR_14 = VAR_8->meta;
 unsigned int VAR_15 = VAR_14->field_count;

 FUNC_0("mysqlnd_stmt_fetch_row_buffered");
 *VAR_11 = VAR_1;
 FUNC_2("stmt=%lu", VAR_13 != ((void*)0) ? VAR_13->stmt_id : 0L);


 if (VAR_8->stored_data->type == VAR_4) {
  MYSQLND_RES_BUFFERED_ZVAL * VAR_16 = (MYSQLND_RES_BUFFERED_ZVAL *) VAR_8->stored_data;
  if (VAR_16->data_cursor &&
   (VAR_16->data_cursor - VAR_16->data) < (VAR_8->stored_data->row_count * VAR_15))
  {

   if (VAR_13->result_bind) {
    unsigned int VAR_17;
    zval *VAR_18 = VAR_16->data_cursor;

    if (FUNC_6(VAR_18[0])) {
     uint64_t VAR_19 = (VAR_16->data_cursor - VAR_16->data) / VAR_15;
     enum_func_status VAR_20 = VAR_8->stored_data->m.row_decoder(&VAR_8->stored_data->row_buffers[VAR_19],
             VAR_18,
             VAR_14->field_count,
             VAR_14->fields,
             VAR_8->conn->options->int_and_float_native,
             VAR_8->conn->stats);
     if (VAR_5 != VAR_20) {
      FUNC_3(VAR_0);
     }
     VAR_8->stored_data->initialized_rows++;
     if (VAR_13->update_max_length) {
      for (VAR_17 = 0; VAR_17 < VAR_8->field_count; VAR_17++) {





       if (FUNC_8(VAR_18[VAR_17]) == VAR_2) {
        zend_ulong VAR_21 = FUNC_7(VAR_18[VAR_17]);
        if (VAR_14->fields[VAR_17].max_length < VAR_21) {
         VAR_14->fields[VAR_17].max_length = VAR_21;
        }
       }
      }
     }
    }

    for (VAR_17 = 0; VAR_17 < VAR_8->field_count; VAR_17++) {

     zval *VAR_22 = &VAR_13->result_bind[VAR_17].zv;
     if (VAR_13->result_bind[VAR_17].bound == VAR_7) {
      FUNC_2("i=%u type=%u", VAR_17, FUNC_8(VAR_18[VAR_17]));
      FUNC_5(VAR_22, &VAR_18[VAR_17], 0);
     }
    }
   }
   VAR_16->data_cursor += VAR_15;
   *VAR_11 = VAR_7;

   FUNC_4(VAR_6);
   FUNC_1("row fetched");
  } else {
   VAR_16->data_cursor = ((void*)0);
   FUNC_1("no more data");
  }
 } else if (VAR_8->stored_data->type == VAR_3) {

 }
 FUNC_1("PASS");
 FUNC_3(VAR_5);
}
