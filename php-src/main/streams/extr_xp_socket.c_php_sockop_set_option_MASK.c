
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int ssize_t ;
struct TYPE_10__ {int returncode; int addrlen; int addr; int textaddr; } ;
struct TYPE_9__ {int flags; int buflen; int buf; int addrlen; int addr; int backlog; } ;
struct TYPE_11__ {size_t how; TYPE_2__ outputs; int want_addr; int want_textaddr; TYPE_1__ inputs; int op; } ;
typedef TYPE_3__ php_stream_xport_param ;
struct TYPE_12__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_4__ php_stream ;
struct TYPE_13__ {int socket; int is_blocked; int timeout_event; struct timeval timeout; } ;
typedef TYPE_5__ php_netstream_data_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;






 int VAR_13 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,char*,char*) ;
 int FUNC_5 (int,int *,int *,int *) ;
 int FUNC_6 (int,int *,int *,int *) ;
 int FUNC_7 (int,int,struct timeval*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 char* FUNC_10 (int,int *,int ) ;
 int FUNC_11 (int,char*,int,int) ;
 int FUNC_12 (int,int const) ;
 int FUNC_13 (TYPE_5__*,int ,int ,int,int *,int *,int *) ;
 int FUNC_14 (TYPE_5__*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_15(php_stream *VAR_15, int VAR_16, int VAR_17, void *VAR_18)
{
 int VAR_19, VAR_20;
 php_netstream_data_t *VAR_21 = (php_netstream_data_t*)VAR_15->abstract;
 php_stream_xport_param *VAR_22;

 if (!VAR_21) {
  return VAR_8;
 }

 switch(VAR_16) {
  case 140:
   {
    struct timeval VAR_23;
    char VAR_24;
    int VAR_25 = 1;

    if (VAR_17 == -1) {
     if (VAR_21->timeout.tv_sec == -1) {
      VAR_23.tv_sec = FUNC_0(VAR_14);
      VAR_23.tv_usec = 0;
     } else {
      VAR_23 = VAR_21->timeout;
     }
    } else {
     VAR_23.tv_sec = VAR_17;
     VAR_23.tv_usec = 0;
    }

    if (VAR_21->socket == -1) {
     VAR_25 = 0;
    } else if (FUNC_7(VAR_21->socket, VAR_6|VAR_10, &VAR_23) > 0) {



     ssize_t VAR_26;

     int VAR_27;

     VAR_26 = FUNC_11(VAR_21->socket, &VAR_24, sizeof(VAR_24), VAR_5);
     VAR_27 = FUNC_9();
     if (0 == VAR_26 ||
      (0 > VAR_26 && VAR_27 != VAR_2 && VAR_27 != VAR_0 && VAR_27 != VAR_1)) {
      VAR_25 = 0;
     }
    }
    return VAR_25 ? VAR_9 : VAR_7;
   }

  case 141:
   VAR_19 = VAR_21->is_blocked;
   if (VAR_13 == FUNC_8(VAR_21->socket, VAR_17)) {
    VAR_21->is_blocked = VAR_17;
    return VAR_19;
   }
   return VAR_7;

  case 138:
   VAR_21->timeout = *(struct timeval*)VAR_18;
   VAR_21->timeout_event = 0;
   return VAR_9;

  case 139:
   FUNC_1((zval *)VAR_18, "timed_out", VAR_21->timeout_event);
   FUNC_1((zval *)VAR_18, "blocked", VAR_21->is_blocked);
   FUNC_1((zval *)VAR_18, "eof", VAR_15->eof);
   return VAR_9;

  case 137:
   VAR_22 = (php_stream_xport_param *)VAR_18;

   switch (VAR_22->op) {
    case 131:
     VAR_22->outputs.returncode = (FUNC_3(VAR_21->socket, VAR_22->inputs.backlog) == 0) ? 0: -1;
     return VAR_9;

    case 133:
     VAR_22->outputs.returncode = FUNC_6(VAR_21->socket,
       VAR_22->want_textaddr ? &VAR_22->outputs.textaddr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addrlen : ((void*)0)
       );
     return VAR_9;

    case 132:
     VAR_22->outputs.returncode = FUNC_5(VAR_21->socket,
       VAR_22->want_textaddr ? &VAR_22->outputs.textaddr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addrlen : ((void*)0)
       );
     return VAR_9;

    case 129:
     VAR_20 = 0;
     if ((VAR_22->inputs.flags & VAR_11) == VAR_11) {
      VAR_20 |= VAR_4;
     }
     VAR_22->outputs.returncode = FUNC_14(VAR_21,
       VAR_22->inputs.buf, VAR_22->inputs.buflen,
       VAR_20,
       VAR_22->inputs.addr,
       VAR_22->inputs.addrlen);
     if (VAR_22->outputs.returncode == -1) {
      char *VAR_28 = FUNC_10(FUNC_9(), ((void*)0), 0);
      FUNC_4(((void*)0), VAR_3,
          "%s\n", VAR_28);
      FUNC_2(VAR_28);
     }
     return VAR_9;

    case 130:
     VAR_20 = 0;
     if ((VAR_22->inputs.flags & VAR_11) == VAR_11) {
      VAR_20 |= VAR_4;
     }
     if ((VAR_22->inputs.flags & VAR_12) == VAR_12) {
      VAR_20 |= VAR_5;
     }
     VAR_22->outputs.returncode = FUNC_13(VAR_21,
       VAR_22->inputs.buf, VAR_22->inputs.buflen,
       VAR_20,
       VAR_22->want_textaddr ? &VAR_22->outputs.textaddr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addr : ((void*)0),
       VAR_22->want_addr ? &VAR_22->outputs.addrlen : ((void*)0)
       );
     return VAR_9;
    default:
     return VAR_8;
   }

  default:
   return VAR_8;
 }
}
