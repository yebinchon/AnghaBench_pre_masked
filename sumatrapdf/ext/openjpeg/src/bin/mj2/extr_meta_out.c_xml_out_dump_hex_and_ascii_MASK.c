
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*,int,char*) ;

void FUNC_3(FILE* VAR_3, char *VAR_4, int VAR_5,
                                char* VAR_6)
{

    int VAR_7, VAR_8;

    if (VAR_2) {
        FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
    }

    if (VAR_1) {
        FUNC_0(VAR_3, "%s<AsHexAndASCII>\n", VAR_6);
        for (VAR_7 = 0; VAR_7 < VAR_5;) {
            FUNC_0(VAR_3, "%s ", VAR_6);

            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
                FUNC_0(VAR_3, " %02x", VAR_4[VAR_7 + VAR_8]);
            }
                                           FUNC_0(VAR_3, "  ");

            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++, VAR_7++) {
                if (FUNC_1((int)VAR_4[VAR_7]) && VAR_7 < VAR_5) {
                    FUNC_0(VAR_3, "%c", VAR_4[VAR_7]);
                } else {
                    FUNC_0(VAR_3, " ");
                }
            }





        }
        FUNC_0(VAR_3, "%s</AsHexAndASCII>\n", VAR_6);
    }
}
