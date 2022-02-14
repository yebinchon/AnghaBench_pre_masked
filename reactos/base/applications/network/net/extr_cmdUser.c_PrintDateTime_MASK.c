
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_10__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_8__ {int HighPart; int LowPart; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef int SYSTEMTIME ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef TYPE_3__ FILETIME ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ,int *,int *,int *,int ) ;
 int FUNC_5 (int ,int ,int *,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
VOID
FUNC_7(DWORD VAR_4)
{
    LARGE_INTEGER VAR_5;
    FILETIME VAR_6;
    SYSTEMTIME VAR_7;
    WCHAR VAR_8[80];
    WCHAR VAR_9[80];

    FUNC_6(VAR_4, &VAR_5);
    VAR_6.dwLowDateTime = VAR_5.u.LowPart;
    VAR_6.dwHighDateTime = VAR_5.u.HighPart;
    FUNC_2(&VAR_6, &VAR_6);
    FUNC_3(&VAR_6, &VAR_7);

    FUNC_4(VAR_1,
                   VAR_0,
                   &VAR_7,
                   ((void*)0),
                   VAR_8,
                   FUNC_0(VAR_8));

    FUNC_5(VAR_1,
                   VAR_3,
                   &VAR_7,
                   ((void*)0),
                   VAR_9,
                   FUNC_0(VAR_9));

    FUNC_1(VAR_2, L"%s %s", VAR_8, VAR_9);
}
