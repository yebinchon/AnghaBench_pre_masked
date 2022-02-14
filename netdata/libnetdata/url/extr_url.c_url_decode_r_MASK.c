
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int) ;
 char FUNC_4 (char*,char*,char*) ;
 char FUNC_5 (char*) ;
 int FUNC_6 (unsigned char*) ;

char *FUNC_7(char *VAR_0, char *VAR_1, size_t VAR_2) {
    char *VAR_3 = VAR_1,
         *VAR_4 = VAR_0,
         *VAR_5 = &VAR_0[VAR_2 - 1];

    while(*VAR_3 && VAR_4 < VAR_5) {
        if(FUNC_3(*VAR_3 == '%')) {
            char VAR_6 = FUNC_5(VAR_3);
            if(FUNC_0(VAR_6)) {
                char VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
                if(FUNC_2(VAR_7)){
                    VAR_4 += VAR_7;
                    VAR_3 += (VAR_7 * 3)-1;
                }
                else {
                    goto fail_cleanup;
                }
            }
            else if(FUNC_2(VAR_6) && FUNC_1(VAR_6)) {

                *VAR_4++ = VAR_6;
                VAR_3 += 2;
            }
            else
                goto fail_cleanup;
        }
        else if(FUNC_3(*VAR_3 == '+'))
            *VAR_4++ = ' ';

        else
            *VAR_4++ = *VAR_3;

        VAR_3++;
    }

    *VAR_4 = '\0';

    if(FUNC_3( FUNC_6((unsigned char *)VAR_0) ))
        return ((void*)0);

    return VAR_0;

fail_cleanup:
    *VAR_4 = '\0';
    return ((void*)0);
}
