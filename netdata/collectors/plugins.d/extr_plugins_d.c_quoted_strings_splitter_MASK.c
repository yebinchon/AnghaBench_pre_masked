
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(char *VAR_0, char **VAR_1, int VAR_2, int (*VAR_3)(char)) {
    char *VAR_4 = VAR_0, VAR_5 = 0;
    int VAR_6 = 0, VAR_7;


    while(FUNC_1(VAR_3(*VAR_4))) VAR_4++;


    if(FUNC_1(*VAR_4 == '\'' || *VAR_4 == '"')) {
        VAR_5 = *VAR_4;
        VAR_4++;
    }


    VAR_1[VAR_6++] = VAR_4;


    while(FUNC_0(*VAR_4)) {

        if(FUNC_1(*VAR_4 == '\\' && VAR_4[1])) {
            VAR_4 += 2;
            continue;
        }


        else if(FUNC_1(*VAR_4 == VAR_5)) {
            VAR_5 = 0;
            *VAR_4 = ' ';
            continue;
        }


        else if(FUNC_1(VAR_5 == 0 && VAR_3(*VAR_4))) {


            *VAR_4++ = '\0';


            while(FUNC_0(VAR_3(*VAR_4))) VAR_4++;


            if(FUNC_1(*VAR_4 == '\'' || *VAR_4 == '"')) {
                VAR_5 = *VAR_4;
                VAR_4++;
            }


            if(FUNC_1(!*VAR_4)) break;


            if(FUNC_0(VAR_6 < VAR_2)) VAR_1[VAR_6++] = VAR_4;
            else break;
        }


        else VAR_4++;
    }


    VAR_7 = VAR_6;
    while(FUNC_0(VAR_7 < VAR_2)) VAR_1[VAR_7++] = ((void*)0);

    return VAR_6;
}
