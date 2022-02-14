
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hwnd; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__ const*,int) ;
 int FUNC_3 (TYPE_1__ const*,int,int *,int *) ;

__attribute__((used)) static inline void FUNC_4(const TAB_INFO *VAR_1, int VAR_2)
{
    if (VAR_2 == -1) return;

    if (FUNC_0 (VAR_1->hwnd))
    {
        RECT VAR_3;
        FUNC_3(VAR_1, VAR_2, &VAR_3, ((void*)0));
        FUNC_1 (VAR_1->hwnd, &VAR_3, VAR_0);
    }
    else
        FUNC_2(VAR_1, VAR_2);
}
