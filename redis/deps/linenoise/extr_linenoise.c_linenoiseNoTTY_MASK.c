
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_3(void) {
    char *VAR_2 = ((void*)0);
    size_t VAR_3 = 0, VAR_4 = 0;

    while(1) {
        if (VAR_3 == VAR_4) {
            if (VAR_4 == 0) VAR_4 = 16;
            VAR_4 *= 2;
            char *VAR_5 = VAR_2;
            VAR_2 = FUNC_2(VAR_2,VAR_4);
            if (VAR_2 == ((void*)0)) {
                if (VAR_5) FUNC_1(VAR_5);
                return ((void*)0);
            }
        }
        int VAR_6 = FUNC_0(VAR_1);
        if (VAR_6 == VAR_0 || VAR_6 == '\n') {
            if (VAR_6 == VAR_0 && VAR_3 == 0) {
                FUNC_1(VAR_2);
                return ((void*)0);
            } else {
                VAR_2[VAR_3] = '\0';
                return VAR_2;
            }
        } else {
            VAR_2[VAR_3] = VAR_6;
            VAR_3++;
        }
    }
}
