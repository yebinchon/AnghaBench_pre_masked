
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int libcaption_stauts_t ;
typedef scalar_t__ itu_t_t35_provider_code_t ;
typedef scalar_t__ itu_t_t35_country_code_t ;
struct TYPE_3__ {scalar_t__ country; scalar_t__ provider; int user_identifier; int user_data_type_code; int directv_user_data_length; int user_data; } ;
typedef TYPE_1__ cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,size_t,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

libcaption_stauts_t FUNC_1(const uint8_t* VAR_4, size_t VAR_5, cea708_t* VAR_6)
{
    if (3 > VAR_5) {
        goto error;
    }


    VAR_6->country = (itu_t_t35_country_code_t)(VAR_4[0]);
    VAR_6->provider = (itu_t_t35_provider_code_t)((VAR_4[1] << 8) | VAR_4[2]);
    VAR_6->user_identifier = 0;
    VAR_6->user_data_type_code = 0;
    VAR_4 += 3, VAR_5 -= 3;

    if (VAR_2 == VAR_6->provider) {
        if (4 > VAR_5) {
            goto error;
        }

        VAR_6->user_identifier = ((VAR_4[0] << 24) | (VAR_4[1] << 16) | (VAR_4[2] << 8) | VAR_4[3]);
        VAR_4 += 4, VAR_5 -= 4;
    }




    if (0 == VAR_6->provider && 0 == VAR_6->country) {
        if (1 > VAR_5) {
            goto error;
        }

        VAR_4 += 1, VAR_5 -= 1;
    } else if (VAR_2 == VAR_6->provider || VAR_3 == VAR_6->provider) {
        if (1 > VAR_5) {
            goto error;
        }

        VAR_6->user_data_type_code = VAR_4[0];
        VAR_4 += 1, VAR_5 -= 1;
    }

    if (VAR_3 == VAR_6->provider) {
        if (1 > VAR_5) {
            goto error;
        }

        VAR_6->directv_user_data_length = VAR_4[0];
        VAR_4 += 1, VAR_5 -= 1;
    }

    if (3 == VAR_6->user_data_type_code && 2 <= VAR_5) {
        FUNC_0(VAR_4, VAR_5, &VAR_6->user_data);
    } else if (4 == VAR_6->user_data_type_code) {

    } else if (5 == VAR_6->user_data_type_code) {

    } else {

    }

    return VAR_1;
error:
    return VAR_0;
}
