
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_uchar ;
typedef scalar_t__ enum_func_status ;
struct TYPE_11__ {size_t size; scalar_t__* ptr; } ;
struct TYPE_10__ {int * stats; int * vio; int * protocol_frame_codec; int * error_info; } ;
struct TYPE_8__ {int sqlstate; int error_no; int error; } ;
struct TYPE_7__ {size_t size; } ;
struct TYPE_9__ {scalar_t__ binary_protocol; int field_count; scalar_t__ fields; int skip_extraction; int eof; void* warning_count; void* server_status; TYPE_2__ error_info; TYPE_6__ row_buffer; TYPE_1__ header; int result_set_memory_pool; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef int MYSQLND_PFC ;
typedef TYPE_3__ MYSQLND_PACKET_ROW ;
typedef int MYSQLND_ERROR_INFO ;
typedef TYPE_4__ MYSQLND_CONN_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void*,void*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_7 (scalar_t__*,size_t,int ,int,int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int *,int ,TYPE_6__*,size_t*) ;
 void* FUNC_9 (scalar_t__*) ;

__attribute__((used)) static enum_func_status
FUNC_10(MYSQLND_CONN_DATA * VAR_14, void * VAR_15)
{
 MYSQLND_PACKET_ROW *VAR_16= (MYSQLND_PACKET_ROW *) VAR_15;
 MYSQLND_ERROR_INFO * VAR_17 = VAR_14->error_info;
 MYSQLND_PFC * VAR_18 = VAR_14->protocol_frame_codec;
 MYSQLND_VIO * VAR_19 = VAR_14->vio;
 MYSQLND_STATS * VAR_20 = VAR_14->stats;
 zend_uchar *VAR_21;
 enum_func_status VAR_22 = VAR_5;
 size_t VAR_23 = 0;

 FUNC_0("php_mysqlnd_rowp_read");

 VAR_22 = FUNC_8(VAR_18, VAR_19, VAR_20, VAR_17,
          VAR_16->result_set_memory_pool, &VAR_16->row_buffer, &VAR_23);
 if (VAR_2 == VAR_22) {
  goto end;
 }
 FUNC_5(VAR_20, VAR_12[VAR_6],
          VAR_4 + VAR_16->header.size,
          VAR_13[VAR_6],
          1);
 VAR_16->header.size = VAR_23;
 VAR_16->row_buffer.size = VAR_23;

 if (VAR_1 == (*(VAR_21 = VAR_16->row_buffer.ptr))) {





  VAR_22 = VAR_2;
  FUNC_7(VAR_21 + 1, VAR_23 - 1,
           VAR_16->error_info.error,
           sizeof(VAR_16->error_info.error),
           &VAR_16->error_info.error_no,
           VAR_16->error_info.sqlstate
          );
 } else if (VAR_0 == *VAR_21 && VAR_23 < 8) {
  VAR_16->eof = VAR_11;
  VAR_21++;
  if (VAR_23 > 1) {
   VAR_16->warning_count = FUNC_9(VAR_21);
   VAR_21 += 2;
   VAR_16->server_status = FUNC_9(VAR_21);

   FUNC_2("server_status=%u warning_count=%u", VAR_16->server_status, VAR_16->warning_count);
  }
 } else {
  FUNC_4(VAR_20,
         VAR_16->binary_protocol? VAR_8:
                VAR_7);

  VAR_16->eof = VAR_3;


  if (!VAR_16->skip_extraction) {
   if (!VAR_16->fields) {
    FUNC_1("Allocating packet->fields");
    VAR_16->fields = FUNC_6(VAR_16->field_count, sizeof(zval));
   }
  } else {
   FUNC_4(VAR_20,
          VAR_16->binary_protocol? VAR_10:
                 VAR_9);
  }
 }

end:
 FUNC_3(VAR_22);
}
