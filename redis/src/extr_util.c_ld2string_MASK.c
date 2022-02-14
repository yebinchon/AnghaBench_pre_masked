
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ld2string_mode ;





 scalar_t__ FUNC_0 (long double) ;
 int FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 (char*,size_t,char*,long double) ;
 int * FUNC_3 (char*,char) ;

int FUNC_4(char *VAR_0, size_t VAR_1, long double VAR_2, ld2string_mode VAR_3) {
    size_t VAR_4 = 0;

    if (FUNC_0(VAR_2)) {


        if (VAR_1 < 5) return 0;
        if (VAR_2 > 0) {
            FUNC_1(VAR_0,"inf",3);
            VAR_4 = 3;
        } else {
            FUNC_1(VAR_0,"-inf",4);
            VAR_4 = 4;
        }
    } else {
        switch (VAR_3) {
        case 130:
            VAR_4 = FUNC_2(VAR_0,VAR_1,"%.17Lg",VAR_2);
            if (VAR_4+1 > VAR_1) return 0;
            break;
        case 129:
            VAR_4 = FUNC_2(VAR_0,VAR_1,"%La",VAR_2);
            if (VAR_4+1 > VAR_1) return 0;
            break;
        case 128:





            VAR_4 = FUNC_2(VAR_0,VAR_1,"%.17Lf",VAR_2);
            if (VAR_4+1 > VAR_1) return 0;

            if (FUNC_3(VAR_0,'.') != ((void*)0)) {
                char *VAR_5 = VAR_0+VAR_4-1;
                while(*VAR_5 == '0') {
                    VAR_5--;
                    VAR_4--;
                }
                if (*VAR_5 == '.') VAR_4--;
            }
            break;
        default: return 0;
        }
    }
    VAR_0[VAR_4] = '\0';
    return VAR_4;
}
