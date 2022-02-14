
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int em_data; int cc_count; TYPE_1__* cc_data; scalar_t__ additional_data_flag; scalar_t__ process_cc_data_flag; scalar_t__ process_em_data_flag; } ;
struct TYPE_7__ {int country; int provider; int user_identifier; int user_data_type_code; int directv_user_data_length; TYPE_2__ user_data; } ;
typedef TYPE_3__ cea708_t ;
struct TYPE_5__ {int marker_bits; int cc_valid; int cc_type; int cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(cea708_t* VAR_2, uint8_t* VAR_3, size_t VAR_4)
{
    int VAR_5;
    size_t VAR_6 = 0;
    VAR_3[0] = VAR_2->country;
    VAR_3[1] = VAR_2->provider >> 8;
    VAR_3[2] = VAR_2->provider >> 0;
    VAR_6 += 3;
    VAR_3 += 3;
    VAR_4 -= 3;

    if (VAR_0 == VAR_2->provider) {

        VAR_3[0] = VAR_2->user_identifier >> 24;
        VAR_3[1] = VAR_2->user_identifier >> 16;
        VAR_3[2] = VAR_2->user_identifier >> 8;
        VAR_3[3] = VAR_2->user_identifier >> 0;
        VAR_6 += 4;
        VAR_3 += 4;
        VAR_4 -= 4;
    }

    if (VAR_0 == VAR_2->provider || VAR_1 == VAR_2->provider) {
        VAR_3[0] = VAR_2->user_data_type_code;
        VAR_6 += 1;
        VAR_3 += 1;
        VAR_4 -= 1;
    }

    if (VAR_1 == VAR_2->provider) {
        VAR_3[0] = VAR_2->directv_user_data_length;
        VAR_6 += 1;
        VAR_3 += 1;
        VAR_4 -= 1;
    }

    VAR_3[1] = VAR_2->user_data.em_data;
    VAR_3[0] = (VAR_2->user_data.process_em_data_flag ? 0x80 : 0x00)
        | (VAR_2->user_data.process_cc_data_flag ? 0x40 : 0x00)
        | (VAR_2->user_data.additional_data_flag ? 0x20 : 0x00)
        | (VAR_2->user_data.cc_count & 0x1F);

    VAR_6 += 2;
    VAR_3 += 2;
    VAR_4 -= 2;

    for (VAR_5 = 0; VAR_5 < (int)VAR_2->user_data.cc_count; ++VAR_5) {
        VAR_3[0] = (VAR_2->user_data.cc_data[VAR_5].marker_bits << 3) | (VAR_2->user_data.cc_data[VAR_5].cc_valid << 2) | VAR_2->user_data.cc_data[VAR_5].cc_type;
        VAR_3[1] = VAR_2->user_data.cc_data[VAR_5].cc_data >> 8;
        VAR_3[2] = VAR_2->user_data.cc_data[VAR_5].cc_data >> 0;
        VAR_6 += 3;
        VAR_3 += 3;
        VAR_4 -= 3;
    }

    VAR_3[0] = 0xFF;
    return (int)(VAR_6 + 1);
}
