
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int zend_ulong ;
typedef int zend_uchar ;
typedef scalar_t__ zend_bool ;
struct TYPE_31__ {int (* handle_server_response ) (struct st_mysqlnd_authentication_plugin*,TYPE_10__*,int const* const,size_t const,char const* const,size_t const) ;} ;
struct st_mysqlnd_authentication_plugin {TYPE_4__ methods; } ;
typedef scalar_t__ enum_func_status ;
struct TYPE_34__ {size_t auth_data_len; unsigned int charset_no; scalar_t__ send_auth_data; char* user; char* db; size_t db_len; char* auth_plugin_name; int response_code; size_t new_auth_protocol_len; size_t new_auth_protocol_data_len; int message_len; int message; int error; int error_no; scalar_t__* sqlstate; scalar_t__ new_auth_protocol_data; int new_auth_protocol; int connect_attr; int * auth_data; int max_packet_size; int client_flags; } ;
struct TYPE_33__ {scalar_t__ charset_name; int max_allowed_packet; } ;
struct TYPE_32__ {int l; int s; } ;
struct TYPE_30__ {int connect_attr; } ;
struct TYPE_28__ {int (* init_auth_packet ) (TYPE_7__*) ;int (* init_change_auth_response_packet ) (TYPE_7__*) ;int (* init_auth_response_packet ) (TYPE_7__*) ;} ;
struct TYPE_29__ {TYPE_1__ m; } ;
struct TYPE_27__ {int sqlstate; } ;
struct TYPE_26__ {unsigned int nr; } ;
struct TYPE_25__ {int server_capabilities; TYPE_5__ last_message; TYPE_19__* error_info; int charset; TYPE_3__* options; TYPE_2__* payload_decoder_factory; int state; } ;
typedef TYPE_6__ MYSQLND_SESSION_OPTIONS ;
typedef TYPE_7__ MYSQLND_PACKET_CHANGE_AUTH_RESPONSE ;
typedef TYPE_7__ MYSQLND_PACKET_AUTH_RESPONSE ;
typedef TYPE_7__ MYSQLND_PACKET_AUTH ;
typedef TYPE_10__ MYSQLND_CONN_DATA ;
typedef TYPE_11__ MYSQLND_CHARSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_10__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_7__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (TYPE_19__*,int ,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 scalar_t__ const VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *,scalar_t__,size_t) ;
 int * FUNC_11 (size_t) ;
 char* FUNC_12 (int ,size_t,int ) ;
 TYPE_11__* FUNC_13 (scalar_t__) ;
 int FUNC_14 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int ,scalar_t__*,int) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (struct st_mysqlnd_authentication_plugin*,TYPE_10__*,int const* const,size_t const,char const* const,size_t const) ;

