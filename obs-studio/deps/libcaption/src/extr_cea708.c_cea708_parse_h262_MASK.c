
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int libcaption_stauts_t ;
struct TYPE_3__ {int user_identifier; int user_data_type_code; int user_data; } ;
typedef TYPE_1__ cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,size_t,int *) ;

libcaption_stauts_t FUNC_1(const uint8_t* VAR_2, size_t VAR_3, cea708_t* VAR_4)
{
    if (!VAR_2 || 7 > VAR_3) {
        return VAR_0;
    }

    VAR_4->user_identifier = ((VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8) | VAR_2[3]);
    VAR_4->user_data_type_code = VAR_2[4];
    if (3 == VAR_4->user_data_type_code) {
        FUNC_0(VAR_2 + 5, VAR_3 - 5, &VAR_4->user_data);
    }

    return VAR_1;
}
