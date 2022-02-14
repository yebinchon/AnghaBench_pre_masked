
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
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,char*,unsigned int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*) ;

void FUNC_11(FILE *VAR_2, gzFile VAR_3)
{
    char VAR_4[VAR_0];
    int VAR_5;
    int VAR_6;
    FUNC_9(VAR_4, 0, sizeof(VAR_4));
    for (;;) {
        VAR_5 = (int)FUNC_4(VAR_4, 1, sizeof(VAR_4), VAR_2);
        if (FUNC_3(VAR_2)) {
            FUNC_10("fread");
            FUNC_1(1);
        }
        if (VAR_5 == 0) break;

        if (FUNC_8(VAR_3, VAR_4, (unsigned)VAR_5) != VAR_5) FUNC_0(FUNC_7(VAR_3, &VAR_6));
    }
    FUNC_2(VAR_2);
    if (FUNC_6(VAR_3) != VAR_1) FUNC_0("failed gzclose");
}
