
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ dwSelectedProfileIndex; int dwProfileCount; } ;
typedef TYPE_1__* PPROFILEDATA ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static
VOID
FUNC_2(
    HWND VAR_8,
    PPROFILEDATA VAR_9)
{
    FUNC_0(FUNC_1(VAR_8, VAR_4), (VAR_9->dwSelectedProfileIndex != (DWORD)-1) ? VAR_7 : VAR_0);
    FUNC_0(FUNC_1(VAR_8, VAR_1), (VAR_9->dwSelectedProfileIndex != (DWORD)-1) ? VAR_7 : VAR_0);
    FUNC_0(FUNC_1(VAR_8, VAR_5), (VAR_9->dwSelectedProfileIndex != (DWORD)-1) ? VAR_7 : VAR_0);
    FUNC_0(FUNC_1(VAR_8, VAR_2), (VAR_9->dwSelectedProfileIndex != (DWORD)-1) ? VAR_7 : VAR_0);

    if (VAR_9->dwProfileCount < 2)
    {
        FUNC_0(FUNC_1(VAR_8, VAR_6), VAR_0);
        FUNC_0(FUNC_1(VAR_8, VAR_3), VAR_0);
    }
    else
    {
        FUNC_0(FUNC_1(VAR_8, VAR_6),
                     (VAR_9->dwSelectedProfileIndex > 0) ? VAR_7 : VAR_0);
        FUNC_0(FUNC_1(VAR_8, VAR_3),
                     (VAR_9->dwSelectedProfileIndex < VAR_9->dwProfileCount - 1) ? VAR_7 : VAR_0);
    }
}
