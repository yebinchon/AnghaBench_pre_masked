
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,unsigned char) ;
 char** VAR_0 ;
 char* VAR_1 ;

void FUNC_2(void) {
    int VAR_2;
    char *VAR_3 = VAR_1;
    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        if (FUNC_0(VAR_2) || VAR_2 == '-' || VAR_2 == '.' || VAR_2 == '_' || VAR_2 == '~') {
            VAR_0[VAR_2] = ((void*)0);
        } else {
            FUNC_1(VAR_3, 4, "%%%02hhX", (unsigned char)VAR_2);
            VAR_0[VAR_2] = VAR_3;
            VAR_3 += 3;
        }
    }
}
