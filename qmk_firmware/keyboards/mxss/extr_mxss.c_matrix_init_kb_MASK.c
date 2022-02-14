
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {scalar_t__ mode; int val; int raw; } ;
typedef TYPE_1__ fled_config ;
struct TYPE_4__ {scalar_t__ hue; int sat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 () ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int,int *) ;
 int FUNC_7 (int ,int ,int ,int *) ;

void FUNC_8(void) {

    if (FUNC_1()) {
        fled_config VAR_13;
        VAR_13.raw = FUNC_2(VAR_0);
        VAR_7 = VAR_13.mode;
        VAR_8 = VAR_13.val * VAR_5;

    } else {
        VAR_7 = VAR_4;
        VAR_8 = 10 * VAR_5;
        FUNC_3();
    }


    FUNC_7(0, 0, 0, &VAR_9[0]);
    FUNC_7(0, 0, 0, &VAR_9[1]);


    if (VAR_7 == VAR_3) {

        if (FUNC_4() & (1<<VAR_6))
            FUNC_6(VAR_1, VAR_2, VAR_8, &VAR_9[0]);



        uint8_t VAR_14 = FUNC_0(VAR_11);
        if (VAR_14 < VAR_12 && !(VAR_10[VAR_14].hue == 0 && VAR_10[VAR_14].hue == 0))
            FUNC_6(VAR_10[VAR_14].hue, VAR_10[VAR_14].sat, VAR_8, &VAR_9[1]);
    }

 FUNC_5();
}
