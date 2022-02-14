
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9()
{
    json_t *VAR_0, *VAR_1;



    VAR_0 = FUNC_1();
    if(!VAR_0)
        FUNC_0("unable to create array");

    if(FUNC_2(VAR_0, VAR_0) == 0)
        FUNC_0("able to append self");

    if(FUNC_4(VAR_0, 0, VAR_0) == 0)
        FUNC_0("able to insert self");

    if(FUNC_3(VAR_0, FUNC_8()))
        FUNC_0("failed to append true");

    if(FUNC_5(VAR_0, 0, VAR_0) == 0)
        FUNC_0("able to set self");

    FUNC_6(VAR_0);




    VAR_0 = FUNC_1();
    VAR_1 = FUNC_1();
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create array");

    if(FUNC_2(VAR_0, VAR_1) ||
       FUNC_2(VAR_1, VAR_0))
        FUNC_0("unable to append");


    if(FUNC_7(VAR_0, 0) != ((void*)0))
        FUNC_0("able to dump circulars");


    FUNC_6(VAR_0);
    FUNC_6(VAR_1);
    FUNC_6(VAR_0);
}
