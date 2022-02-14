
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int argc; int ** argv; } ;
typedef TYPE_1__ client ;
typedef int GeoHashFix52Bits ;
typedef int GeoHashBits ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int **,double*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (double,double,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int,int **) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int ** FUNC_11 (int) ;
 int FUNC_12 (int **) ;

void FUNC_13(client *VAR_3) {

    if ((VAR_3->argc - 2) % 3 != 0) {

        FUNC_0(VAR_3, "syntax error. Try GEOADD key [x1] [y1] [name1] "
                         "[x2] [y2] [name2] ... ");
        return;
    }

    int VAR_4 = (VAR_3->argc - 2) / 3;
    int VAR_5 = 2+VAR_4*2;
    robj **VAR_6 = FUNC_11(VAR_5*sizeof(robj*));
    VAR_6[0] = FUNC_2("zadd",4);
    VAR_6[1] = VAR_3->argv[1];
    FUNC_7(VAR_6[1]);




    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        double VAR_8[2];

        if (FUNC_4(VAR_3, (VAR_3->argv+2)+(VAR_7*3),VAR_8) == VAR_0) {
            for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
                if (VAR_6[VAR_7]) FUNC_3(VAR_6[VAR_7]);
            FUNC_12(VAR_6);
            return;
        }


        GeoHashBits VAR_9;
        FUNC_6(VAR_8[0], VAR_8[1], VAR_1, &VAR_9);
        GeoHashFix52Bits VAR_10 = FUNC_5(VAR_9);
        robj *VAR_11 = FUNC_1(VAR_2, FUNC_9(VAR_10));
        robj *VAR_12 = VAR_3->argv[2 + VAR_7 * 3 + 2];
        VAR_6[2+VAR_7*2] = VAR_11;
        VAR_6[3+VAR_7*2] = VAR_12;
        FUNC_7(VAR_12);
    }


    FUNC_8(VAR_3,VAR_5,VAR_6);
    FUNC_10(VAR_3);
}
