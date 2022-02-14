
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lwCanvas ;


 float VAR_0 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,int,int,float,float,int) ;
 int FUNC_2 () ;

lwCanvas *FUNC_3(int VAR_1, int VAR_2, int VAR_3) {

    int VAR_4 = VAR_1*2;
    int VAR_5 = VAR_4 > 4 ? 2 : 0;
    float VAR_6 = (float)(VAR_4-VAR_5*2) / VAR_2;
    int VAR_7 = VAR_6 * VAR_3 + VAR_5*2;
    lwCanvas *VAR_8 = FUNC_0(VAR_4, VAR_7, 0);

    for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        for (int VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            int VAR_11 = VAR_10 * VAR_6 + VAR_6/2 + VAR_5;
            int VAR_12 = VAR_9 * VAR_6 + VAR_6/2 + VAR_5;


            float VAR_13 = 0;
            if (VAR_9 > 1) {
                float VAR_14 = (float)FUNC_2() / VAR_0 / VAR_3 * VAR_9;
                float VAR_15 = (float)FUNC_2() / VAR_0 / VAR_3 * VAR_9;
                float VAR_16 = (float)FUNC_2() / VAR_0 / VAR_3 * VAR_9;
                if (FUNC_2() % 2) VAR_14 = -VAR_14;
                if (FUNC_2() % 2) VAR_15 = -VAR_15;
                if (FUNC_2() % 2) VAR_16 = -VAR_16;
                VAR_13 = VAR_14;
                VAR_11 += VAR_15*VAR_6/3;
                VAR_12 += VAR_16*VAR_6/3;
            }
            FUNC_1(VAR_8,VAR_11,VAR_12,VAR_6,VAR_13,1);
        }
    }

    return VAR_8;
}
