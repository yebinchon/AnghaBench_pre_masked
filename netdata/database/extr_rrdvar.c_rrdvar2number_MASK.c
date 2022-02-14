
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int total_number ;
typedef int time_t ;
typedef int collected_number ;
typedef int calculated_number ;
struct TYPE_3__ {int type; scalar_t__ value; } ;
typedef TYPE_1__ RRDVAR ;


 int VAR_0 ;





 int FUNC_0 (char*,int) ;

calculated_number FUNC_1(RRDVAR *VAR_1) {
    switch(VAR_1->type) {
        case 132: {
            calculated_number *VAR_2 = (calculated_number *)VAR_1->value;
            return *VAR_2;
        }

        case 129: {
            time_t *VAR_3 = (time_t *)VAR_1->value;
            return *VAR_3;
        }

        case 131: {
            collected_number *VAR_4 = (collected_number *)VAR_1->value;
            return *VAR_4;
        }

        case 128: {
            total_number *VAR_5 = (total_number *)VAR_1->value;
            return *VAR_5;
        }

        case 130: {
            int *VAR_6 = (int *)VAR_1->value;
            return *VAR_6;
        }

        default:
            FUNC_0("I don't know how to convert RRDVAR type %u to calculated_number", VAR_1->type);
            return VAR_0;
    }
}
