
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ Length; char* Buffer; } ;
typedef TYPE_1__* PLSA_UNICODE_STRING ;
typedef int LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static
BOOL
FUNC_5(PLSA_UNICODE_STRING VAR_2)
{
    DWORD VAR_3 = VAR_0 + 1;
    BOOL VAR_4;
    LPWSTR VAR_5;

    if (VAR_2 == ((void*)0) || VAR_2->Length == 0 || VAR_2->Buffer == ((void*)0))
        return VAR_1;

    VAR_5 = FUNC_2(FUNC_1(), 0, VAR_3 * sizeof(WCHAR));
    VAR_4 = FUNC_0(VAR_5, &VAR_3);
    if (VAR_4 && (VAR_2->Buffer[0] == '\\') && (VAR_2->Buffer[1] == '\\'))
        VAR_2 += 2;
    VAR_4 = VAR_4 && !FUNC_4(VAR_2->Buffer, VAR_5);
    FUNC_3(FUNC_1(), 0, VAR_5);

    return VAR_4;
}
