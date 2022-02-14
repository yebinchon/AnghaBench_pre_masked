
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int SBSYMCODELEN; int * IAIDx; } ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef TYPE_1__ Jbig2ArithIaidCtx ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int ,int,char*) ;
 int VAR_1 ;

int
FUNC_3(Jbig2Ctx *VAR_2, Jbig2ArithIaidCtx *VAR_3, Jbig2ArithState *VAR_4, int32_t *VAR_5)
{
    Jbig2ArithCx *VAR_6 = VAR_3->IAIDx;
    int VAR_7 = VAR_3->SBSYMCODELEN;
    int VAR_8 = 1;
    int VAR_9;
    int VAR_10;
    int VAR_11 = 0;


    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        VAR_9 = FUNC_1(VAR_4, &VAR_6[VAR_8], &VAR_11);
        if (VAR_11)
            return FUNC_2(VAR_2, VAR_0, -1, "failed to decode IAIDx code");



        VAR_8 = (VAR_8 << 1) | VAR_9;
    }

    VAR_8 -= 1 << VAR_7;



    *VAR_5 = VAR_8;
    return 0;
}
