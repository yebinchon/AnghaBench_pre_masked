
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rate; unsigned int byteIOIndex; int state; int squeezing; } ;
typedef TYPE_1__ SpongeInstance ;


 int FUNC_0 (int ,unsigned char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*,unsigned char*,unsigned int) ;

int FUNC_4(SpongeInstance *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    size_t VAR_3, VAR_4;
    unsigned int VAR_5;
    unsigned int VAR_6 = VAR_0->rate/8;
    unsigned char *VAR_7;

    if (!VAR_0->squeezing)
        FUNC_2(VAR_0, 0x01);

    VAR_3 = 0;
    VAR_7 = VAR_1;
    while(VAR_3 < VAR_2) {
        if ((VAR_0->byteIOIndex == VAR_6) && (VAR_2 >= (VAR_3 + VAR_6))) {
            for(VAR_4=VAR_2-VAR_3; VAR_4>=VAR_6; VAR_4-=VAR_6) {
                FUNC_1(VAR_0->state);
                FUNC_0(VAR_0->state, VAR_7, 0, VAR_6);



                VAR_7+=VAR_6;
            }
            VAR_3 = VAR_2 - VAR_4;
        }
        else {

            if (VAR_0->byteIOIndex == VAR_6) {
                FUNC_1(VAR_0->state);
                VAR_0->byteIOIndex = 0;
            }
            VAR_5 = (unsigned int)(VAR_2 - VAR_3);
            if (VAR_5+VAR_0->byteIOIndex > VAR_6)
                VAR_5 = VAR_6-VAR_0->byteIOIndex;
            VAR_3 += VAR_5;

            FUNC_0(VAR_0->state, VAR_7, VAR_0->byteIOIndex, VAR_5);



            VAR_7 += VAR_5;
            VAR_0->byteIOIndex += VAR_5;
        }
    }
    return 0;
}
