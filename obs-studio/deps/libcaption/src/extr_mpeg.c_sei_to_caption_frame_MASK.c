
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int timestamp; } ;
typedef TYPE_1__ sei_t ;
typedef int sei_message_t ;
typedef scalar_t__ libcaption_stauts_t ;
typedef int cea708_t ;
struct TYPE_8__ {int timestamp; } ;
typedef TYPE_2__ caption_frame_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;

libcaption_stauts_t FUNC_9(sei_t* VAR_3, caption_frame_t* VAR_4)
{
    cea708_t VAR_5;
    sei_message_t* VAR_6;
    libcaption_stauts_t VAR_7 = VAR_0;

    FUNC_0(&VAR_5, VAR_4->timestamp);

    for (VAR_6 = FUNC_5(VAR_3); VAR_6; VAR_6 = FUNC_6(VAR_6)) {
        if (VAR_2 == FUNC_8(VAR_6)) {
            FUNC_1(FUNC_4(VAR_6), FUNC_7(VAR_6), &VAR_5);
            VAR_7 = FUNC_3(VAR_7, FUNC_2(VAR_4, &VAR_5));
        }
    }

    if (VAR_1 == VAR_7) {
        VAR_4->timestamp = VAR_3->timestamp;
    }

    return VAR_7;
}
