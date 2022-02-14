
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6(gzFile VAR_2, FILE *VAR_3)
{
    char VAR_4[VAR_0];
    int VAR_5;
    int VAR_6;

    for (;;) {
        VAR_5 = FUNC_5(VAR_2, VAR_4, sizeof(VAR_4));
        if (VAR_5 < 0) FUNC_0 (FUNC_4(VAR_2, &VAR_6));
        if (VAR_5 == 0) break;

        if ((int)FUNC_2(VAR_4, 1, (unsigned)VAR_5, VAR_3) != VAR_5) {
            FUNC_0("failed fwrite");
        }
    }
    if (FUNC_1(VAR_3)) FUNC_0("failed fclose");

    if (FUNC_3(VAR_2) != VAR_1) FUNC_0("failed gzclose");
}
