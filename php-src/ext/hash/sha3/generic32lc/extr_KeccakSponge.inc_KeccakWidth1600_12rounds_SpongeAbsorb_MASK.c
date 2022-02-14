
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rate; unsigned int byteIOIndex; int state; scalar_t__ squeezing; } ;
typedef TYPE_1__ SpongeInstance ;


 int FUNC_0 (int ,unsigned char const*,unsigned int,unsigned int) ;
 size_t FUNC_1 (int ,unsigned int,unsigned char const*,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,unsigned char const*,unsigned int) ;

int FUNC_4(SpongeInstance *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5;
    unsigned int VAR_6;
    const unsigned char *VAR_7;
    unsigned int VAR_8 = VAR_1->rate/8;

    if (VAR_1->squeezing)
        return 1;

    VAR_4 = 0;
    VAR_7 = VAR_2;
    while(VAR_4 < VAR_3) {
        if ((VAR_1->byteIOIndex == 0) && (VAR_3 >= (VAR_4 + VAR_8))) {
                for(VAR_5=VAR_3-VAR_4; VAR_5>=VAR_8; VAR_5-=VAR_8) {



                    FUNC_0(VAR_1->state, VAR_7, 0, VAR_8);
                    FUNC_2(VAR_1->state);
                    VAR_7+=VAR_8;
                }
                VAR_4 = VAR_3 - VAR_5;



        }
        else {

            VAR_6 = (unsigned int)(VAR_3 - VAR_4);
            if (VAR_6+VAR_1->byteIOIndex > VAR_8)
                VAR_6 = VAR_8-VAR_1->byteIOIndex;



            VAR_4 += VAR_6;

            FUNC_0(VAR_1->state, VAR_7, VAR_1->byteIOIndex, VAR_6);
            VAR_7 += VAR_6;
            VAR_1->byteIOIndex += VAR_6;
            if (VAR_1->byteIOIndex == VAR_8) {
                FUNC_2(VAR_1->state);
                VAR_1->byteIOIndex = 0;
            }
        }
    }
    return 0;
}
