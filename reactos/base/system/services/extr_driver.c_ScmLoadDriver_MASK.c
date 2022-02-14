
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
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static
DWORD
FUNC_13(PSERVICE VAR_6)
{
    NTSTATUS VAR_7 = VAR_4;
    BOOLEAN VAR_8 = VAR_1;
    PWSTR VAR_9;
    UNICODE_STRING VAR_10;



    VAR_9 = FUNC_3(FUNC_2(),
                              VAR_2,
                              (52 + FUNC_12(VAR_6->lpServiceName) + 1) * sizeof(WCHAR));
    if (VAR_9 == ((void*)0))
        return VAR_0;

    FUNC_11(VAR_9,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
    FUNC_10(VAR_9,
           VAR_6->lpServiceName);

    FUNC_8(&VAR_10,
                         VAR_9);

    FUNC_0("  Path: %wZ\n", &VAR_10);


    VAR_7 = FUNC_7(VAR_3,
                                VAR_5,
                                VAR_1,
                                &VAR_8);
    if (!FUNC_5(VAR_7))
    {

        FUNC_1("SERVICES: Cannot acquire driver-loading privilege, Status = 0x%08lx\n", VAR_7);
        goto done;
    }

    VAR_7 = FUNC_6(&VAR_10);


    FUNC_7(VAR_3,
                       VAR_8,
                       VAR_1,
                       &VAR_8);

done:
    FUNC_4(FUNC_2(), 0, VAR_9);
    return FUNC_9(VAR_7);
}
