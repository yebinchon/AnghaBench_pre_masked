
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 double* VAR_2 ;

__attribute__((used)) static inline double FUNC_3(const char *VAR_3, float VAR_4) {
    double VAR_5 = 0.0;

    while(*VAR_3) {





        if(FUNC_1(*VAR_3)) {
            VAR_3++;
            while(FUNC_0(*VAR_3) && !FUNC_1(*VAR_3)){
                VAR_3++;
            }
            VAR_5 += VAR_4;
        }
        else {
            if(FUNC_2(!(*VAR_3 & 0x80))){
            double VAR_6 = VAR_2[(unsigned char)*VAR_3];
                if(VAR_6 != 0.0)
                VAR_5 += VAR_6 + VAR_0;
            }
            VAR_3++;
        }
    }

    VAR_5 -= VAR_0;
    VAR_5 += VAR_1;
    return VAR_5;
}
