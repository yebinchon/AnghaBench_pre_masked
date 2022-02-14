
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_30__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_25__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef int zend_bool ;
typedef int enum_mysqlnd_collected_stats ;
typedef scalar_t__ enum_func_status ;
struct TYPE_40__ {scalar_t__ (* read_result_metadata ) (TYPE_9__*,TYPE_12__*) ;int (* free_result_contents ) (TYPE_9__*) ;} ;
struct TYPE_43__ {TYPE_6__ m; } ;
struct TYPE_42__ {TYPE_7__* data; } ;
struct TYPE_41__ {int state; TYPE_9__* result; int stmt_id; } ;
struct TYPE_39__ {TYPE_9__* (* result_init ) (int) ;} ;
struct TYPE_38__ {int l; int s; } ;
struct TYPE_37__ {int l; int s; } ;
struct TYPE_36__ {int error; scalar_t__ error_no; } ;
struct TYPE_33__ {int (* init_eof_packet ) (TYPE_10__*) ;int (* init_rset_header_packet ) (TYPE_10__*) ;} ;
struct TYPE_35__ {TYPE_1__ m; } ;
struct TYPE_34__ {scalar_t__ error_no; } ;
struct TYPE_32__ {int field_count; int stats; int upsert_status; TYPE_9__* current_result; TYPE_2__* payload_decoder_factory; TYPE_25__* error_info; TYPE_5__* m; int state; int last_query_type; TYPE_4__ last_message; } ;
struct TYPE_31__ {int field_count; int server_status; int warning_count; TYPE_3__ info_or_local_file; int last_insert_id; int affected_rows; TYPE_30__ error_info; } ;
typedef TYPE_7__ MYSQLND_STMT_DATA ;
typedef TYPE_8__ MYSQLND_STMT ;
typedef TYPE_9__ MYSQLND_RES ;
typedef TYPE_10__ MYSQLND_PACKET_RSET_HEADER ;
typedef TYPE_10__ MYSQLND_PACKET_EOF ;
typedef TYPE_12__ MYSQLND_CONN_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_25__*,TYPE_30__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,int ) ;

 int VAR_8 ;
 int FUNC_8 (TYPE_10__*) ;
 scalar_t__ FUNC_9 (TYPE_12__*,TYPE_10__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_25__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_7__*,int ,int) ;
 int FUNC_22 (TYPE_9__*) ;
 scalar_t__ FUNC_23 (TYPE_12__*,int ,int *) ;
 int FUNC_24 (int *,int ,char*) ;
 int FUNC_25 (TYPE_10__*) ;
 TYPE_9__* FUNC_26 (int) ;
 TYPE_9__* FUNC_27 (int) ;
 scalar_t__ FUNC_28 (TYPE_9__*,TYPE_12__*) ;
 int FUNC_29 (TYPE_10__*) ;
 int FUNC_30 (TYPE_9__*) ;

