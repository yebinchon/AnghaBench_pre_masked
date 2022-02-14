
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_7__ {int hwndSelf; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ PAGER_INFO ;
typedef int LRESULT ;
typedef int HWND ;
typedef scalar_t__ HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_5 (const PAGER_INFO* VAR_1, HDC VAR_2)
{
    POINT VAR_3, VAR_4;
    HWND VAR_5;
    LRESULT VAR_6;

    VAR_3.x = 0;
    VAR_3.y = 0;
    VAR_5 = FUNC_0(VAR_1->hwndSelf);
    FUNC_1(VAR_1->hwndSelf, VAR_5, &VAR_3, 1);
    FUNC_2 (VAR_2, VAR_3.x, VAR_3.y, &VAR_4);
    VAR_6 = FUNC_3 (VAR_5, VAR_0, (WPARAM)VAR_2, 0);
    FUNC_4 (VAR_2, VAR_4.x, VAR_4.y, 0);

    return VAR_6;
}
