
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int,int *,int *,int,int) ;
 int VAR_7 ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;

HANDLE FUNC_7(WCHAR* VAR_9)
{
    UNICODE_STRING VAR_10;
    OBJECT_ATTRIBUTES VAR_11;
    IO_STATUS_BLOCK VAR_12;
    NTSTATUS VAR_13;
    HANDLE VAR_14;

    if (!FUNC_3(VAR_9, &VAR_10, ((void*)0), ((void*)0)))
    {
        FUNC_5("Unable to translate %s to Nt path\n", FUNC_6(VAR_9));
        return ((void*)0);
    }


    FUNC_0(&VAR_11, &VAR_10, VAR_7, ((void*)0), ((void*)0));
    VAR_13 = FUNC_2(&VAR_14,
                        VAR_8 |
                        VAR_2 |
                        VAR_3 |
                        VAR_0,
                        &VAR_11,
                        &VAR_12,
                        VAR_5 | VAR_4,
                        VAR_6 |
                        VAR_1);

    FUNC_4(&VAR_10);

    if (!FUNC_1(VAR_13))
        return ((void*)0);

    return VAR_14;
}
