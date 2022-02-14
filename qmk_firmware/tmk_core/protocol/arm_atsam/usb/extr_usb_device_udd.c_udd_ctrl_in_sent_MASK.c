
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ wLength; } ;
struct TYPE_4__ {scalar_t__ payload_size; scalar_t__ payload; int (* over_under_run ) () ;TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void) {
    static bool VAR_8 = 0;
    uint16_t VAR_9;

    VAR_9 = VAR_6.payload_size - VAR_3;

    if (0 == VAR_9) {

        VAR_4 += VAR_3;
        if ((VAR_6.req.wLength == VAR_4) || VAR_8) {


            VAR_5 = VAR_0;
            FUNC_1(&VAR_7, VAR_2);
            return;
        }

        if ((!VAR_6.over_under_run) || (!VAR_6.over_under_run())) {


        } else {

            VAR_3 = 0;
            VAR_9 = VAR_6.payload_size;
        }
    }


    if (VAR_9 >= VAR_1) {
        VAR_9 = VAR_1;
        VAR_8 = 0;
    } else {
        VAR_8 = 1;
    }


    FUNC_2(&VAR_7, 0, VAR_6.payload + VAR_3, VAR_9);

    VAR_3 += VAR_9;
}
