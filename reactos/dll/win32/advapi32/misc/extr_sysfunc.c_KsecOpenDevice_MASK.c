
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int *,int *,int,int ) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_6()
{
    UNICODE_STRING VAR_9 = FUNC_5(L"\\Device\\KsecDD");
    OBJECT_ATTRIBUTES VAR_10;
    IO_STATUS_BLOCK VAR_11;
    HANDLE VAR_12;
    NTSTATUS VAR_13;

    FUNC_0(&VAR_10,
                               &VAR_9,
                               VAR_6,
                               ((void*)0),
                               ((void*)0));
    VAR_13 = FUNC_4(&VAR_12,
                        VAR_0 | VAR_8,
                        &VAR_10,
                        &VAR_11,
                        VAR_2 | VAR_3 | VAR_1,
                        VAR_4);
    if (!FUNC_2(VAR_13))
    {
        return VAR_13;
    }

    if (FUNC_1(&VAR_5, VAR_12, ((void*)0)) != ((void*)0))
    {
        FUNC_3(VAR_12);
    }

    return VAR_7;
}
