
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int cc_count; TYPE_1__* cc_data; } ;
struct TYPE_7__ {TYPE_2__ user_data; } ;
typedef TYPE_3__ cea708_t ;
typedef int cea708_cc_type_t ;
struct TYPE_5__ {int marker_bits; int cc_valid; int cc_data; int cc_type; } ;



int FUNC_0(cea708_t* VAR_0, int VAR_1, cea708_cc_type_t VAR_2, uint16_t VAR_3)
{
    if (31 <= VAR_0->user_data.cc_count) {
        return 0;
    }

    VAR_0->user_data.cc_data[VAR_0->user_data.cc_count].marker_bits = 0x1F;
    VAR_0->user_data.cc_data[VAR_0->user_data.cc_count].cc_valid = VAR_1;
    VAR_0->user_data.cc_data[VAR_0->user_data.cc_count].cc_type = VAR_2;
    VAR_0->user_data.cc_data[VAR_0->user_data.cc_count].cc_data = VAR_3;
    ++VAR_0->user_data.cc_count;
    return 1;
}
