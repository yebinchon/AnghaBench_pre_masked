
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_8__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_6__ {int HighPart; int LowPart; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef int SYSTEMTIME ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef TYPE_3__ FILETIME ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,int ,int *,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
VOID
FUNC_5(DWORD VAR_3)
{
    LARGE_INTEGER VAR_4;
    FILETIME VAR_5;
    SYSTEMTIME VAR_6;
    WCHAR VAR_7[80];

    FUNC_4(VAR_3, &VAR_4);
    VAR_5.dwLowDateTime = VAR_4.u.LowPart;
    VAR_5.dwHighDateTime = VAR_4.u.HighPart;
    FUNC_2(&VAR_5, &VAR_6);

    FUNC_3(VAR_0,
                   VAR_2,
                   &VAR_6,
                   ((void*)0),
                   VAR_7,
                   FUNC_0(VAR_7));

    FUNC_1(VAR_1, L"%s", VAR_7);
}
