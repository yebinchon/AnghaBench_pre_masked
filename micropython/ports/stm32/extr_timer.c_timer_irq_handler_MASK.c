
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint ;
struct TYPE_11__ {TYPE_1__* Instance; } ;
struct TYPE_9__ {TYPE_5__ tim; TYPE_3__* channel; int callback; } ;
typedef TYPE_2__ pyb_timer_obj_t ;
struct TYPE_10__ {struct TYPE_10__* next; int channel; int callback; } ;
typedef TYPE_3__ pyb_timer_channel_obj_t ;
struct TYPE_8__ {int DIER; } ;


 int VAR_0 ;
 TYPE_2__** FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

void FUNC_6(uint VAR_3) {
    if (VAR_3 - 1 < VAR_1) {

        pyb_timer_obj_t *VAR_4 = FUNC_0(VAR_2)[VAR_3 - 1];

        if (VAR_4 == ((void*)0)) {



            return;
        }


        FUNC_5(VAR_4, 0, VAR_4->callback);
        uint32_t VAR_5 = FUNC_1(0);


        pyb_timer_channel_obj_t *VAR_6 = VAR_4->channel;
        while (VAR_6 != ((void*)0)) {
            FUNC_5(VAR_4, VAR_6->channel, VAR_6->callback);
            VAR_5 |= FUNC_1(VAR_6->channel);
            VAR_6 = VAR_6->next;
        }



        uint32_t VAR_7 = VAR_4->tim.Instance->DIER & 0xff & ~VAR_5;
        if (VAR_7 != 0) {
            FUNC_3(&VAR_4->tim, VAR_7);
            FUNC_2(&VAR_4->tim, VAR_7);
            FUNC_4(VAR_0, "unhandled interrupt SR=0x%02x (now disabled)\n", (unsigned int)VAR_7);
        }
    }
}
