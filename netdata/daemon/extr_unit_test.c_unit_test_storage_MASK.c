
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double calculated_number ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (double,int) ;
 scalar_t__ FUNC_2 () ;
 double FUNC_3 (int ) ;

int FUNC_4() {
    if(FUNC_2()) return 0;

    calculated_number VAR_2 = FUNC_3(VAR_1);
    calculated_number VAR_3 = FUNC_3(VAR_0);

    calculated_number VAR_4, VAR_5 = 0;
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0;

    for(VAR_8 = -1; VAR_8 <= 1 ; VAR_8++) {
        VAR_5 = 0;

        if(!VAR_8) continue;

        for(VAR_7 = 0; VAR_7 < 9 ;VAR_7++) {
            VAR_5 += 0.0000001;
            VAR_4 = VAR_5 * VAR_8;
            for(VAR_6 = 0; VAR_6 < 21 ;VAR_6++, VAR_4 *= 10) {
                if(VAR_4 > 0 && VAR_4 < VAR_2) continue;
                if(VAR_4 < 0 && VAR_4 > VAR_3) continue;

                if(FUNC_1(VAR_4, 1)) return 1;
            }
        }
    }


    FUNC_0(1000000, 2);
    return VAR_9;
}
