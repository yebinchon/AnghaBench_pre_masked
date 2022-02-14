
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int libcaption_stauts_t ;
typedef int eia608_control_t ;
struct TYPE_8__ {int rup; int col; } ;
struct TYPE_9__ {TYPE_1__ state; int back; int * write; int front; } ;
typedef TYPE_2__ caption_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int*) ;





libcaption_stauts_t FUNC_6(caption_frame_t* VAR_2, uint16_t VAR_3)
{
    int VAR_4;
    eia608_control_t VAR_5 = FUNC_5(VAR_3, &VAR_4);

    switch (VAR_5) {

    case 137:
        VAR_2->state.rup = 0;
        VAR_2->write = &VAR_2->front;
        return VAR_0;

    case 140:
        FUNC_1(&VAR_2->front);
        return VAR_1;


    case 136:
        VAR_2->state.rup = 1;
        VAR_2->write = &VAR_2->front;
        return VAR_0;

    case 135:
        VAR_2->state.rup = 2;
        VAR_2->write = &VAR_2->front;
        return VAR_0;

    case 134:
        VAR_2->state.rup = 3;
        VAR_2->write = &VAR_2->front;
        return VAR_0;

    case 143:
        return FUNC_2(VAR_2);


    case 144:
        return FUNC_0(VAR_2);
    case 142:
        return FUNC_3(VAR_2);


    case 138:
        VAR_2->state.rup = 0;
        VAR_2->write = &VAR_2->back;
        return VAR_0;

    case 139:
        FUNC_1(&VAR_2->back);
        return VAR_0;

    case 141:
        return FUNC_4(VAR_2);


    case 131:
    case 130:
    case 129:
    case 128:
        VAR_2->state.col += (VAR_5 - 131);
        return VAR_0;


    default:
    case 146:
    case 145:
    case 133:
    case 132:
        return VAR_0;
    }
}
