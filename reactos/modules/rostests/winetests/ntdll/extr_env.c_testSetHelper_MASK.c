
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bvar ;
typedef int bval2 ;
typedef int bval1 ;
typedef int WCHAR ;
struct TYPE_6__ {int Length; int MaximumLength; int * Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LPWSTR ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *,int,int *,char const*,int) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_1__*) ;
 int * FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(LPWSTR* VAR_0, const char* VAR_1, const char* VAR_2, NTSTATUS VAR_3, NTSTATUS VAR_4)
{
    WCHAR VAR_5[256], VAR_6[256], VAR_7[256];
    UNICODE_STRING VAR_8;
    UNICODE_STRING VAR_9;
    NTSTATUS VAR_10;

    VAR_8.Length = FUNC_7(VAR_1) * sizeof(WCHAR);
    VAR_8.MaximumLength = VAR_8.Length + sizeof(WCHAR);
    VAR_8.Buffer = VAR_5;
    FUNC_3( VAR_5, sizeof(VAR_5), ((void*)0), VAR_1, FUNC_7(VAR_1)+1 );
    if (VAR_2)
    {
        VAR_9.Length = FUNC_7(VAR_2) * sizeof(WCHAR);
        VAR_9.MaximumLength = VAR_9.Length + sizeof(WCHAR);
        VAR_9.Buffer = VAR_6;
        FUNC_3( VAR_6, sizeof(VAR_6), ((void*)0), VAR_2, FUNC_7(VAR_2)+1 );
    }
    VAR_10 = FUNC_5(VAR_0, &VAR_8, VAR_2 ? &VAR_9 : ((void*)0));
    FUNC_2(VAR_10 == VAR_3 || (VAR_4 && VAR_10 == VAR_4), "Setting var %s=%s (%x/%x)\n", VAR_1, VAR_2, VAR_10, VAR_3);
    if (VAR_10 == 129)
    {
        VAR_9.Length = 0;
        VAR_9.MaximumLength = sizeof(VAR_7);
        VAR_9.Buffer = VAR_7;
        VAR_10 = FUNC_4(*VAR_0, &VAR_8, &VAR_9);
        switch (VAR_10)
        {
        case 129:
            FUNC_2(FUNC_1(VAR_6, VAR_7) == 0, "Cannot get value written to environment\n");
            break;
        case 128:
            FUNC_2(VAR_2 == ((void*)0) ||
               FUNC_0(FUNC_6(VAR_1,'=') != ((void*)0)),
               "Couldn't find variable, but didn't delete it. val = %s\n", VAR_2);
            break;
        default:
            FUNC_2(0, "Wrong ret %u for %s\n", VAR_10, VAR_1);
            break;
        }
    }
}
