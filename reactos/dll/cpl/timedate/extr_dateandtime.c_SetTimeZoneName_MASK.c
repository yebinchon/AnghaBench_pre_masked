
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {int DaylightName; int StandardName; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_5)
{
    TIME_ZONE_INFORMATION VAR_6;
    WCHAR VAR_7[128];
    WCHAR VAR_8[128];
    WCHAR VAR_9[128];
    DWORD VAR_10;

    VAR_10 = FUNC_0(&VAR_6);

    FUNC_1(VAR_4, VAR_2, VAR_8, 128);

    switch (VAR_10)
    {
        case 129:
        case 128:
            FUNC_3(VAR_9, VAR_6.StandardName);
            break;

        case 131:
            FUNC_3(VAR_9, VAR_6.DaylightName);
            break;

        case 130:
        default:
            FUNC_1(VAR_4, VAR_1, VAR_9, 128);
            break;
    }

    FUNC_4(VAR_7, VAR_8, VAR_9);
    FUNC_2(VAR_5, VAR_0, VAR_3, 0, (LPARAM)VAR_7);
}
