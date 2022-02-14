
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int lpServiceName; } ;
typedef int * PWSTR ;
typedef TYPE_1__* PSERVICE ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static
DWORD
FUNC_13(PSERVICE VAR_8)
{
    NTSTATUS VAR_9 = VAR_6;
    BOOLEAN VAR_10 = VAR_2;
    PWSTR VAR_11;
    UNICODE_STRING VAR_12;
    DWORD VAR_13;



    VAR_11 = FUNC_3(FUNC_2(),
                              VAR_3,
                              (52 + FUNC_12(VAR_8->lpServiceName) + 1) * sizeof(WCHAR));
    if (VAR_11 == ((void*)0))
        return VAR_1;

    FUNC_11(VAR_11,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
    FUNC_10(VAR_11,
           VAR_8->lpServiceName);

    FUNC_8(&VAR_12,
                         VAR_11);

    FUNC_0("  Path: %wZ\n", &VAR_12);


    VAR_9 = FUNC_7(VAR_4,
                                VAR_7,
                                VAR_2,
                                &VAR_10);
    if (!FUNC_5(VAR_9))
    {

        FUNC_1("SERVICES: Cannot acquire driver-unloading privilege, Status = 0x%08lx\n", VAR_9);
        VAR_13 = FUNC_9(VAR_9);
        goto done;
    }

    VAR_9 = FUNC_6(&VAR_12);
    if (VAR_9 == VAR_5)
        VAR_13 = VAR_0;
    else
        VAR_13 = FUNC_9(VAR_9);


    FUNC_7(VAR_4,
                       VAR_10,
                       VAR_2,
                       &VAR_10);

done:
    FUNC_4(FUNC_2(), 0, VAR_11);
    return VAR_13;
}
