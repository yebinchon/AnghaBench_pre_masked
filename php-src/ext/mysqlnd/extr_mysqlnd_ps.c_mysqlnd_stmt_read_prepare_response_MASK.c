
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ enum_func_status ;
struct TYPE_17__ {int field_count; int upsert_status; int error_info; TYPE_2__* payload_decoder_factory; } ;
struct TYPE_16__ {int error_code; int param_count; int field_count; int warning_count; int stmt_id; int error_info; } ;
struct TYPE_15__ {TYPE_3__* data; } ;
struct TYPE_14__ {int param_count; int field_count; int upsert_status; int stmt_id; int error_info; TYPE_6__* conn; } ;
struct TYPE_12__ {int (* init_prepare_response_packet ) (TYPE_5__*) ;} ;
struct TYPE_13__ {TYPE_1__ m; } ;
typedef TYPE_3__ MYSQLND_STMT_DATA ;
typedef TYPE_4__ MYSQLND_STMT ;
typedef TYPE_5__ MYSQLND_PACKET_PREPARE_RESPONSE ;
typedef TYPE_6__ MYSQLND_CONN_DATA ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static enum_func_status
FUNC_9(MYSQLND_STMT * VAR_2)
{
 MYSQLND_STMT_DATA * VAR_3 = VAR_2? VAR_2->data : ((void*)0);
 MYSQLND_CONN_DATA * VAR_4 = VAR_3? VAR_3->conn : ((void*)0);
 MYSQLND_PACKET_PREPARE_RESPONSE VAR_5;
 enum_func_status VAR_6 = VAR_0;

 FUNC_1("mysqlnd_stmt_read_prepare_response");
 if (!VAR_3 || !VAR_4) {
  FUNC_3(VAR_0);
 }
 FUNC_2("stmt=%lu", VAR_3->stmt_id);

 VAR_4->payload_decoder_factory->m.init_prepare_response_packet(&VAR_5);

 if (VAR_0 == FUNC_5(VAR_4, &VAR_5)) {
  goto done;
 }

 if (0xFF == VAR_5.error_code) {
  FUNC_0(VAR_3->error_info, VAR_5.error_info);
  FUNC_0(VAR_4->error_info, VAR_5.error_info);
  goto done;
 }
 VAR_6 = VAR_1;
 VAR_3->stmt_id = VAR_5.stmt_id;
 FUNC_7(VAR_4->upsert_status, VAR_5.warning_count);
 FUNC_6(VAR_3->upsert_status, 0);
 VAR_3->field_count = VAR_4->field_count = VAR_5.field_count;
 VAR_3->param_count = VAR_5.param_count;
done:
 FUNC_4(&VAR_5);

 FUNC_3(VAR_6);
}
