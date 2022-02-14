
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ libcaption_stauts_t ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_10__ {scalar_t__ cc_data; } ;
struct TYPE_11__ {scalar_t__ status; double timestamp; int write; TYPE_3__ xds; TYPE_1__ state; } ;
typedef TYPE_2__ caption_frame_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 void* FUNC_14 (TYPE_3__*,scalar_t__) ;

libcaption_stauts_t FUNC_15(caption_frame_t* VAR_3, uint16_t VAR_4, double VAR_5)
{
    if (!FUNC_13(VAR_4)) {
        VAR_3->status = VAR_0;
        return VAR_3->status;
    }

    if (FUNC_8(VAR_4)) {
        VAR_3->status = VAR_1;
        return VAR_3->status;
    }

    if (0 > VAR_3->timestamp || VAR_2 == VAR_3->status) {
        VAR_3->timestamp = VAR_5;
    }


    if ((FUNC_10(VAR_4) || FUNC_6(VAR_4)) && VAR_4 == VAR_3->state.cc_data) {
        VAR_3->status = VAR_1;
        return VAR_3->status;
    }

    VAR_3->state.cc_data = VAR_4;

    if (VAR_3->xds.state) {
        VAR_3->status = FUNC_14(&VAR_3->xds, VAR_4);
    } else if (FUNC_12(VAR_4)) {
        VAR_3->status = FUNC_14(&VAR_3->xds, VAR_4);
    } else if (FUNC_6(VAR_4)) {
        VAR_3->status = FUNC_0(VAR_3, VAR_4);
    } else if (FUNC_5(VAR_4) || FUNC_10(VAR_4) || FUNC_11(VAR_4)) {


        if (!VAR_3->write) {
            VAR_3->status = VAR_1;
            return VAR_3->status;
        }

        VAR_3->status = FUNC_3(VAR_3, VAR_4);


        if (VAR_1 == VAR_3->status && FUNC_4(VAR_3)) {
            VAR_3->status = VAR_2;
        }
    } else if (FUNC_9(VAR_4)) {
        VAR_3->status = FUNC_2(VAR_3, VAR_4);
    } else if (FUNC_7(VAR_4)) {
        VAR_3->status = FUNC_1(VAR_3, VAR_4);
    }

    return VAR_3->status;
}
