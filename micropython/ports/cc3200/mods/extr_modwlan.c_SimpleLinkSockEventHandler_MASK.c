
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_8__ {TYPE_2__ SockAsyncData; TYPE_1__ SockTxFailData; } ;
struct TYPE_9__ {int Event; TYPE_3__ socketAsyncEvent; } ;
typedef TYPE_4__ SlSockEvent_t ;
void FUNC_0(SlSockEvent_t *VAR_0) {
    if (!VAR_0) {
        return;
    }

    switch( VAR_0->Event ) {
    case 129:
        switch( VAR_0->socketAsyncEvent.SockTxFailData.status) {
        case 131:
            break;
        default:
          break;
        }
        break;
    case 130:
         switch(VAR_0->socketAsyncEvent.SockAsyncData.type) {
         case 128:
             break;
         case 132:
             break;
         case 133:
             break;
         default:
             break;
         }
        break;
    default:
      break;
    }
}
