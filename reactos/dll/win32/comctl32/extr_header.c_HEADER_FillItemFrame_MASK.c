
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hwndSelf; } ;
struct TYPE_5__ {scalar_t__ bDown; } ;
typedef int RECT ;
typedef scalar_t__ HTHEME ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDC ;
typedef int HBRUSH ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int,int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(HEADER_INFO *VAR_4, HDC VAR_5, RECT *VAR_6, const HEADER_ITEM *VAR_7, BOOL VAR_8)
{
    HTHEME VAR_9 = FUNC_6 (VAR_4->hwndSelf);

    if (VAR_9) {
        int VAR_10 = (VAR_7->bDown) ? VAR_2 : (VAR_8 ? VAR_0 : VAR_1);
        FUNC_2 (VAR_9, VAR_5, VAR_3, VAR_10, VAR_6, ((void*)0));
        FUNC_5 (VAR_9, VAR_5, VAR_3, VAR_10, VAR_6, VAR_6);
    }
    else
    {
        HBRUSH VAR_11 = FUNC_0(FUNC_4(VAR_5));
        FUNC_3(VAR_5, VAR_6, VAR_11);
        FUNC_1(VAR_11);
    }
}
