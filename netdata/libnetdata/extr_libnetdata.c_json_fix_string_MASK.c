
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(char *VAR_0) {
    unsigned char VAR_1;
    while((VAR_1 = (unsigned char)*VAR_0)) {
        if(FUNC_3(VAR_1 == '\\'))
            *VAR_0++ = '/';
        else if(FUNC_3(VAR_1 == '"'))
            *VAR_0++ = '\'';
        else if(FUNC_3(FUNC_2(VAR_1) || FUNC_0(VAR_1)))
            *VAR_0++ = ' ';
        else if(FUNC_3(!FUNC_1(VAR_1) || VAR_1 > 127))
            *VAR_0++ = '_';
        else
            VAR_0++;
    }
}
