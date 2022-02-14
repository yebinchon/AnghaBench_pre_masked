
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_3 (int *,char*) ;
 int VAR_8 ;
 int FUNC_4 (char*) ;

HANDLE FUNC_5(char* VAR_9, UNICODE_STRING* VAR_10, int VAR_11)
{
    OBJECT_ATTRIBUTES VAR_12;
    IO_STATUS_BLOCK VAR_13;
    NTSTATUS VAR_14;
    HANDLE VAR_15 = ((void*)0);
    FUNC_3(VAR_10, VAR_9);
    if (VAR_11)
    {
        FUNC_0(&VAR_12, VAR_10,
            VAR_7, ((void*)0), ((void*)0));
        VAR_14 = FUNC_2(&VAR_15,
                    VAR_8 | VAR_2 | VAR_3 | VAR_0,
                    &VAR_12, &VAR_13,
                    VAR_5 | VAR_4,
                    VAR_6 | VAR_1);
        if (!FUNC_1(VAR_14))
        {
            FUNC_4("Failed opening the file, using a NULL handle\n");
            VAR_15 = ((void*)0);
        }
    }
    return VAR_15;
}
