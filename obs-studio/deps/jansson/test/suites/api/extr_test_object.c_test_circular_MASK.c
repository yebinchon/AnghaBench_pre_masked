
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_5()
{
    json_t *VAR_0, *VAR_1;

    VAR_0 = FUNC_3();
    VAR_1 = FUNC_3();
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create object");


    if(FUNC_4(VAR_0, "a", VAR_0) == 0)
        FUNC_0("able to set self");


    if(FUNC_4(VAR_0, "a", VAR_1) ||
       FUNC_4(VAR_1, "a", VAR_0))
        FUNC_0("unable to set value");


    if(FUNC_2(VAR_0, 0) != ((void*)0))
        FUNC_0("able to dump circulars");


    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
    FUNC_1(VAR_0);
}
