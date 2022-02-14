
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cbSize; } ;
struct TYPE_4__ {TYPE_3__ ti; int pt; int hwnd; } ;
typedef int TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef TYPE_1__* LPTTHITTESTINFOW ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,TYPE_3__*,int ) ;
 int FUNC_1 (int const*,int ,int *) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_3 (const TOOLTIPS_INFO *VAR_3, LPTTHITTESTINFOW VAR_4,
                   BOOL VAR_5)
{
    INT VAR_6;

    if (VAR_4 == 0)
 return VAR_0;

    VAR_6 = FUNC_1 (VAR_3, VAR_4->hwnd, &VAR_4->pt);
    if (VAR_6 == -1)
 return VAR_0;

    FUNC_2("tool %d\n", VAR_6);


    if (VAR_4->ti.cbSize >= VAR_2)
        FUNC_0 (VAR_3, VAR_6, &VAR_4->ti, VAR_5);

    return VAR_1;
}