enum_func_status
FUNC_31(MYSQLND_CONN_DATA * VAR_24, MYSQLND_STMT * VAR_25)
{
 enum_func_status VAR_26;
 MYSQLND_STMT_DATA * VAR_27 = VAR_25 ? VAR_25->data : ((void*)0);
 MYSQLND_PACKET_RSET_HEADER VAR_28;
 MYSQLND_PACKET_EOF VAR_29;

 FUNC_1("mysqlnd_query_read_result_set_header");
 FUNC_5("stmt=%lu", VAR_27? VAR_27->stmt_id:0);

 VAR_26 = VAR_7;
 do {
  VAR_24->payload_decoder_factory->m.init_rset_header_packet(&VAR_28);
  FUNC_17(VAR_24->upsert_status);

  if (VAR_7 == (VAR_26 = FUNC_9(VAR_24, &VAR_28))) {
   if (VAR_24->error_info->error_no != VAR_5) {
    FUNC_24(((void*)0), VAR_6, "Error reading result set's header");
   }
   break;
  }

  if (VAR_28.error_info.error_no) {
   FUNC_19(VAR_24->upsert_status, FUNC_14(VAR_24->upsert_status) & ~VAR_13);




   FUNC_0(VAR_24->error_info, VAR_28.error_info);
   VAR_26 = VAR_7;
   FUNC_3("error=%s", VAR_28.error_info.error);

   FUNC_10(&VAR_24->state, VAR_3);
   break;
  }
  VAR_24->error_info->error_no = 0;

  switch (VAR_28.field_count) {
   case 128: {
    zend_bool VAR_30;
    FUNC_4("LOAD DATA");
    VAR_24->last_query_type = VAR_10;
    VAR_24->field_count = 0;
    FUNC_10(&VAR_24->state, VAR_4);
    VAR_26 = FUNC_23(VAR_24, VAR_28.info_or_local_file.s, &VAR_30);
    FUNC_10(&VAR_24->state, (VAR_26 == VAR_9 || VAR_30 == VAR_23)? VAR_3:VAR_2);
    FUNC_7(VAR_24->stats, VAR_19);
    break;
   }
   case 0:
    FUNC_4("UPSERT");
    VAR_24->last_query_type = VAR_12;
    VAR_24->field_count = VAR_28.field_count;
    FUNC_15(VAR_24->upsert_status);
    FUNC_20(VAR_24->upsert_status, VAR_28.warning_count);
    FUNC_19(VAR_24->upsert_status, VAR_28.server_status);
    FUNC_16(VAR_24->upsert_status, VAR_28.affected_rows);
    FUNC_18(VAR_24->upsert_status, VAR_28.last_insert_id);
    FUNC_12(VAR_24->last_message.s, VAR_24->last_message.l,
        VAR_28.info_or_local_file.s, VAR_28.info_or_local_file.l);

    if (FUNC_14(VAR_24->upsert_status) & VAR_13) {
     FUNC_10(&VAR_24->state, VAR_1);
    } else {
     FUNC_10(&VAR_24->state, VAR_3);
    }
    VAR_26 = VAR_9;
    FUNC_7(VAR_24->stats, VAR_19);
    break;
   default: do {
    MYSQLND_RES * VAR_31;
    enum_mysqlnd_collected_stats VAR_32 = VAR_18;

    FUNC_4("Result set pending");
    FUNC_11(VAR_24->last_message.s, VAR_24->last_message.l);

    FUNC_7(VAR_24->stats, VAR_22);
    FUNC_15(VAR_24->upsert_status);

    FUNC_17(VAR_24->upsert_status);

    VAR_24->last_query_type = VAR_11;
    FUNC_10(&VAR_24->state, VAR_0);

    VAR_24->field_count = VAR_28.field_count;
    if (!VAR_27) {
     VAR_31 = VAR_24->current_result = VAR_24->m->result_init(VAR_28.field_count);
    } else {
     if (!VAR_27->result) {
      FUNC_4("This is 'SHOW'/'EXPLAIN'-like query.");





      VAR_31 = VAR_27->result = VAR_24->m->result_init(VAR_28.field_count);
     } else {
     }
     VAR_31 = VAR_27->result;
    }
    if (!VAR_31) {
     FUNC_13(VAR_24->error_info);
     VAR_26 = VAR_7;
     break;
    }

    if (VAR_7 == (VAR_26 = VAR_31->m.read_result_metadata(VAR_31, VAR_24))) {

     if (!VAR_27 && VAR_24->current_result) {
      FUNC_22(VAR_24->current_result);
      VAR_24->current_result = ((void*)0);
     }
     FUNC_2("Error occurred while reading metadata");
     break;
    }


    VAR_24->payload_decoder_factory->m.init_eof_packet(&VAR_29);
    if (VAR_7 == (VAR_26 = FUNC_9(VAR_24, &VAR_29))) {
     FUNC_2("Error occurred while reading the EOF packet");
     VAR_31->m.free_result_contents(VAR_31);
     if (!VAR_27) {
      VAR_24->current_result = ((void*)0);
     } else {
      VAR_27->result = ((void*)0);





      FUNC_21(VAR_27, 0, sizeof(*VAR_27));
      VAR_27->state = VAR_8;
     }
    } else {
     FUNC_5("warnings=%u server_status=%u", VAR_29.warning_count, VAR_29.server_status);
     FUNC_20(VAR_24->upsert_status, VAR_29.warning_count);







     FUNC_19(VAR_24->upsert_status, VAR_29.server_status);
     if (VAR_29.server_status & VAR_14) {
      VAR_32 = VAR_17;
     } else if (VAR_29.server_status & VAR_15) {
      VAR_32 = VAR_20;
     } else if (VAR_29.server_status & VAR_16) {
      VAR_32 = VAR_21;
     }
     FUNC_7(VAR_24->stats, VAR_32);
    }
   } while (0);
   FUNC_8(&VAR_29);
   break;
  }
 } while (0);
 FUNC_8(&VAR_28);

 FUNC_4(VAR_26 == VAR_9? "PASS":"FAIL");
 FUNC_6(VAR_26);
}
