
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int calculated_number ;
typedef scalar_t__ BADGE_COLOR_COMPARISON ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static inline void FUNC_11(const char *VAR_7, char *VAR_8, size_t VAR_9, calculated_number VAR_10) {
    if(FUNC_6(VAR_10) || FUNC_2(VAR_10))
        VAR_10 = VAR_6;

    char VAR_11[256 + 1] = "";
    char VAR_12[256 + 1] = "";
    BADGE_COLOR_COMPARISON VAR_13 = VAR_1;




    const char *VAR_14 = VAR_7;
    while(*VAR_14) {
        char *VAR_15 = VAR_11, *VAR_16 = ((void*)0);
        size_t VAR_17 = 0, VAR_18 = 0;

        const char *VAR_19 = VAR_14;

        while(*VAR_19 && *VAR_19 != '|') {
            switch(*VAR_19) {
                case '!':
                    if(VAR_19[1] == '=') VAR_19++;
                    VAR_13 = VAR_5;
                    VAR_16 = VAR_12;
                    break;

                case '=':
                case ':':
                    VAR_13 = VAR_0;
                    VAR_16 = VAR_12;
                    break;

                case '}':
                case ')':
                case '>':
                    if(VAR_19[1] == '=') {
                        VAR_13 = VAR_2;
                        VAR_19++;
                    }
                    else
                        VAR_13 = VAR_1;
                    VAR_16 = VAR_12;
                    break;

                case '{':
                case '(':
                case '<':
                    if(VAR_19[1] == '=') {
                        VAR_13 = VAR_4;
                        VAR_19++;
                    }
                    else if(VAR_19[1] == '>' || VAR_19[1] == ')' || VAR_19[1] == '}') {
                        VAR_13 = VAR_5;
                        VAR_19++;
                    }
                    else
                        VAR_13 = VAR_3;
                    VAR_16 = VAR_12;
                    break;

                default:
                    if(VAR_16) {
                        if(VAR_18 < 256) {
                            VAR_18++;
                            *VAR_16++ = *VAR_19;
                        }
                    }
                    else {
                        if(VAR_17 < 256) {
                            VAR_17++;
                            *VAR_15++ = *VAR_19;
                        }
                    }
                    break;
            }

            VAR_19++;
        }


        if(*VAR_19 == '|') VAR_19++;
        VAR_14 = VAR_19;


        *VAR_15 = '\0';
        if(VAR_16) {
            *VAR_16 = '\0';
            calculated_number VAR_20;

            if(!*VAR_12 || !FUNC_8(VAR_12, "null")) {
                VAR_20 = VAR_6;
            }
            else {
                VAR_20 = FUNC_7(VAR_12);
                if(FUNC_6(VAR_20) || FUNC_2(VAR_20))
                    VAR_20 = VAR_6;
            }

            if(FUNC_10(FUNC_6(VAR_10) || FUNC_6(VAR_20))) {
                if(FUNC_6(VAR_10) && FUNC_6(VAR_20))
                    break;
            }
            else {
                     if (FUNC_10(VAR_13 == VAR_3 && FUNC_3(VAR_10, VAR_20))) break;
                else if (FUNC_10(VAR_13 == VAR_4 && FUNC_4(VAR_10, VAR_20))) break;
                else if (FUNC_10(VAR_13 == VAR_1 && FUNC_0(VAR_10, VAR_20))) break;
                else if (FUNC_10(VAR_13 == VAR_2 && FUNC_1(VAR_10, VAR_20))) break;
                else if (FUNC_10(VAR_13 == VAR_0 && !FUNC_5(VAR_10, VAR_20))) break;
                else if (FUNC_10(VAR_13 == VAR_5 && FUNC_5(VAR_10, VAR_20))) break;
            }
        }
        else
            break;
    }

    const char *VAR_21;
    if(VAR_11[0])
        VAR_21 = VAR_11;
    else
        VAR_21 = VAR_7;

    FUNC_9(VAR_8, VAR_21, VAR_9);
}
