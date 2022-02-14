
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_0, char **VAR_1, int VAR_2) {
    char *VAR_3 = VAR_0;
    int VAR_4 = 0;


    while(FUNC_0(*VAR_3)) VAR_3++;


    VAR_1[VAR_4++] = VAR_3;


    while(*VAR_3) {

        if(FUNC_1(FUNC_0(*VAR_3))) {


            *VAR_3++ = '\0';


            while(FUNC_0(*VAR_3)) VAR_3++;


            if(!*VAR_3) break;


            if(VAR_4 < VAR_2) VAR_1[VAR_4++] = VAR_3;
            else break;
        }
        else VAR_3++;
    }


    while(VAR_4 < VAR_2) VAR_1[VAR_4++] = ((void*)0);
}
