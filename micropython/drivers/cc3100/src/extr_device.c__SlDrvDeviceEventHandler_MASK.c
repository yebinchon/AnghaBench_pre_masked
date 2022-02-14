
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* _u32 ;
struct TYPE_15__ {int Opcode; } ;
struct TYPE_16__ {TYPE_4__ GenHeader; } ;
typedef TYPE_5__ _SlResponseHeader_t ;
struct TYPE_17__ {int status; } ;
typedef TYPE_6__ _BasicResponse_t ;
struct TYPE_13__ {int status; int sender; } ;
struct TYPE_12__ {void* AbortData; void* AbortType; } ;
struct TYPE_14__ {TYPE_2__ deviceEvent; TYPE_1__ deviceReport; } ;
struct TYPE_18__ {TYPE_3__ EventData; int Event; } ;
typedef int SlErrorSender_e ;
typedef TYPE_7__ SlDeviceEvent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;




 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;

void FUNC_5(void* VAR_3)
{
    _SlResponseHeader_t *VAR_4 = (_SlResponseHeader_t *)VAR_3;

    switch(VAR_4->GenHeader.Opcode)
    {
    case 129:
        FUNC_3(VAR_4);
        break;
    case 128:
        FUNC_4(VAR_4);
        break;


  case 131:
   {







   }
        break;

    case 130:
        break;
    default:
        FUNC_0(VAR_0, "ASSERT: _SlDrvDeviceEventHandler : invalid opcode = 0x%x = %1", VAR_4->GenHeader.Opcode, VAR_4->GenHeader.Opcode);
    }
}
