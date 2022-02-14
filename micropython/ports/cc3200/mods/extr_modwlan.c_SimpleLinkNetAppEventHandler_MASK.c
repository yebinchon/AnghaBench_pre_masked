
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ip; int status; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_6__ {TYPE_3__ ipAcquiredV4; } ;
struct TYPE_7__ {int Event; TYPE_1__ EventData; } ;
typedef TYPE_2__ SlNetAppEvent_t ;
typedef TYPE_3__ SlIpV4AcquiredAsync_t ;


 int FUNC_0 (int ,int ) ;




 int VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_1(SlNetAppEvent_t *VAR_2) {
    if(!VAR_2) {
        return;
    }

    switch(VAR_2->Event)
    {
        case 131:
        {
            SlIpV4AcquiredAsync_t *VAR_3 = ((void*)0);

            FUNC_0(VAR_1.status, VAR_0);


            VAR_3 = &VAR_2->EventData.ipAcquiredV4;


            VAR_1.ip = VAR_3->ip;
        }
            break;
        case 130:
            break;
        case 129:
            break;
        case 128:
            break;
        default:
            break;
    }
}
