
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sample ;
typedef int BUFFER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char const*,char*) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(BUFFER *VAR_0, const char *VAR_1) {
    char VAR_2[1024];
    const char *VAR_3 = FUNC_2(VAR_0);
    char *VAR_4 = VAR_2, *VAR_5 = &VAR_2[sizeof(VAR_2) - 1];

    for(; *VAR_3 && VAR_4 < VAR_5 ;VAR_3++) {
        char VAR_6 = *VAR_3;
        if(FUNC_5(!FUNC_4(VAR_6))) VAR_6 = ' ';
        *VAR_4++ = VAR_6;
    }
    *VAR_4 = '\0';

    FUNC_3("BACKEND: received %zu bytes from %s backend. Ignoring them. Sample: '%s'", FUNC_1(VAR_0), VAR_1, VAR_2);
    FUNC_0(VAR_0);
    return 0;
}
