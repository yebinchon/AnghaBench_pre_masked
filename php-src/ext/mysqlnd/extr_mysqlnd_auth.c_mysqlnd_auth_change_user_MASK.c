
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_25__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;


typedef int zend_uchar ;
typedef scalar_t__ zend_bool ;
typedef scalar_t__ enum_func_status ;
struct TYPE_42__ {size_t auth_data_len; scalar_t__ is_change_user_packet; char* user; char* db; size_t db_len; scalar_t__ silent; char* auth_plugin_name; int response_code; char const* const new_auth_protocol; size_t const new_auth_protocol_len; size_t new_auth_protocol_data_len; scalar_t__ const server_asked_323_auth; scalar_t__ new_auth_protocol_data; int error_info; int charset_no; int connect_attr; int * auth_data; } ;
struct TYPE_41__ {char* s; } ;
struct TYPE_40__ {char* s; } ;
struct TYPE_39__ {char* s; } ;
struct TYPE_38__ {int (* get_server_version ) (TYPE_12__* const) ;scalar_t__ (* set_charset ) (TYPE_12__* const,int ) ;} ;
struct TYPE_36__ {int (* init_ok_packet ) (TYPE_8__*) ;int (* init_auth_packet ) (TYPE_8__*) ;int (* init_change_auth_response_packet ) (TYPE_8__*) ;int (* init_change_user_response_packet ) (TYPE_8__*) ;} ;
struct TYPE_37__ {TYPE_2__ m; } ;
struct TYPE_35__ {scalar_t__ error_no; } ;
struct TYPE_34__ {int connect_attr; } ;
struct TYPE_33__ {int name; int nr; } ;
struct TYPE_32__ {int server_capabilities; TYPE_25__* error_info; TYPE_4__* m; int upsert_status; TYPE_7__ last_message; int persistent; TYPE_6__ password; TYPE_5__ username; TYPE_3__* payload_decoder_factory; int state; TYPE_13__* charset; TYPE_1__* options; } ;
typedef TYPE_8__ MYSQLND_PACKET_OK ;
typedef TYPE_8__ MYSQLND_PACKET_CHG_USER_RESPONSE ;
typedef TYPE_8__ MYSQLND_PACKET_CHANGE_AUTH_RESPONSE ;
typedef TYPE_8__ MYSQLND_PACKET_AUTH ;
typedef TYPE_12__ MYSQLND_CONN_DATA ;
typedef TYPE_13__ MYSQLND_CHARSET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_25__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_12__* const,TYPE_8__*) ;
 int FUNC_7 (TYPE_12__* const,TYPE_8__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_25__*,int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ const VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__,size_t) ;
 int * FUNC_12 (size_t) ;
 int FUNC_13 (char*,int ) ;
 char* FUNC_14 (char const* const,int ) ;
 char* FUNC_15 (char const* const,size_t const,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (TYPE_8__*) ;
 scalar_t__ FUNC_17 (TYPE_12__* const,int ) ;
 int FUNC_18 (TYPE_8__*) ;
 int FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (TYPE_12__* const) ;
 long FUNC_21 (TYPE_12__* const) ;
 long FUNC_22 (TYPE_12__* const) ;
 int FUNC_23 (TYPE_8__*) ;
 long FUNC_24 (TYPE_12__* const) ;
 int FUNC_25 (TYPE_12__* const) ;

enum_func_status
FUNC_26(MYSQLND_CONN_DATA * const VAR_11,
        const char * const VAR_12,
        const size_t VAR_13,
        const char * const VAR_14,
        const size_t VAR_15,
        const char * const VAR_16,
        const size_t VAR_17,
        const zend_bool VAR_18,
        const zend_bool VAR_19,
        const char * const VAR_20,
        const zend_uchar * const VAR_21,
        const size_t VAR_22,
        char ** VAR_23,
        size_t * const VAR_24,
        zend_uchar ** VAR_25,
        size_t * const VAR_26
        )
{
 enum_func_status VAR_27 = VAR_4;
 const MYSQLND_CHARSET * VAR_28 = VAR_11->charset;
 MYSQLND_PACKET_CHG_USER_RESPONSE VAR_29;

 FUNC_1("mysqlnd_auth_change_user");

 VAR_11->payload_decoder_factory->m.init_change_user_response_packet(&VAR_29);

 if (VAR_19 != VAR_7) {
  MYSQLND_PACKET_CHANGE_AUTH_RESPONSE VAR_30;

  VAR_11->payload_decoder_factory->m.init_change_auth_response_packet(&VAR_30);

  VAR_30.auth_data = VAR_21;
  VAR_30.auth_data_len = VAR_22;

  if (!FUNC_7(VAR_11, &VAR_30)) {
   FUNC_9(&VAR_11->state, VAR_1);
   FUNC_8(VAR_11->error_info, VAR_2, VAR_8, VAR_10);
   FUNC_5(&VAR_30);
   goto end;
  }

  FUNC_5(&VAR_30);
 } else {
  MYSQLND_PACKET_AUTH VAR_31;

  VAR_11->payload_decoder_factory->m.init_auth_packet(&VAR_31);

  VAR_31.is_change_user_packet = VAR_7;
  VAR_31.user = VAR_12;
  VAR_31.db = VAR_16;
  VAR_31.db_len = VAR_17;
  VAR_31.silent = VAR_18;

  VAR_31.auth_data = VAR_21;
  VAR_31.auth_data_len = VAR_22;
  VAR_31.auth_plugin_name = VAR_20;

        if (VAR_11->server_capabilities & VAR_0) {
   VAR_31.connect_attr = VAR_11->options->connect_attr;
        }

  if (VAR_11->m->get_server_version(VAR_11) >= 50123) {
   VAR_31.charset_no = VAR_11->charset->nr;
  }

  if (!FUNC_7(VAR_11, &VAR_31)) {
   FUNC_9(&VAR_11->state, VAR_1);
   FUNC_8(VAR_11->error_info, VAR_2, VAR_8, VAR_10);
   FUNC_5(&VAR_31);
   goto end;
  }

  FUNC_5(&VAR_31);
 }

 VAR_27 = FUNC_6(VAR_11, &VAR_29);
 FUNC_0(VAR_11->error_info, VAR_29.error_info);

 if (0xFE == VAR_29.response_code) {
  VAR_27 = VAR_4;
  if (!VAR_29.new_auth_protocol) {
   FUNC_2(VAR_9);
   FUNC_8(VAR_11->error_info, VAR_3, VAR_8, VAR_9);
  } else {
   *VAR_23 = FUNC_15(VAR_29.new_auth_protocol, VAR_29.new_auth_protocol_len, VAR_5);
   *VAR_24 = VAR_29.new_auth_protocol_len;
   if (VAR_29.new_auth_protocol_data) {
    *VAR_26 = VAR_29.new_auth_protocol_data_len;
    *VAR_25 = FUNC_12(*VAR_26);
    FUNC_11(*VAR_25, VAR_29.new_auth_protocol_data, *VAR_26);
   } else {
    *VAR_25 = ((void*)0);
    *VAR_26 = 0;
   }
  }
 }

 if (VAR_11->error_info->error_no) {
  VAR_27 = VAR_4;





  if (VAR_11->m->get_server_version(VAR_11) > 50113L &&VAR_11->m->get_server_version(VAR_11) < 50118L) {
   MYSQLND_PACKET_OK VAR_32;

   VAR_11->payload_decoder_factory->m.init_ok_packet(&VAR_32);
   FUNC_6(VAR_11, &VAR_32);
   FUNC_5(&VAR_32);
   FUNC_3("Server is %u, buggy, sends two ERR messages", VAR_11->m->get_server_version(VAR_11));
  }
 }
 if (VAR_27 == VAR_6) {
  char * VAR_33 = ((void*)0);

  VAR_33 = FUNC_15(VAR_12, VAR_13, VAR_11->persistent);
  if (VAR_11->username.s) {
   FUNC_13(VAR_11->username.s, VAR_11->persistent);
  }
  VAR_11->username.s = VAR_33;

  VAR_33 = FUNC_14(VAR_14, VAR_11->persistent);
  if (VAR_11->password.s) {
   FUNC_13(VAR_11->password.s, VAR_11->persistent);
  }
  VAR_11->password.s = VAR_33;

  if (VAR_11->last_message.s) {
   FUNC_13(VAR_11->last_message.s, VAR_11->persistent);
   VAR_11->last_message.s = ((void*)0);
  }
  FUNC_10(VAR_11->upsert_status);

  if (VAR_11->m->get_server_version(VAR_11) < 50123) {
   VAR_27 = VAR_11->m->set_charset(VAR_11, VAR_28->name);
  }
 } else if (VAR_27 == VAR_4 && VAR_29.server_asked_323_auth == VAR_7) {

  FUNC_2(VAR_9);
  FUNC_8(VAR_11->error_info, VAR_3, VAR_8, VAR_9);
 }
end:
 FUNC_5(&VAR_29);
 FUNC_4(VAR_27);
}
