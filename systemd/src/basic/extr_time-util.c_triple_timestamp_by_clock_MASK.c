
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_3__ {int boottime; int monotonic; int realtime; } ;
typedef TYPE_1__ triple_timestamp ;
typedef int clockid_t ;







 int VAR_0 ;

usec_t FUNC_0(triple_timestamp *VAR_1, clockid_t VAR_2) {

        switch (VAR_2) {

        case 129:
        case 128:
                return VAR_1->realtime;

        case 130:
                return VAR_1->monotonic;

        case 132:
        case 131:
                return VAR_1->boottime;

        default:
                return VAR_0;
        }
}
