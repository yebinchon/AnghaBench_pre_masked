
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_17__ {scalar_t__ Information; } ;
struct TYPE_16__ {scalar_t__ QuadPart; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int PIO_STATUS_BLOCK ;
typedef scalar_t__ NTSTATUS ;
typedef int LPVOID ;
typedef int (* LPPROGRESS_ROUTINE ) (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int,int ,int ,int ) ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_6__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int ,int *,int,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int *,int ,int *,scalar_t__,int *,int *) ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int,int ,int ,int ) ;

__attribute__((used)) static NTSTATUS
FUNC_9 (
    HANDLE VAR_11,
    HANDLE VAR_12,
    LARGE_INTEGER VAR_13,
    LPPROGRESS_ROUTINE VAR_14,
    LPVOID VAR_15,
    BOOL *VAR_16,
    BOOL *VAR_17
)
{
    NTSTATUS VAR_18;
    IO_STATUS_BLOCK VAR_19;
    UCHAR *VAR_20 = ((void*)0);
    SIZE_T VAR_21 = 0x10000;
    LARGE_INTEGER VAR_22;
    DWORD VAR_23;
    DWORD VAR_24;
    BOOL VAR_25;

    *VAR_17 = VAR_2;
    VAR_18 = FUNC_1(FUNC_2(),
                                      (PVOID *)&VAR_20,
                                      0,
                                      &VAR_21,
                                      VAR_5 | VAR_3,
                                      VAR_6);

    if (FUNC_0(VAR_18))
    {
        VAR_22.QuadPart = 0;
        VAR_25 = VAR_2;
        VAR_23 = VAR_1;
        while (! VAR_25 &&
                FUNC_0(VAR_18) &&
                (((void*)0) == VAR_16 || ! *VAR_16))
        {
            if (((void*)0) != VAR_14)
            {
                VAR_24 = (*VAR_14)(VAR_13,
                                                      VAR_22,
                                                      VAR_13,
                                                      VAR_22,
                                                      0,
                                                      VAR_23,
                                                      VAR_11,
                                                      VAR_12,
                                                      VAR_15);
                switch (VAR_24)
                {
                case 131:
                    FUNC_6("Progress callback requested cancel\n");
                    VAR_18 = VAR_8;
                    break;
                case 128:
                    FUNC_6("Progress callback requested stop\n");
                    VAR_18 = VAR_8;
                    *VAR_17 = VAR_10;
                    break;
                case 129:
                    VAR_14 = ((void*)0);
                    break;
                case 130:
                default:
                    break;
                }
                VAR_23 = VAR_0;
            }
            if (FUNC_0(VAR_18))
            {
                VAR_18 = FUNC_4(VAR_11,
                                     ((void*)0),
                                     ((void*)0),
                                     ((void*)0),
                                     (PIO_STATUS_BLOCK)&VAR_19,
                                     VAR_20,
                                     VAR_21,
                                     ((void*)0),
                                     ((void*)0));



                if (FUNC_0(VAR_18) && VAR_19.Information == 0)
                {
                    VAR_18 = VAR_7;
                }
                if (FUNC_0(VAR_18) && (((void*)0) == VAR_16 || ! *VAR_16))
                {
                    VAR_18 = FUNC_5(VAR_12,
                                          ((void*)0),
                                          ((void*)0),
                                          ((void*)0),
                                          (PIO_STATUS_BLOCK)&VAR_19,
                                          VAR_20,
                                          VAR_19.Information,
                                          ((void*)0),
                                          ((void*)0));
                    if (FUNC_0(VAR_18))
                    {
                        VAR_22.QuadPart += VAR_19.Information;
                    }
                    else
                    {
                        FUNC_7("Error 0x%08x reading writing to dest\n", VAR_18);
                    }
                }
                else if (!FUNC_0(VAR_18))
                {
                    if (VAR_7 == VAR_18)
                    {
                        VAR_25 = VAR_10;
                        VAR_18 = VAR_9;
                    }
                    else
                    {
                        FUNC_7("Error 0x%08x reading from source\n", VAR_18);
                    }
                }
            }
        }

        if (! VAR_25 && (((void*)0) != VAR_16 && *VAR_16))
        {
            FUNC_6("User requested cancel\n");
            VAR_18 = VAR_8;
        }

        FUNC_3(FUNC_2(),
                            (PVOID *)&VAR_20,
                            &VAR_21,
                            VAR_4);
    }
    else
    {
        FUNC_6("Error 0x%08x allocating buffer of %lu bytes\n", VAR_18, VAR_21);
    }

    return VAR_18;
}
