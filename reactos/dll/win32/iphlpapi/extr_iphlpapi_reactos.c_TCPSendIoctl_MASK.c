
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_4__ {scalar_t__ Status; scalar_t__ Information; } ;
typedef scalar_t__* PULONG ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int LPVOID ;
typedef TYPE_1__ IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,int *,int ,int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ,int *,TYPE_1__*,int ,int ,int,int ,int ,int *,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int *,int *,TYPE_1__*,int ,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int *) ;
 int VAR_8 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

DWORD FUNC_11(HANDLE VAR_12, DWORD VAR_13, LPVOID VAR_14, PULONG VAR_15, LPVOID VAR_16, PULONG VAR_17)
{
    BOOL VAR_18 = VAR_1;
    HANDLE VAR_19;
    IO_STATUS_BLOCK VAR_20;
    NTSTATUS VAR_21;




    if (VAR_12 == VAR_7)
    {
        UNICODE_STRING VAR_22 = FUNC_9(L"\\Device\\Ip");
        OBJECT_ATTRIBUTES VAR_23;

        FUNC_2("Using the handle hack\n");
        VAR_18 = VAR_11;

        FUNC_4(&VAR_23,
                                   &VAR_22,
                                   VAR_8,
                                   ((void*)0),
                                   ((void*)0));

        VAR_21 = FUNC_6(&VAR_12, VAR_6, &VAR_23,
                              &VAR_20, 0, VAR_2, VAR_4 | VAR_5, VAR_3,
                              0, ((void*)0), 0);
        if (!FUNC_5(VAR_21))
        {
          return FUNC_10(VAR_21);
        }
    }


    VAR_19 = FUNC_1(((void*)0), VAR_11, VAR_1, ((void*)0));
    if (VAR_19 == ((void*)0))
    {

        if (VAR_18)
        {
            FUNC_0(VAR_12);
        }
        return FUNC_3();
    }


    VAR_20.Status = VAR_10;
    VAR_20.Information = 0;
    VAR_21 = FUNC_7(VAR_12, VAR_19, ((void*)0), ((void*)0), &VAR_20, VAR_13, VAR_14, *VAR_15, VAR_16, *VAR_17);
    if (VAR_21 == VAR_9)
    {
        FUNC_8(VAR_19, VAR_1, ((void*)0));
        VAR_21 = VAR_20.Status;
    }


    FUNC_0(VAR_19);
    *VAR_17 = VAR_20.Information;


    if (VAR_18)
    {
        FUNC_0(VAR_12);
    }


    if (!FUNC_5(VAR_21))
    {
        return FUNC_10(VAR_21);
    }

    return VAR_0;
}
