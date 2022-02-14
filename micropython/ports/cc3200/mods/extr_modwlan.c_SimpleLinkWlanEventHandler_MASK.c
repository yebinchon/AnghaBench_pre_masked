
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_4__ {int Event; } ;
typedef TYPE_1__ SlWlanEvent_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__ VAR_2 ;

void FUNC_4(SlWlanEvent_t *VAR_3) {
    if (!VAR_3) {
        return;
    }

    switch(VAR_3->Event)
    {
        case 133:
        {





            FUNC_1(VAR_2.status, VAR_0);





        }
            break;
        case 132:
            FUNC_0(VAR_2.status, VAR_0);
            FUNC_0(VAR_2.status, VAR_1);




            break;
        case 129:
        {





            FUNC_1(VAR_2.status, VAR_0);





        }
            break;
        case 128:
            FUNC_0(VAR_2.status, VAR_0);




            break;
        case 131:

            break;
        case 130:

            break;
        case 134:

            break;
        default:
            break;
    }
}
