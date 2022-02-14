
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int as; int ps; int us; scalar_t__ sec; scalar_t__ min; scalar_t__ hour; int day; int month; } ;
typedef TYPE_1__ npy_datetimestruct ;
typedef int NPY_DATETIMEUNIT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static NPY_DATETIMEUNIT
FUNC_0(npy_datetimestruct *VAR_12)
{
    if (VAR_12->as % 1000 != 0) {
        return VAR_3;
    }
    else if (VAR_12->as != 0) {
        return VAR_4;
    }
    else if (VAR_12->ps % 1000 != 0) {
        return VAR_9;
    }
    else if (VAR_12->ps != 0) {
        return VAR_8;
    }
    else if (VAR_12->us % 1000 != 0) {
        return VAR_11;
    }
    else if (VAR_12->us != 0) {
        return VAR_7;
    }
    else if (VAR_12->sec != 0) {
        return VAR_10;
    }
    else if (VAR_12->min != 0) {
        return VAR_6;
    }
    else if (VAR_12->hour != 0) {
        return VAR_5;
    }
    else if (VAR_12->day != 1) {
        return VAR_0;
    }
    else if (VAR_12->month != 1) {
        return VAR_1;
    }
    else {
        return VAR_2;
    }
}
