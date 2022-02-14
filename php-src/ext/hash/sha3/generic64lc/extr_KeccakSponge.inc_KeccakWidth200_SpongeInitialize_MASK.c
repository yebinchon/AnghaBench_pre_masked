
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int rate; scalar_t__ squeezing; scalar_t__ byteIOIndex; int state; } ;
typedef TYPE_1__ SpongeInstance ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;

int FUNC_2(SpongeInstance *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
    if (VAR_2+VAR_3 != VAR_0)
        return 1;
    if ((VAR_2 <= 0) || (VAR_2 > VAR_0) || ((VAR_2 % 8) != 0))
        return 1;
    FUNC_1();
    FUNC_0(VAR_1->state);
    VAR_1->rate = VAR_2;
    VAR_1->byteIOIndex = 0;
    VAR_1->squeezing = 0;

    return 0;
}
