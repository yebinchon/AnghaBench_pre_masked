
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
struct TYPE_17__ {TYPE_2__* payload_decoder_factory; } ;
struct TYPE_16__ {int skip_parsing; int * memory_pool; } ;
struct TYPE_15__ {TYPE_3__* data; } ;
struct TYPE_14__ {unsigned int param_count; int stmt_id; TYPE_6__* conn; } ;
struct TYPE_12__ {int (* init_result_field_packet ) (TYPE_5__*) ;} ;
struct TYPE_13__ {TYPE_1__ m; } ;
typedef TYPE_3__ MYSQLND_STMT_DATA ;
typedef TYPE_4__ MYSQLND_STMT ;
typedef TYPE_5__ MYSQLND_PACKET_RES_FIELD ;
typedef int MYSQLND_MEMORY_POOL ;
typedef TYPE_6__ MYSQLND_CONN_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static enum_func_status
FUNC_9(MYSQLND_STMT * VAR_4)
{
 MYSQLND_STMT_DATA * VAR_5 = VAR_4? VAR_4->data : ((void*)0);
 MYSQLND_CONN_DATA * VAR_6 = VAR_5? VAR_5->conn : ((void*)0);

 unsigned int VAR_7 = 0;
 enum_func_status VAR_8 = VAR_0;
 MYSQLND_PACKET_RES_FIELD VAR_9;
 MYSQLND_MEMORY_POOL * VAR_10;

 FUNC_0("mysqlnd_stmt_skip_metadata");
 if (!VAR_5 || !VAR_6) {
  FUNC_2(VAR_0);
 }
 VAR_10 = FUNC_6(FUNC_3(VAR_3));
 if (!VAR_10) {
  FUNC_2(VAR_0);
 }
 FUNC_1("stmt=%lu", VAR_5->stmt_id);

 VAR_6->payload_decoder_factory->m.init_result_field_packet(&VAR_9);
 VAR_9.memory_pool = VAR_10;

 VAR_8 = VAR_1;
 VAR_9.skip_parsing = VAR_2;
 for (;VAR_7 < VAR_5->param_count; VAR_7++) {
  if (VAR_0 == FUNC_5(VAR_6, &VAR_9)) {
   VAR_8 = VAR_0;
   break;
  }
 }
 FUNC_4(&VAR_9);
 FUNC_7(VAR_10);

 FUNC_2(VAR_8);
}
