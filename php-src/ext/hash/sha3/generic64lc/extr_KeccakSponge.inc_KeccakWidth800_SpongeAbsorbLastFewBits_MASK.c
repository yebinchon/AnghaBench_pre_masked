
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rate; int squeezing; unsigned int byteIOIndex; int state; } ;
typedef TYPE_1__ SpongeInstance ;


 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,unsigned char*,unsigned int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (unsigned char*,int ,int) ;

int FUNC_5(SpongeInstance *VAR_1, unsigned char VAR_2)
{
    unsigned int VAR_3 = VAR_1->rate/8;

    if (VAR_2 == 0)
        return 1;
    if (VAR_1->squeezing)
        return 1;
    FUNC_0(VAR_1->state, VAR_2, VAR_1->byteIOIndex);

    if ((VAR_2 >= 0x80) && (VAR_1->byteIOIndex == (VAR_3-1)))
        FUNC_1(VAR_1->state);

    FUNC_0(VAR_1->state, 0x80, VAR_3-1);
    FUNC_1(VAR_1->state);
    VAR_1->byteIOIndex = 0;
    VAR_1->squeezing = 1;



    return 0;
}
