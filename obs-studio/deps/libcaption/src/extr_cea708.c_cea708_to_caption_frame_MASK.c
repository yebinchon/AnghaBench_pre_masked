
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int libcaption_stauts_t ;
struct TYPE_3__ {scalar_t__ user_identifier; int timestamp; int user_data; } ;
typedef TYPE_1__ cea708_t ;
typedef scalar_t__ cea708_cc_type_t ;
typedef int caption_frame_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int*,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;

libcaption_stauts_t FUNC_4(caption_frame_t* VAR_3, cea708_t* VAR_4)
{
    int VAR_5, VAR_6 = FUNC_1(&VAR_4->user_data);
    libcaption_stauts_t VAR_7 = VAR_1;

    if (VAR_0 == VAR_4->user_identifier) {
        for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
            int VAR_8;
            cea708_cc_type_t VAR_9;
            uint16_t VAR_10 = FUNC_2(&VAR_4->user_data, VAR_5, &VAR_8, &VAR_9);

            if (VAR_8 && VAR_2 == VAR_9) {
                VAR_7 = FUNC_3(VAR_7, FUNC_0(VAR_3, VAR_10, VAR_4->timestamp));
            }
        }
    }

    return VAR_7;
}
