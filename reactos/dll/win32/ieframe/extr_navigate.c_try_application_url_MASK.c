
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int exec_info ;
typedef unsigned char WCHAR ;
struct TYPE_4__ {int cbSize; int nShow; int lpFile; } ;
typedef TYPE_1__ SHELLEXECUTEINFOW ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,int ,int ,unsigned char*,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,unsigned char*,int *) ;
 scalar_t__ FUNC_5 (int ,unsigned char const*,int *,scalar_t__*,int *,int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_10(LPCWSTR VAR_6)
{
    SHELLEXECUTEINFOW VAR_7;
    WCHAR VAR_8[64];
    HKEY VAR_9;
    DWORD VAR_10, VAR_11;
    HRESULT VAR_12;

    static const WCHAR VAR_13[] = {'U','R','L',' ','P','r','o','t','o','c','o','l',0};

    VAR_12 = FUNC_1(VAR_6, VAR_3, 0, VAR_8, FUNC_0(VAR_8), ((void*)0), 0);
    if(FUNC_2(VAR_12))
        return VAR_1;

    VAR_10 = FUNC_4(VAR_2, VAR_8, &VAR_9);
    if(VAR_10 != VAR_0)
        return VAR_1;

    VAR_10 = FUNC_5(VAR_9, VAR_13, ((void*)0), &VAR_11, ((void*)0), ((void*)0));
    FUNC_3(VAR_9);
    if(VAR_10 != VAR_0 || VAR_11 != VAR_4)
        return VAR_1;

    FUNC_7("opening application %s\n", FUNC_8(VAR_8));

    FUNC_9(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.cbSize = sizeof(VAR_7);
    VAR_7.lpFile = VAR_6;
    VAR_7.nShow = VAR_5;

    return FUNC_6(&VAR_7);
}
