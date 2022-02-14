
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int ANSI_STRING ;


 int FUNC_0 (int ,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int ) ;

PVOID
FUNC_5(PVOID * VAR_1, const PCHAR VAR_2)
{
    NTSTATUS VAR_3;
    ANSI_STRING VAR_4;
    PVOID VAR_5;


    VAR_3 = FUNC_1(((void*)0), ((void*)0), &VAR_0, VAR_1);
    if (!FUNC_2(VAR_3))
    {
        FUNC_4(VAR_3);
    }

    FUNC_3(&VAR_4, VAR_2);


    VAR_3 = FUNC_0(*VAR_1, &VAR_4,
                                    0, &VAR_5);
    if (!FUNC_2(VAR_3))
    {
        FUNC_4(VAR_3);
    }


    return VAR_5;
}
