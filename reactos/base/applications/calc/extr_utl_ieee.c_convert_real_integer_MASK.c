
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ __int64 ;
struct TYPE_4__ {double f; scalar_t__ i; } ;
struct TYPE_3__ {int const base; TYPE_2__ code; } ;






 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(unsigned int VAR_1)
{
    switch (VAR_1) {
    case 130:
        VAR_0.code.f = (double)VAR_0.code.i;
        break;
    case 128:
    case 131:
    case 129:
        if (VAR_0.base == 130) {
            VAR_0.code.i = (__int64)VAR_0.code.f;
            FUNC_0(&VAR_0.code);
        }
        break;
    }
}
