
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ KEV ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_2( HWND VAR_3, int VAR_4, const KEV VAR_5[], const KEV VAR_6[] )
{
    int VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
    static int VAR_13=0;
    KEV VAR_14[VAR_1];
    FUNC_0( VAR_4==2 || VAR_4==3);
    for(VAR_7=0;VAR_7<VAR_1;VAR_7++) VAR_14[VAR_7]=0;

    if(VAR_4==2) {
        for(VAR_7=0;VAR_7<VAR_4;VAR_7++) {
            for(VAR_8=0;VAR_8<VAR_4;VAR_8++) {
                VAR_14[0] = VAR_5[VAR_7];
                VAR_14[1] = VAR_5[1-VAR_7];
                VAR_14[2] = VAR_6[VAR_8];
                VAR_14[3] = VAR_6[1-VAR_8];
                if (!FUNC_1( VAR_3, VAR_13++, VAR_14)) return VAR_0;
            }
        }
    }

    if(VAR_4==3){
        for(VAR_7=0;VAR_7<VAR_4;VAR_7++){
            for(VAR_8=0;VAR_8<VAR_4;VAR_8++){
                if(VAR_8==VAR_7) continue;
                for(VAR_9=0;VAR_9<VAR_4;VAR_9++){
                    if(VAR_9==VAR_7 || VAR_9==VAR_8) continue;
                    for(VAR_10=0;VAR_10<VAR_4;VAR_10++){
                        for(VAR_11=0;VAR_11<VAR_4;VAR_11++){
                            if(VAR_11==VAR_10) continue;
                            for(VAR_12=0;VAR_12<VAR_4;VAR_12++){
                                if(VAR_12==VAR_10 ||VAR_12==VAR_11) continue;
                                VAR_14[0] = VAR_5[VAR_7];
                                VAR_14[1] = VAR_5[VAR_8];
                                VAR_14[2] = VAR_5[VAR_9];
                                VAR_14[3] = VAR_6[VAR_10];
                                VAR_14[4] = VAR_6[VAR_11];
                                VAR_14[5] = VAR_6[VAR_12];
                                if (!FUNC_1( VAR_3, VAR_13++, VAR_14)) return VAR_0;
                            }
                        }
                    }
                }
            }
        }
    }
    return VAR_2;
}
