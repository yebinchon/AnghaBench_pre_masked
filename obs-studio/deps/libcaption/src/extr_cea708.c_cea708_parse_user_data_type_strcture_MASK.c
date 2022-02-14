
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int process_em_data_flag; int process_cc_data_flag; int additional_data_flag; int cc_count; int em_data; TYPE_1__* cc_data; } ;
typedef TYPE_2__ user_data_t ;
typedef int uint8_t ;
struct TYPE_5__ {int marker_bits; int cc_valid; int cc_type; int cc_data; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(const uint8_t* VAR_0, size_t VAR_1, user_data_t* VAR_2)
{
    FUNC_0(VAR_2, 0, sizeof(user_data_t));
    VAR_2->process_em_data_flag = !!(VAR_0[0] & 0x80);
    VAR_2->process_cc_data_flag = !!(VAR_0[0] & 0x40);
    VAR_2->additional_data_flag = !!(VAR_0[0] & 0x20);
    VAR_2->cc_count = (VAR_0[0] & 0x1F);
    VAR_2->em_data = VAR_0[1];
    VAR_0 += 2, VAR_1 -= 2;

    for (int VAR_3 = 0; 3 < VAR_1 && VAR_3 < (int)VAR_2->cc_count; ++VAR_3, VAR_0 += 3, VAR_1 -= 3) {
        VAR_2->cc_data[VAR_3].marker_bits = VAR_0[0] >> 3;
        VAR_2->cc_data[VAR_3].cc_valid = VAR_0[0] >> 2;
        VAR_2->cc_data[VAR_3].cc_type = VAR_0[0] >> 0;
        VAR_2->cc_data[VAR_3].cc_data = VAR_0[1] << 8 | VAR_0[2];
    }
}
