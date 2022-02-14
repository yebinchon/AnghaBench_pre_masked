
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {scalar_t__ activate; } ;
struct TYPE_11__ {TYPE_2__ inputs; } ;
typedef TYPE_3__ php_stream_xport_crypto_param ;
typedef int php_stream ;
struct TYPE_9__ {int is_blocked; int socket; struct timeval timeout; } ;
struct TYPE_12__ {int ssl_active; int state_set; int ssl_handle; TYPE_1__ s; scalar_t__ is_client; struct timeval connect_timeout; } ;
typedef TYPE_4__ php_openssl_netstream_data_t ;
typedef int X509 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (struct timeval*,int *) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,int ,char*) ;
 scalar_t__ FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int *,TYPE_4__*,int *) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct timeval,struct timeval) ;
 int FUNC_20 (int *,TYPE_4__*) ;
 int FUNC_21 (int *,int,int) ;
 struct timeval FUNC_22 (struct timeval,struct timeval) ;
 int FUNC_23 (int ,int,struct timeval*) ;
 scalar_t__ FUNC_24 (int ,int) ;
 int * FUNC_25 (scalar_t__,char*,char*) ;
 int FUNC_26 (scalar_t__,char*,char*,int *) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(php_stream *VAR_12,
  php_openssl_netstream_data_t *VAR_13,
  php_stream_xport_crypto_param *VAR_14)
{
 int VAR_15;
 int VAR_16 = 1;
 int VAR_17 = 0;
 X509 *VAR_18;

 if (VAR_14->inputs.activate && !VAR_13->ssl_active) {
  struct timeval VAR_19, *VAR_20;
  int VAR_21 = VAR_13->s.is_blocked, VAR_22 = 0;







  if (!VAR_13->state_set) {
   if (VAR_13->is_client) {
    FUNC_8(VAR_13->ssl_handle);
   } else {
    FUNC_7(VAR_13->ssl_handle);
   }
   VAR_13->state_set = 1;
  }

  if (VAR_10 == FUNC_24(VAR_13->s.socket, 0)) {
   VAR_13->s.is_blocked = 0;


   FUNC_9(
    VAR_13->ssl_handle,
    (
     FUNC_5(VAR_13->ssl_handle) |
     VAR_9 |
     VAR_8
    )
   );
  }

  VAR_20 = VAR_13->is_client ? &VAR_13->connect_timeout : &VAR_13->s.timeout;
  VAR_22 = !VAR_13->s.is_blocked && (VAR_20->tv_sec || VAR_20->tv_usec);

  if (VAR_22) {
   FUNC_13(&VAR_19, ((void*)0));
  }

  do {
   struct timeval VAR_23, VAR_24;

   FUNC_0();
   if (VAR_13->is_client) {
    VAR_15 = FUNC_3(VAR_13->ssl_handle);
   } else {
    VAR_15 = FUNC_2(VAR_13->ssl_handle);
   }

   if (VAR_22) {
    FUNC_13(&VAR_23, ((void*)0));
    VAR_24 = FUNC_22(VAR_23, VAR_19);

    if (FUNC_19( VAR_24, *VAR_20) > 0) {
     FUNC_15(((void*)0), VAR_2, "SSL: Handshake timed out");
     return -1;
    }
   }

   if (VAR_15 <= 0) {

    VAR_16 = FUNC_21(VAR_12, VAR_15, VAR_21);
    if (VAR_16) {


     int VAR_25 = FUNC_4(VAR_13->ssl_handle, VAR_15);
     struct timeval VAR_26;

     if (VAR_22) {
      VAR_26 = FUNC_22(*VAR_20, VAR_24);
     }
     FUNC_23(VAR_13->s.socket, (VAR_25 == VAR_7) ?
      (VAR_4|VAR_6) : VAR_5, VAR_22 ? &VAR_26 : ((void*)0));
    }
   } else {
    VAR_16 = 0;
   }
  } while (VAR_16);

  if (VAR_13->s.is_blocked != VAR_21 && VAR_10 == FUNC_24(VAR_13->s.socket, VAR_21)) {
   VAR_13->s.is_blocked = VAR_21;
  }

  if (VAR_15 == 1) {
   VAR_18 = FUNC_6(VAR_13->ssl_handle);
   if (VAR_18 && FUNC_1(VAR_12)) {
    VAR_17 = FUNC_17(VAR_12, VAR_13, VAR_18);
   }

   if (VAR_3 == FUNC_16(VAR_13->ssl_handle, VAR_18, VAR_12)) {
    FUNC_10(VAR_13->ssl_handle);
    VAR_15 = -1;
   } else {
    VAR_13->ssl_active = 1;

    if (FUNC_1(VAR_12)) {
     zval *VAR_27;
     if (((void*)0) != (VAR_27 = FUNC_25(FUNC_1(VAR_12),
      "ssl", "capture_session_meta"))
     ) {
       FUNC_14(VAR_1,
       "capture_session_meta is deprecated; its information is now available via stream_get_meta_data()"
                        );
     }

     if (VAR_27 && FUNC_27(VAR_27)) {
      zval VAR_28;
      FUNC_12(&VAR_28, FUNC_18(VAR_13->ssl_handle));
      FUNC_26(FUNC_1(VAR_12), "ssl", "session_meta", &VAR_28);
      FUNC_28(&VAR_28);
     }
    }
   }
  } else if (VAR_11 == VAR_0) {
   VAR_15 = 0;
  } else {
   VAR_15 = -1;

   VAR_18 = FUNC_6(VAR_13->ssl_handle);
   if (VAR_18 && FUNC_1(VAR_12)) {
    VAR_17 = FUNC_17(VAR_12, VAR_13, VAR_18);
   }
  }

  if (VAR_15 && VAR_18 && VAR_17 == 0) {
   FUNC_11(VAR_18);
  }

  return VAR_15;

 } else if (!VAR_14->inputs.activate && VAR_13->ssl_active) {

  FUNC_10(VAR_13->ssl_handle);
  VAR_13->ssl_active = 0;
 }

 return -1;
}
