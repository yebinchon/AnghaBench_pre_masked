
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* Next; int StandardName; scalar_t__ Description; } ;
struct TYPE_5__ {int StandardName; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef TYPE_2__* PTIMEZONE_ENTRY ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_3(HWND VAR_3)
{
    TIME_ZONE_INFORMATION VAR_4;
    PTIMEZONE_ENTRY VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;

    FUNC_0(&VAR_4);

    VAR_6 = 0;
    VAR_7 = 0;
    VAR_5 = VAR_2;
    while (VAR_5 != ((void*)0))
    {
        FUNC_1(VAR_3,
                     VAR_0,
                     0,
                     (LPARAM)VAR_5->Description);

        if (!FUNC_2(VAR_5->StandardName, VAR_4.StandardName))
            VAR_6 = VAR_7;

        VAR_7++;
        VAR_5 = VAR_5->Next;
    }

    FUNC_1(VAR_3,
                 VAR_1,
                 (WPARAM)VAR_6,
                 0);
}
