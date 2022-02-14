
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ uNumTools; } ;
struct TYPE_9__ {scalar_t__ cbSize; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_3 (const TOOLTIPS_INFO *VAR_3, TTTOOLINFOW *VAR_4, BOOL VAR_5)
{
    INT VAR_6;
    HWND VAR_7;

    if (!VAR_4) return VAR_0;
    if (VAR_4->cbSize < VAR_2)
 return VAR_0;
    if (VAR_3->uNumTools == 0)
 return VAR_0;

    VAR_6 = FUNC_1 (VAR_3, VAR_4);
    if (VAR_6 == -1)
 return VAR_0;

    FUNC_2("tool %d\n", VAR_6);

    VAR_7 = VAR_4->hwnd;
    FUNC_0 (VAR_3, VAR_6, VAR_4, VAR_5);
    VAR_4->hwnd = VAR_7;

    return VAR_1;
}
