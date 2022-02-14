
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ curlen; scalar_t__ bitcount; } ;
typedef TYPE_1__ TINF_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(TINF_DATA *VAR_3)
{
    if (VAR_3->curlen == 0) {
        unsigned int VAR_4, VAR_5;


        VAR_4 = FUNC_1(VAR_3);
        VAR_4 += 256 * FUNC_1(VAR_3);

        VAR_5 = FUNC_1(VAR_3);
        VAR_5 += 256 * FUNC_1(VAR_3);

        if (VAR_4 != (~VAR_5 & 0x0000ffff)) return VAR_0;



        VAR_3->curlen = VAR_4 + 1;


        VAR_3->bitcount = 0;
    }

    if (--VAR_3->curlen == 0) {
        return VAR_1;
    }

    unsigned char VAR_6 = FUNC_1(VAR_3);
    FUNC_0(VAR_3, VAR_6);
    return VAR_2;
}
