
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int ** FUNC_0 (int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char**,int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (char**,int *) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char**) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_0, char **VAR_1)
{
    FUNC_4();



    bool VAR_2 = FUNC_8();




    bool VAR_3 = !VAR_2 && !FUNC_3();

    int VAR_4 = 0;
    wchar_t **VAR_5 = FUNC_0(FUNC_1(), &VAR_4);

    int VAR_6 = 0;
    char **VAR_7 = ((void*)0);


    if (VAR_4 > 0 && VAR_5[0])
        FUNC_2(((void*)0), VAR_7, VAR_6, FUNC_5(VAR_7, VAR_5[0]));
    if (VAR_3) {
        FUNC_2(((void*)0), VAR_7, VAR_6,
                         "--player-operation-mode=pseudo-gui");
    }
    for (int VAR_8 = 1; VAR_8 < VAR_4; VAR_8++)
        FUNC_2(((void*)0), VAR_7, VAR_6, FUNC_5(VAR_7, VAR_5[VAR_8]));
    FUNC_2(((void*)0), VAR_7, VAR_6, ((void*)0));

    int VAR_9 = FUNC_6(VAR_6 - 1, VAR_7);

    FUNC_7(VAR_7);
    return VAR_9;
}
