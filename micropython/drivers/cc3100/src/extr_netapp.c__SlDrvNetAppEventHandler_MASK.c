
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_20__ {int token_value_len; int token_name_len; int post_action_len; } ;
typedef TYPE_10__ sl_NetAppHttpServerPostToken_t ;
struct TYPE_21__ {int token_name_len; } ;
typedef TYPE_11__ sl_NetAppHttpServerGetToken_t ;
struct TYPE_22__ {int * token_value; int name_len; int value_len; int * token_name; } ;
typedef TYPE_12__ slHttpServerData_t ;
typedef int _u8 ;
struct TYPE_34__ {int Opcode; } ;
struct TYPE_23__ {TYPE_9__ GenHeader; } ;
typedef TYPE_13__ _SlResponseHeader_t ;
struct TYPE_31__ {int * data; int len; } ;
struct TYPE_30__ {int * data; int len; } ;
struct TYPE_29__ {int * data; int len; } ;
struct TYPE_32__ {TYPE_6__ token_value; TYPE_5__ token_name; TYPE_4__ action; } ;
struct TYPE_26__ {int len; int * data; } ;
struct TYPE_33__ {TYPE_7__ httpPostData; TYPE_1__ httpTokenName; } ;
struct TYPE_27__ {int * data; int len; } ;
struct TYPE_28__ {TYPE_2__ token_value; } ;
struct TYPE_25__ {TYPE_8__ EventData; int Event; } ;
struct TYPE_24__ {int Response; TYPE_3__ ResponseData; } ;
typedef TYPE_14__ SlHttpServerResponse_t ;
typedef TYPE_15__ SlHttpServerEvent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (TYPE_15__*,TYPE_14__*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_12__*) ;

void FUNC_8(void* VAR_7)
{
    _SlResponseHeader_t *VAR_8 = (_SlResponseHeader_t *)VAR_7;





    switch(VAR_8->GenHeader.Opcode)
    {
        case 134:
        case 133:
            FUNC_4(VAR_7);
            break;

        case 130:
        case 129:
            FUNC_5(VAR_7);
            break;
        case 128:
            FUNC_6(VAR_7);
            break;
        default:
            FUNC_0(VAR_2, "ASSERT: _SlDrvNetAppEventHandler : invalid opcode = 0x%x = %1", VAR_8->GenHeader.Opcode, VAR_8->GenHeader.Opcode);
            FUNC_1(0);
    }
}
