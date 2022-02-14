
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;

BOOLEAN FUNC_4(HANDLE VAR_6)
{




    if (!FUNC_2(VAR_6)) return VAR_1;
    VAR_5 = VAR_6;


    if (!FUNC_0(VAR_5, &VAR_3) ||
        !FUNC_1(VAR_5, &VAR_2))
    {
        VAR_5 = ((void*)0);
        return VAR_1;
    }
    VAR_0 = VAR_2;


    FUNC_3(VAR_5);

    return VAR_4;
}
