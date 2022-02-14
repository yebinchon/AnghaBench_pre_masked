
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int timestamp; } ;
typedef TYPE_1__ sei_t ;
typedef int libcaption_stauts_t ;
typedef scalar_t__ eia608_style_t ;
typedef int cea708_t ;
struct TYPE_9__ {int timestamp; } ;
typedef TYPE_2__ caption_frame_t ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* FUNC_0 (TYPE_2__*,int,int,scalar_t__*,int*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int ,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int,int,int ,int ) ;
 scalar_t__ FUNC_11 (int,int ,scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_12 (int,int ) ;
 int FUNC_13 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int ) ;

libcaption_stauts_t FUNC_15(sei_t* VAR_9, caption_frame_t* VAR_10)
{
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;
    cea708_t VAR_15;
    const char* VAR_16;
    uint16_t VAR_17;
    eia608_style_t VAR_18, VAR_19;

    FUNC_14(VAR_9, VAR_10->timestamp);
    FUNC_2(&VAR_15, VAR_10->timestamp);
    FUNC_1(&VAR_15, 1, VAR_5, FUNC_3(VAR_6, VAR_0));
    FUNC_1(&VAR_15, 1, VAR_5, FUNC_3(VAR_7, VAR_0));

    for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
        VAR_14 = 0, VAR_19 = VAR_8;

        for (VAR_12 = 0; VAR_12 < VAR_3 && 0 == *FUNC_0(VAR_10, VAR_11, VAR_12, &VAR_18, &VAR_13); ++VAR_12) {
        }


        if (VAR_3 == VAR_12) {
            continue;
        }


        if (0 < VAR_12 || (0 == VAR_13 && VAR_8 == VAR_18)) {
            int VAR_20 = VAR_12 % 4;
            FUNC_13(VAR_9, &VAR_15, FUNC_10(VAR_11, VAR_12, VAR_0, 0));
            if (VAR_20) {
                FUNC_13(VAR_9, &VAR_15, FUNC_12(VAR_20, VAR_0));
            }
        } else {
            FUNC_13(VAR_9, &VAR_15, FUNC_11(VAR_11, VAR_0, VAR_18, VAR_13));
            VAR_14 = VAR_13, VAR_19 = VAR_18;
        }


        for (VAR_17 = 0, VAR_16 = FUNC_0(VAR_10, VAR_11, VAR_12, 0, 0);
             (*VAR_16) && VAR_12 < VAR_3; ++VAR_12, VAR_16 = FUNC_0(VAR_10, VAR_11, VAR_12, &VAR_18, &VAR_13)) {
            uint16_t VAR_21 = FUNC_5(VAR_16, VAR_0);

            if (VAR_13 != VAR_14 || VAR_18 != VAR_19) {
                FUNC_13(VAR_9, &VAR_15, FUNC_9(VAR_0, VAR_18, VAR_13));
                VAR_14 = VAR_13, VAR_19 = VAR_18;
            }

            if (!VAR_21) {

            } else if (FUNC_6(VAR_17)) {
                if (FUNC_6(VAR_21)) {

                    FUNC_13(VAR_9, &VAR_15, FUNC_4(VAR_17, VAR_21));
                } else if (FUNC_8(VAR_21)) {

                    FUNC_13(VAR_9, &VAR_15, FUNC_4(VAR_17, FUNC_5(VAR_1, VAR_0)));
                    FUNC_13(VAR_9, &VAR_15, VAR_21);
                } else {

                    FUNC_13(VAR_9, &VAR_15, VAR_17);
                    FUNC_13(VAR_9, &VAR_15, VAR_21);
                }

                VAR_17 = 0;
            } else if (FUNC_8(VAR_21)) {


                FUNC_13(VAR_9, &VAR_15, FUNC_5(VAR_1, VAR_0));
                FUNC_13(VAR_9, &VAR_15, VAR_21);
            } else if (FUNC_6(VAR_21)) {
                VAR_17 = VAR_21;
            } else {
                FUNC_13(VAR_9, &VAR_15, VAR_21);
            }

            if (FUNC_7(VAR_21)) {



                FUNC_13(VAR_9, &VAR_15, FUNC_3(VAR_7, VAR_0));
            }
        }

        if (0 != VAR_17) {
            FUNC_13(VAR_9, &VAR_15, VAR_17);
        }
    }

    FUNC_13(VAR_9, &VAR_15, 0);
    VAR_9->timestamp = VAR_10->timestamp;

    return VAR_2;
}
