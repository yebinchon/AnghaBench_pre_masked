
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int stream_shutdown_t ;
typedef int ssize_t ;
struct TYPE_14__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_3__ php_stream ;
struct TYPE_13__ {int is_blocked; int timeout_event; int socket; struct timeval timeout; } ;
struct TYPE_15__ {TYPE_2__ s; int ssl_handle; TYPE_1__* reneg; scalar_t__ ssl_active; } ;
typedef TYPE_4__ php_openssl_netstream_data_t ;
struct TYPE_16__ {size_t (* read ) (TYPE_3__*,char*,size_t) ;size_t (* write ) (TYPE_3__*,char*,size_t) ;} ;
struct TYPE_12__ {scalar_t__ should_close; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct timeval*,int *) ;
 scalar_t__ FUNC_7 (struct timeval,struct timeval) ;
 int FUNC_8 (TYPE_3__*,int,int ) ;
 struct timeval FUNC_9 (struct timeval,struct timeval) ;
 int FUNC_10 (int ,int,struct timeval*) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int,int ) ;
 TYPE_8__ VAR_11 ;
 int FUNC_13 (TYPE_3__*,int ) ;
 size_t FUNC_14 (TYPE_3__*,char*,size_t) ;
 size_t FUNC_15 (TYPE_3__*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_16(int VAR_12, php_stream *VAR_13, char *VAR_14, size_t VAR_15)
{
 php_openssl_netstream_data_t *VAR_16 = (php_openssl_netstream_data_t*)VAR_13->abstract;


 if (VAR_16->ssl_active) {
  int VAR_17 = 1;
  struct timeval VAR_18;
  struct timeval *VAR_19 = ((void*)0);
  int VAR_20 = VAR_16->s.is_blocked;
  int VAR_21 = 0;
  int VAR_22 = 0;


  if (VAR_15 > VAR_1) {
   VAR_15 = VAR_1;
  }


  if (VAR_20) {
   VAR_19 = &VAR_16->s.timeout;
  }

  if (VAR_19 && FUNC_11(VAR_16->s.socket, 0) == VAR_9) {
   VAR_16->s.is_blocked = 0;
  }

  if (!VAR_16->s.is_blocked && VAR_19 && (VAR_19->tv_sec || VAR_19->tv_usec)) {
   VAR_21 = 1;

   FUNC_6(&VAR_18, ((void*)0));
  }


  do {
   struct timeval VAR_23, VAR_24, VAR_25;


   if (VAR_21) {
    FUNC_6(&VAR_23, ((void*)0));


    VAR_24 = FUNC_9(VAR_23, VAR_18);


    if (FUNC_7(VAR_24, *VAR_19) > 0 ) {

     if (VAR_20) {
      FUNC_11(VAR_16->s.socket, 1);
      VAR_16->s.is_blocked = 1;
     }
     VAR_16->s.timeout_event = 1;
     return -1;
    }
   }


   FUNC_0();
   if (VAR_12) {
    VAR_22 = FUNC_4(VAR_16->ssl_handle, VAR_14, (int)VAR_15);

    if (VAR_16->reneg && VAR_16->reneg->should_close) {

     FUNC_13(VAR_13, (stream_shutdown_t)VAR_5);
     VAR_22 = 0;
     VAR_13->eof = 1;
      break;
    }
   } else {
    VAR_22 = FUNC_5(VAR_16->ssl_handle, VAR_14, (int)VAR_15);
   }


   if (VAR_21) {
    VAR_25 = FUNC_9( *VAR_19, VAR_24 );
   }


   if (VAR_22 <= 0) {


    int VAR_26 = FUNC_2(VAR_16->ssl_handle, VAR_22 );
    VAR_17 = FUNC_8(VAR_13, VAR_22, 0);


    if (VAR_10 == VAR_0 && VAR_26 == VAR_7 && VAR_12) {
     VAR_17 = 1;
    }
    if (VAR_10 == VAR_0 && VAR_26 == VAR_8 && VAR_12 == 0) {
     VAR_17 = 1;
    }


    if (VAR_12) {
     VAR_13->eof = (VAR_17 == 0 && VAR_10 != VAR_0 && !FUNC_3(VAR_16->ssl_handle));
    }


    if (VAR_20 == 0) {
     break;
    }




    if (VAR_17) {
     if (VAR_12) {
      FUNC_10(VAR_16->s.socket, (VAR_26 == VAR_8) ?
       (VAR_3|VAR_4) : (VAR_2|VAR_4), VAR_21 ? &VAR_25 : ((void*)0));
     } else {
      FUNC_10(VAR_16->s.socket, (VAR_26 == VAR_7) ?
       (VAR_2|VAR_4) : (VAR_3|VAR_4), VAR_21 ? &VAR_25 : ((void*)0));
     }
    }
   } else {

    int VAR_27 = FUNC_2(VAR_16->ssl_handle, VAR_22);


    if (VAR_27 == VAR_6) {
     break;
    }


    if (VAR_20) {
     if (VAR_12) {
      FUNC_10(VAR_16->s.socket, (VAR_27 == VAR_8) ?
       (VAR_3|VAR_4) : (VAR_2|VAR_4), VAR_21 ? &VAR_25 : ((void*)0));
     } else {
      FUNC_10(VAR_16->s.socket, (VAR_27 == VAR_7) ?
       (VAR_2|VAR_4) : (VAR_3|VAR_4), VAR_21 ? &VAR_25 : ((void*)0));
     }
    }
   }


  } while (VAR_17);


  if (VAR_22 > 0) {
   FUNC_12(FUNC_1(VAR_13), VAR_22, 0);
  }


  if (VAR_20 && FUNC_11(VAR_16->s.socket, 1) == VAR_9) {
   VAR_16->s.is_blocked = 1;
  }

  return 0 > VAR_22 ? 0 : VAR_22;
 } else {
  size_t VAR_28 = 0;


  if (VAR_12) {
   VAR_28 = VAR_11.read(VAR_13, VAR_14, VAR_15);
  } else {
   VAR_28 = VAR_11.write(VAR_13, VAR_14, VAR_15);
  }

  return VAR_28;
 }
}
