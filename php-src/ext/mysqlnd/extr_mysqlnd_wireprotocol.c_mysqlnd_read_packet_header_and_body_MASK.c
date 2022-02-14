
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_uchar ;
typedef int enum_func_status ;
typedef enum mysqlnd_packet_type { ____Placeholder_mysqlnd_packet_type } mysqlnd_packet_type ;
struct TYPE_13__ {size_t const size; } ;
struct TYPE_12__ {TYPE_2__* data; } ;
struct TYPE_10__ {scalar_t__ (* receive ) (TYPE_3__*,int *,int * const,size_t const,int *,int *) ;} ;
struct TYPE_11__ {TYPE_1__ m; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef TYPE_3__ MYSQLND_PFC ;
typedef TYPE_4__ MYSQLND_PACKET_HEADER ;
typedef int MYSQLND_ERROR_INFO ;
typedef int MYSQLND_CONNECTION_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int * const,size_t const) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *,TYPE_4__*,int *,int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,int * const,size_t const,int *,int *) ;

__attribute__((used)) static enum_func_status
FUNC_9(MYSQLND_PACKET_HEADER * VAR_9,
         MYSQLND_PFC * VAR_10,
         MYSQLND_VIO * VAR_11,
         MYSQLND_STATS * VAR_12,
         MYSQLND_ERROR_INFO * VAR_13,
         MYSQLND_CONNECTION_STATE * VAR_14,
         zend_uchar * const VAR_15, const size_t VAR_16,
         const char * const VAR_17,
         enum mysqlnd_packet_type VAR_18)
{
 FUNC_0("mysqlnd_read_packet_header_and_body");
 FUNC_2("buf=%p size=%u", VAR_15, VAR_16);
 if (VAR_2 == FUNC_7(VAR_10, VAR_11, VAR_9, VAR_12, VAR_13)) {
  FUNC_6(VAR_14, VAR_0);
  FUNC_5(VAR_13, VAR_1, VAR_5, VAR_6);
  FUNC_1("Can't read %s's header", VAR_17);
  FUNC_3(VAR_2);
 }
 if (VAR_16 < VAR_9->size) {
  FUNC_1("Packet buffer %u wasn't big enough %u, %u bytes will be unread",
     VAR_16, VAR_9->size, VAR_9->size - VAR_16);
  FUNC_3(VAR_2);
 }
 if (VAR_2 == VAR_10->data->m.receive(VAR_10, VAR_11, VAR_15, VAR_9->size, VAR_12, VAR_13)) {
  FUNC_6(VAR_14, VAR_0);
  FUNC_5(VAR_13, VAR_1, VAR_5, VAR_6);
  FUNC_1("Empty '%s' packet body", VAR_17);
  FUNC_3(VAR_2);
 }
 FUNC_4(VAR_12, VAR_7[VAR_18],
          VAR_3 + VAR_9->size,
          VAR_8[VAR_18],
          1);
 FUNC_3(VAR_4);
}
