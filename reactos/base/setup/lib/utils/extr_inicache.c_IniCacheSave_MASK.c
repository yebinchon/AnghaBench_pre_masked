
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PWCHAR ;
typedef int PINICACHE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int *,int *,int *,int ,int ,int ,int,int *,int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,int ) ;
 int VAR_7 ;

NTSTATUS
FUNC_7(
    PINICACHE VAR_8,
    PWCHAR VAR_9)
{
    NTSTATUS VAR_10;
    UNICODE_STRING VAR_11;
    OBJECT_ATTRIBUTES VAR_12;
    IO_STATUS_BLOCK VAR_13;
    HANDLE VAR_14;


    FUNC_6(&VAR_11, VAR_9);

    FUNC_2(&VAR_12,
                               &VAR_11,
                               VAR_6,
                               ((void*)0),
                               ((void*)0));

    VAR_10 = FUNC_5(&VAR_14,
                          VAR_1 | VAR_7,
                          &VAR_12,
                          &VAR_13,
                          ((void*)0),
                          VAR_0,
                          0,
                          VAR_4,
                          VAR_5 | VAR_3 | VAR_2,
                          ((void*)0),
                          0);
    if (!FUNC_3(VAR_10))
    {
        FUNC_0("NtCreateFile() failed (Status %lx)\n", VAR_10);
        return VAR_10;
    }

    VAR_10 = FUNC_1(VAR_8, VAR_14);


    FUNC_4(VAR_14);
    return VAR_10;
}
