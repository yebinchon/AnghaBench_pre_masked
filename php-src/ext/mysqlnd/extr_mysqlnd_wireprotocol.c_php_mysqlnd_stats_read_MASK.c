
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_uchar ;
typedef int enum_func_status ;
struct TYPE_14__ {int size; } ;
struct TYPE_13__ {int state; int * stats; int * vio; TYPE_3__* protocol_frame_codec; int * error_info; } ;
struct TYPE_10__ {char* s; size_t l; } ;
struct TYPE_12__ {TYPE_7__ header; TYPE_2__ message; } ;
struct TYPE_9__ {size_t length; scalar_t__ buffer; } ;
struct TYPE_11__ {TYPE_1__ cmd_buffer; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef TYPE_3__ MYSQLND_PFC ;
typedef TYPE_4__ MYSQLND_PACKET_STATS ;
typedef int MYSQLND_ERROR_INFO ;
typedef TYPE_5__ MYSQLND_CONN_DATA ;
typedef int MYSQLND_CONNECTION_STATE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int *,int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_3__*,int *,int *,int *,int *,int *,size_t const,char*,int ) ;

__attribute__((used)) static enum_func_status
FUNC_5(MYSQLND_CONN_DATA * VAR_3, void * VAR_4)
{
 MYSQLND_PACKET_STATS *VAR_5= (MYSQLND_PACKET_STATS *) VAR_4;
 MYSQLND_ERROR_INFO * VAR_6 = VAR_3->error_info;
 MYSQLND_PFC * VAR_7 = VAR_3->protocol_frame_codec;
 MYSQLND_VIO * VAR_8 = VAR_3->vio;
 MYSQLND_STATS * VAR_9 = VAR_3->stats;
 MYSQLND_CONNECTION_STATE * VAR_10 = &VAR_3->state;
 const size_t VAR_11 = VAR_7->cmd_buffer.length;
 zend_uchar *VAR_12 = (zend_uchar *) VAR_7->cmd_buffer.buffer;

 FUNC_0("php_mysqlnd_stats_read");

 if (VAR_0 == FUNC_4(&(VAR_5->header), VAR_7, VAR_8, VAR_9, VAR_6, VAR_10, VAR_12, VAR_11, "statistics", VAR_2)) {
  FUNC_1(VAR_0);
 }

 VAR_5->message.s = FUNC_3(VAR_5->header.size + 1);
 FUNC_2(VAR_5->message.s, VAR_12, VAR_5->header.size);
 VAR_5->message.s[VAR_5->header.size] = '\0';
 VAR_5->message.l = VAR_5->header.size;

 FUNC_1(VAR_1);
}
