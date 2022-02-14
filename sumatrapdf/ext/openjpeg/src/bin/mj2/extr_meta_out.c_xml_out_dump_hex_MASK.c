
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(FILE* VAR_0, char *VAR_1, int VAR_2, char* VAR_3)
{

    int VAR_4;


    FUNC_0(VAR_0, "%s<AsHex>\n", VAR_3);
    FUNC_0(VAR_0, "%s  ", VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_0(VAR_0, "%02x", VAR_1[VAR_4]);
    }
    FUNC_0(VAR_0, "%s</AsHex>\n", VAR_3);
}
