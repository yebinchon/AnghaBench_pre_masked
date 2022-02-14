
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_14__ {int state; int * stats; int * vio; TYPE_4__* protocol_frame_codec; int * error_info; } ;
struct TYPE_13__ {scalar_t__ auth_data_len; int auth_data; } ;
struct TYPE_11__ {scalar_t__ length; int * const buffer; } ;
struct TYPE_12__ {TYPE_3__ cmd_buffer; TYPE_2__* data; } ;
struct TYPE_9__ {size_t (* send ) (TYPE_4__*,int *,int * const,int,int *,int *) ;} ;
struct TYPE_10__ {TYPE_1__ m; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef TYPE_4__ MYSQLND_PFC ;
typedef TYPE_5__ MYSQLND_PACKET_CHANGE_AUTH_RESPONSE ;
typedef int MYSQLND_ERROR_INFO ;
typedef TYPE_6__ MYSQLND_CONN_DATA ;
typedef int MYSQLND_CONNECTION_STATE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t const) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int * const) ;
 int * FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (TYPE_4__*,int *,int * const,int,int *,int *) ;

__attribute__((used)) static size_t
FUNC_7(MYSQLND_CONN_DATA * VAR_2, void * VAR_3)
{
 MYSQLND_PACKET_CHANGE_AUTH_RESPONSE *VAR_4= (MYSQLND_PACKET_CHANGE_AUTH_RESPONSE *) VAR_3;
 MYSQLND_ERROR_INFO * VAR_5 = VAR_2->error_info;
 MYSQLND_PFC * VAR_6 = VAR_2->protocol_frame_codec;
 MYSQLND_VIO * VAR_7 = VAR_2->vio;
 MYSQLND_STATS * VAR_8 = VAR_2->stats;
 MYSQLND_CONNECTION_STATE * VAR_9 = &VAR_2->state;
 zend_uchar * const VAR_10 = VAR_6->cmd_buffer.length >= VAR_4->auth_data_len? VAR_6->cmd_buffer.buffer : FUNC_5(VAR_4->auth_data_len);
 zend_uchar * VAR_11 = VAR_10 + VAR_1;

 FUNC_0("php_mysqlnd_change_auth_response_write");

 if (VAR_4->auth_data_len) {
  FUNC_3(VAR_11, VAR_4->auth_data, VAR_4->auth_data_len);
  VAR_11+= VAR_4->auth_data_len;
 }

 {




  const size_t VAR_12 = VAR_6->data->m.send(VAR_6, VAR_7, VAR_10, VAR_11 - VAR_10 - VAR_1, VAR_8, VAR_5);
  if (VAR_10 != VAR_6->cmd_buffer.buffer) {
   FUNC_4(VAR_10);
  }
  if (!VAR_12) {
   FUNC_2(VAR_9, VAR_0);
  }
  FUNC_1(VAR_12);
 }
}
