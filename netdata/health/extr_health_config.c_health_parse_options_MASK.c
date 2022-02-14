
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static inline uint32_t FUNC_3(const char *VAR_1) {
    uint32_t VAR_2 = 0;
    char VAR_3[100+1] = "";

    while(*VAR_1) {
        VAR_3[0] = '\0';


        while(*VAR_1 && FUNC_1(*VAR_1))
            VAR_1++;


        size_t VAR_4 = 0;
        while(*VAR_1 && VAR_4 < 100 && !FUNC_1(*VAR_1))
            VAR_3[VAR_4++] = *VAR_1++;

        if(VAR_3[0]) {
            VAR_3[VAR_4] = '\0';

            if(!FUNC_2(VAR_3, "no-clear-notification") || !FUNC_2(VAR_3, "no-clear"))
                VAR_2 |= VAR_0;
            else
                FUNC_0("Ignoring unknown alarm option '%s'", VAR_3);
        }
    }

    return VAR_2;
}
