
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(FILE* VAR_0, const char *VAR_1, bool VAR_2, int VAR_3)
{

    if (VAR_2) {
        size_t VAR_4 = FUNC_3(VAR_1);
        unsigned int VAR_5 = 0;
        for (int VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
            VAR_5 = VAR_5 * 33 + VAR_1[VAR_6];
        FUNC_2(VAR_0, (VAR_5 + 1) % 15 + 1);
    }

    FUNC_0(VAR_0, "%10s", VAR_1);
    if (VAR_2)
        FUNC_2(VAR_0, -1);
    FUNC_0(VAR_0, ": ");
    if (VAR_2)
        FUNC_1(VAR_0, VAR_3);
}
