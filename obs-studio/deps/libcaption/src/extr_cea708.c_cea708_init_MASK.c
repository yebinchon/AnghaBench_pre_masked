
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int process_cc_data_flag; int em_data; scalar_t__ cc_count; scalar_t__ additional_data_flag; scalar_t__ process_em_data_flag; } ;
struct TYPE_6__ {int user_data_type_code; double timestamp; TYPE_1__ user_data; scalar_t__ directv_user_data_length; int user_identifier; int provider; int country; } ;
typedef TYPE_2__ cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_2 ;

int FUNC_1(cea708_t* VAR_3, double VAR_4)
{
    FUNC_0(VAR_3, 0, sizeof(cea708_t));
    VAR_3->country = VAR_1;
    VAR_3->provider = VAR_2;
    VAR_3->user_identifier = VAR_0;
    VAR_3->user_data_type_code = 3;
    VAR_3->directv_user_data_length = 0;
    VAR_3->user_data.process_em_data_flag = 0;
    VAR_3->user_data.process_cc_data_flag = 1;
    VAR_3->user_data.additional_data_flag = 0;
    VAR_3->user_data.em_data = 0xFF;
    VAR_3->user_data.cc_count = 0;
    VAR_3->timestamp = VAR_4;
    return 1;
}
