
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char*,long*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_1 ;

int FUNC_9(int VAR_2, char **VAR_3)
{
    long VAR_4;
    CONF *VAR_5;

    if ((VAR_5 = FUNC_3(FUNC_1())) != ((void*)0)
        && FUNC_2(VAR_5, VAR_3[1], &VAR_4)) {
        int VAR_6;

        FUNC_4(VAR_5);
        for (VAR_6 = 0; VAR_6 < FUNC_7(VAR_0); VAR_6++) {
            FUNC_5(FUNC_8(VAR_0, VAR_6), VAR_5);
        }
        FUNC_6(VAR_0);
    } else {
        FUNC_0(VAR_1);
        return 1;
    }
    return 0;
}
