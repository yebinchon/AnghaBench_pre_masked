
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; } ;
typedef TYPE_1__ NATIVEFONT_INFO ;
typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD_PTR ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_2 (HWND VAR_0)
{
    NATIVEFONT_INFO *VAR_1;


    VAR_1 = FUNC_0 (sizeof(NATIVEFONT_INFO));
    FUNC_1 (VAR_0, 0, (DWORD_PTR)VAR_1);


    VAR_1->hwndSelf = VAR_0;

    return 0;
}
