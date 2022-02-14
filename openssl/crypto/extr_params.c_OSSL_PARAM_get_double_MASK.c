
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef double uint32_t ;
typedef int int64_t ;
typedef double int32_t ;
struct TYPE_3__ {scalar_t__ data_type; int data_size; scalar_t__ data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(const OSSL_PARAM *VAR_3, double *VAR_4)
{
    int64_t VAR_5;
    uint64_t VAR_6;

    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
        return 0;

    if (VAR_3->data_type == VAR_1) {
        switch (VAR_3->data_size) {
        case sizeof(double):
            *VAR_4 = *(const double *)VAR_3->data;
            return 1;
        }
    } else if (VAR_3->data_type == VAR_2) {
        switch (VAR_3->data_size) {
        case sizeof(uint32_t):
            *VAR_4 = *(const uint32_t *)VAR_3->data;
            return 1;
        case sizeof(uint64_t):
            VAR_6 = *(const uint64_t *)VAR_3->data;
            if ((VAR_6 >> 53) == 0) {
                *VAR_4 = (double)VAR_6;
                return 1;
            }
            break;
        }
    } else if (VAR_3->data_type == VAR_0) {
        switch (VAR_3->data_size) {
        case sizeof(int32_t):
            *VAR_4 = *(const int32_t *)VAR_3->data;
            return 1;
        case sizeof(int64_t):
            VAR_5 = *(const int64_t *)VAR_3->data;
            VAR_6 = VAR_5 < 0 ? -VAR_5 : VAR_5;
            if ((VAR_6 >> 53) == 0) {
                *VAR_4 = 0.0 + VAR_5;
                return 1;
            }
            break;
        }
    }
    return 0;
}
