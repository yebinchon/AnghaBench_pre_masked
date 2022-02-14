
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int process_em_data_flag; int process_cc_data_flag; int additional_data_flag; int cc_count; int em_data; TYPE_1__* cc_data; } ;
struct TYPE_6__ {int country; int provider; int user_identifier; int user_data_type_code; int directv_user_data_length; TYPE_4__ user_data; } ;
typedef TYPE_2__ cea708_t ;
typedef scalar_t__ cea708_cc_type_t ;
struct TYPE_5__ {int cc_type; int cc_data; scalar_t__ cc_valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;

void FUNC_3(cea708_t* VAR_2)
{
    int VAR_3;

    FUNC_2(VAR_1, "itu_t_t35_country_code_t %d\n", VAR_2->country);
    FUNC_2(VAR_1, "itu_t_t35_provider_code_t %d\n", VAR_2->provider);
    FUNC_2(VAR_1, "user_identifier %c%c%c%c\n",
        (VAR_2->user_identifier >> 24) & 0xFF, (VAR_2->user_identifier >> 16) & 0xFF,
        (VAR_2->user_identifier >> 8) & 0xFF, VAR_2->user_identifier & 0xFF);
    FUNC_2(VAR_1, "user_data_type_code %d\n", VAR_2->user_data_type_code);
    FUNC_2(VAR_1, "directv_user_data_length %d\n", VAR_2->directv_user_data_length);
    FUNC_2(VAR_1, "user_data.process_em_data_flag %d\n", VAR_2->user_data.process_em_data_flag);
    FUNC_2(VAR_1, "user_data.process_cc_data_flag %d\n", VAR_2->user_data.process_cc_data_flag);
    FUNC_2(VAR_1, "user_data.additional_data_flag %d\n", VAR_2->user_data.additional_data_flag);
    FUNC_2(VAR_1, "user_data.cc_count %d\n", VAR_2->user_data.cc_count);
    FUNC_2(VAR_1, "user_data.em_data %d\n", VAR_2->user_data.em_data);

    for (VAR_3 = 0; VAR_3 < (int)VAR_2->user_data.cc_count; ++VAR_3) {
        int VAR_4;
        cea708_cc_type_t VAR_5;
        uint16_t VAR_6 = FUNC_0(&VAR_2->user_data, VAR_3, &VAR_4, &VAR_5);

        if (VAR_4 && VAR_0 == VAR_5) {
            FUNC_1(VAR_6);
        } else {
            FUNC_2(VAR_1, "user_data.cc_data[%d] cc_valid: %s, cc_type: %d, cc_data: %04x\n", VAR_3, VAR_2->user_data.cc_data[VAR_3].cc_valid ? "true" : "false", VAR_2->user_data.cc_data[VAR_3].cc_type, VAR_2->user_data.cc_data[VAR_3].cc_data);
        }
    }
}
