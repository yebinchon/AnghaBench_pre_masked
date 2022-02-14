
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UNICODE_STRING ;
typedef scalar_t__ SHORT ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (scalar_t__*,char*,int) ;

BOOLEAN
FUNC_9(SHORT VAR_4)
{
    WCHAR VAR_5[8];
    NTSTATUS VAR_6;
    BOOLEAN VAR_7;
    UNICODE_STRING VAR_8;
    HANDLE VAR_9;
    OBJECT_ATTRIBUTES VAR_10;


    FUNC_8(VAR_5, L"\\??\\X:", (sizeof(L"\\??\\X:") / sizeof(WCHAR)));
    VAR_5[4] = VAR_4 + L'A';
    VAR_5[6] = VAR_3;


    FUNC_7(&VAR_8, VAR_5);
    FUNC_2(&VAR_10,
                               &VAR_8,
                               VAR_1,
                               ((void*)0),
                               ((void*)0));


    if (!FUNC_0(((void*)0)))
    {
        return VAR_0;
    }


    VAR_6 = FUNC_6(&VAR_9,
                                      VAR_2,
                                      &VAR_10);

    FUNC_1();

    if (!FUNC_4(VAR_6))
    {
        return VAR_0;
    }


    VAR_6 = FUNC_3(VAR_9, &VAR_7);
    FUNC_5(VAR_9);

    if (!FUNC_4(VAR_6))
    {
        return VAR_0;
    }

    return VAR_7;
}
