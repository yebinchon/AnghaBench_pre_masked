
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


typedef int enum_func_status ;
struct TYPE_16__ {int (* free_result_contents ) (TYPE_8__*) ;} ;
struct TYPE_21__ {TYPE_3__ m; } ;
struct TYPE_20__ {TYPE_2__* payload_decoder_factory; } ;
struct TYPE_19__ {int warning_count; int server_status; } ;
struct TYPE_18__ {TYPE_4__* data; } ;
struct TYPE_17__ {int state; int upsert_status; TYPE_8__* result; int stmt_id; TYPE_7__* conn; } ;
struct TYPE_14__ {int (* init_eof_packet ) (TYPE_6__*) ;} ;
struct TYPE_15__ {TYPE_1__ m; } ;
typedef TYPE_4__ MYSQLND_STMT_DATA ;
typedef TYPE_5__ MYSQLND_STMT ;
typedef TYPE_6__ MYSQLND_PACKET_EOF ;
typedef TYPE_7__ MYSQLND_CONN_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_8__*) ;

__attribute__((used)) static enum_func_status
FUNC_9(MYSQLND_STMT * VAR_3)
{
 MYSQLND_STMT_DATA * VAR_4 = VAR_3? VAR_3->data : ((void*)0);
 MYSQLND_CONN_DATA * VAR_5 = VAR_4? VAR_4->conn : ((void*)0);
 MYSQLND_PACKET_EOF VAR_6;
 enum_func_status VAR_7 = VAR_0;

 FUNC_0("mysqlnd_stmt_prepare_read_eof");
 if (!VAR_4 || !VAR_5) {
  FUNC_2(VAR_0);
 }
 FUNC_1("stmt=%lu", VAR_4->stmt_id);

 VAR_5->payload_decoder_factory->m.init_eof_packet(&VAR_6);
 if (VAR_0 == (VAR_7 = FUNC_3(VAR_5, &VAR_6))) {
  if (VAR_4->result) {
   VAR_4->result->m.free_result_contents(VAR_4->result);





   FUNC_6(VAR_4, 0, sizeof(MYSQLND_STMT_DATA));
   VAR_4->state = VAR_1;
  }
 } else {
  FUNC_4(VAR_4->upsert_status, VAR_6.server_status);
  FUNC_5(VAR_4->upsert_status, VAR_6.warning_count);
  VAR_4->state = VAR_2;
 }

 FUNC_2(VAR_7);
}
