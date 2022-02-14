
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PWCHAR ;
typedef int * PINICACHE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int *,int *,int ,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;

NTSTATUS
FUNC_7(
    PINICACHE *VAR_6,
    PWCHAR VAR_7,
    BOOLEAN VAR_8)
{
    NTSTATUS VAR_9;
    UNICODE_STRING VAR_10;
    OBJECT_ATTRIBUTES VAR_11;
    IO_STATUS_BLOCK VAR_12;
    HANDLE VAR_13;

    *VAR_6 = ((void*)0);


    FUNC_6(&VAR_10, VAR_7);

    FUNC_2(&VAR_11,
                               &VAR_10,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));

    VAR_9 = FUNC_5(&VAR_13,
                        VAR_0 | VAR_5,
                        &VAR_11,
                        &VAR_12,
                        VAR_2,
                        VAR_3 | VAR_1);
    if (!FUNC_3(VAR_9))
    {
        FUNC_0("NtOpenFile() failed (Status %lx)\n", VAR_9);
        return VAR_9;
    }

    FUNC_0("NtOpenFile() successful\n");

    VAR_9 = FUNC_1(VAR_6, VAR_13, VAR_8);


    FUNC_4(VAR_13);
    return VAR_9;
}
