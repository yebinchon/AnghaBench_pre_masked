
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PRUnichar ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int * VAR_3 ;

BOOL FUNC_8(void)
{
    PRUnichar VAR_4[VAR_1];
    BOOL VAR_5 = VAR_0;

    static DWORD VAR_6;

    FUNC_4("()\n");


    if(VAR_6 == FUNC_1())
        return VAR_3 != ((void*)0);

    FUNC_0(&VAR_2);

    if(!VAR_6) {
        VAR_6 = FUNC_1();




        if(FUNC_7(VAR_4)
           || (FUNC_6() && FUNC_7(VAR_4)))

            VAR_5 = FUNC_5(VAR_4);
        else
           FUNC_3("Could not load wine-gecko. HTML rendering will be disabled.\n");
    }else {
        VAR_5 = VAR_3 != ((void*)0);
    }

    FUNC_2(&VAR_2);

    return VAR_5;
}