enum_func_status
FUNC_20(MYSQLND_CONN_DATA * VAR_11,
         const char * const VAR_12,
         const char * const VAR_13,
         const size_t VAR_14,
         const char * const VAR_15,
         const size_t VAR_16,
         const MYSQLND_SESSION_OPTIONS * const VAR_17,
         const zend_ulong VAR_18,
         const unsigned int VAR_19,
         const zend_bool VAR_20,
         const char * const VAR_21,
         struct st_mysqlnd_authentication_plugin * VAR_22,
         const zend_uchar * const VAR_23,
         const size_t VAR_24,
         const zend_uchar * const VAR_25,
         const size_t VAR_26,
         char ** VAR_27,
         size_t * const VAR_28,
         zend_uchar ** VAR_29,
         size_t * const VAR_30
        )
{
 enum_func_status VAR_31 = VAR_4;
 const MYSQLND_CHARSET * VAR_32 = ((void*)0);
 MYSQLND_PACKET_AUTH_RESPONSE VAR_33;

 FUNC_0("mysqlnd_auth_handshake");

 VAR_11->payload_decoder_factory->m.init_auth_response_packet(&VAR_33);

 if (VAR_20 != VAR_7) {
  MYSQLND_PACKET_CHANGE_AUTH_RESPONSE VAR_34;

  VAR_11->payload_decoder_factory->m.init_change_auth_response_packet(&VAR_34);

  VAR_34.auth_data = VAR_25;
  VAR_34.auth_data_len = VAR_26;

  if (!FUNC_6(VAR_11, &VAR_34)) {
   FUNC_8(&VAR_11->state, VAR_1);
   FUNC_7(VAR_11->error_info, VAR_2, VAR_8, VAR_10);
   FUNC_4(&VAR_34);
   goto end;
  }
  FUNC_4(&VAR_34);
 } else {
  MYSQLND_PACKET_AUTH VAR_35;

  VAR_11->payload_decoder_factory->m.init_auth_packet(&VAR_35);

  VAR_35.client_flags = VAR_18;
  VAR_35.max_packet_size = VAR_17->max_allowed_packet;
  if (VAR_17->charset_name && (VAR_32 = FUNC_13(VAR_17->charset_name))) {
   VAR_35.charset_no = VAR_32->nr;
  } else {
   VAR_35.charset_no = VAR_19;
  }

  VAR_35.send_auth_data = VAR_7;
  VAR_35.user = VAR_12;
  VAR_35.db = VAR_15;
  VAR_35.db_len = VAR_16;

  VAR_35.auth_data = VAR_25;
  VAR_35.auth_data_len = VAR_26;
  VAR_35.auth_plugin_name = VAR_21;

  if (VAR_11->server_capabilities & VAR_0) {
   VAR_35.connect_attr = VAR_11->options->connect_attr;
  }

  if (!FUNC_6(VAR_11, &VAR_35)) {
   FUNC_4(&VAR_35);
   goto end;
  }

  if (VAR_20 == VAR_7) {
   VAR_11->charset = FUNC_14(VAR_35.charset_no);
  }

  FUNC_4(&VAR_35);
 }

 if (VAR_22 && VAR_22->methods.handle_server_response) {
  VAR_22->methods.handle_server_response(VAR_22, VAR_11,
    VAR_23, VAR_24, VAR_13, VAR_14);
 }

 if (VAR_4 == FUNC_5(VAR_11, &VAR_33) || VAR_33.response_code >= 0xFE) {
  if (VAR_33.response_code == 0xFE) {

   if (!VAR_33.new_auth_protocol) {
    FUNC_1(VAR_9);
    FUNC_7(VAR_11->error_info, VAR_3, VAR_8, VAR_9);
   } else {
    *VAR_27 = FUNC_12(VAR_33.new_auth_protocol, VAR_33.new_auth_protocol_len, VAR_5);
    *VAR_28 = VAR_33.new_auth_protocol_len;
    if (VAR_33.new_auth_protocol_data) {
     *VAR_30 = VAR_33.new_auth_protocol_data_len;
     *VAR_29 = FUNC_11(*VAR_30);
     FUNC_10(*VAR_29, VAR_33.new_auth_protocol_data, *VAR_30);
    } else {
     *VAR_29 = ((void*)0);
     *VAR_30 = 0;
    }
   }
  } else if (VAR_33.response_code == 0xFF) {
   if (VAR_33.sqlstate[0]) {
    FUNC_15(VAR_11->error_info->sqlstate, VAR_33.sqlstate, sizeof(VAR_11->error_info->sqlstate));
    FUNC_2("ERROR:%u [SQLSTATE:%s] %s", VAR_33.error_no, VAR_33.sqlstate, VAR_33.error);
   }
   FUNC_7(VAR_11->error_info, VAR_33.error_no, VAR_8, VAR_33.error);
  }
  goto end;
 }

 FUNC_9(VAR_11->last_message.s, VAR_11->last_message.l, VAR_33.message, VAR_33.message_len);
 VAR_31 = VAR_6;
end:
 FUNC_4(&VAR_33);
 FUNC_3(VAR_31);
}
