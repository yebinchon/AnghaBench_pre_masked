
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dwStyle; int Self; int Buddy; } ;
typedef TYPE_1__ UPDOWN_INFO ;
struct TYPE_8__ {int right; int left; } ;
typedef TYPE_2__ RECT ;
typedef int POINT ;
typedef int HTHEME ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_5 (const UPDOWN_INFO *VAR_4, HDC VAR_5)
{
    RECT VAR_6, VAR_7;
    HTHEME VAR_8 = FUNC_3 (VAR_4->Buddy);
    if (!VAR_8) return VAR_0;

    FUNC_2 (VAR_4->Buddy, &VAR_6);
    FUNC_4 (((void*)0), VAR_4->Self, (POINT*)&VAR_6, 2);
    FUNC_1 (VAR_4->Self, &VAR_7);

    if (VAR_4->dwStyle & VAR_2)
        VAR_6.left = VAR_7.left;
    else if (VAR_4->dwStyle & VAR_3)
        VAR_6.right = VAR_7.right;

    FUNC_0 (VAR_8, VAR_5, 0, 0, &VAR_6, ((void*)0));
    return VAR_1;
}
