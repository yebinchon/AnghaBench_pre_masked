
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cc_data; } ;
typedef TYPE_2__ user_data_t ;
typedef int uint16_t ;
typedef int cea708_cc_type_t ;
struct TYPE_4__ {int cc_valid; int cc_data; int cc_type; } ;



uint16_t FUNC_0(user_data_t* VAR_0, int VAR_1, int* VAR_2, cea708_cc_type_t* VAR_3)
{
    (*VAR_2) = VAR_0->cc_data[VAR_1].cc_valid;
    (*VAR_3) = VAR_0->cc_data[VAR_1].cc_type;
    return VAR_0->cc_data[VAR_1].cc_data;
}
