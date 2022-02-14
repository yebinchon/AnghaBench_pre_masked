
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {int hwndSelf; } ;
struct TYPE_8__ {scalar_t__ itemHeight; } ;
struct TYPE_7__ {scalar_t__ cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ MEASUREITEMSTRUCT ;
typedef int LRESULT ;
typedef int HDC ;
typedef TYPE_3__ COMBOEX_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_4 (COMBOEX_INFO const *VAR_1, MEASUREITEMSTRUCT *VAR_2)
{
    static const WCHAR VAR_3[] = { 'W', 0 };
    SIZE VAR_4;
    HDC VAR_5;

    VAR_5 = FUNC_0 (0);
    FUNC_1 (VAR_5, VAR_3, 1, &VAR_4);
    FUNC_2 (0, VAR_5);
    VAR_2->itemHeight = VAR_4.cy + VAR_0;

    FUNC_3("adjusted height hwnd=%p, height=%d\n",
   VAR_1->hwndSelf, VAR_2->itemHeight);

    return 0;
}
