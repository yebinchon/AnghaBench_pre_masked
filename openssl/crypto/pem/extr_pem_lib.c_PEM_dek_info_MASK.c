
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,...) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_1, const char *VAR_2, int VAR_3, char *VAR_4)
{
    long VAR_5;
    char *VAR_6 = VAR_1 + FUNC_2(VAR_1);
    int VAR_7 = VAR_0 - (size_t)(VAR_6 - VAR_1), VAR_8;

    VAR_8 = FUNC_0(VAR_6, VAR_7, "DEK-Info: %s,", VAR_2);
    if (VAR_8 > 0) {
        VAR_7 -= VAR_8;
        VAR_6 += VAR_8;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            VAR_8 = FUNC_0(VAR_6, VAR_7, "%02X", 0xff & VAR_4[VAR_5]);
            if (VAR_8 <= 0)
                return;
            VAR_7 -= VAR_8;
            VAR_6 += VAR_8;
        }
        if (VAR_7 > 1)
            FUNC_1(VAR_6, "\n");
    }
}
