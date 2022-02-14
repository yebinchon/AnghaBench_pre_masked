
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef int * HDC ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__ const*,int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (const TOOLTIPS_INFO *VAR_0, HDC VAR_1)
{
    HDC VAR_2;
    PAINTSTRUCT VAR_3;

    VAR_2 = (VAR_1 == ((void*)0)) ? FUNC_0 (VAR_0->hwndSelf, &VAR_3) : VAR_1;
    FUNC_2 (VAR_0, VAR_2);
    if (!VAR_1)
 FUNC_1 (VAR_0->hwndSelf, &VAR_3);
    return 0;
}
