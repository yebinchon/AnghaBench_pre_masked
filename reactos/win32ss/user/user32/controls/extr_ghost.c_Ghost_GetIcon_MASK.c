
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndTarget; } ;
typedef int INT ;
typedef int HWND ;
typedef int * HICON ;
typedef TYPE_1__ GHOST_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;



__attribute__((used)) static HICON
FUNC_2(HWND VAR_2, INT VAR_3)
{
    GHOST_DATA *VAR_4 = FUNC_1(VAR_2);
    HICON VAR_5 = ((void*)0);

    if (!VAR_4)
        return ((void*)0);


    switch (VAR_3)
    {
        case 129:
        {
            VAR_5 = (HICON)FUNC_0(VAR_4->hwndTarget, VAR_0);
            break;
        }

        case 128:
        {
            VAR_5 = (HICON)FUNC_0(VAR_4->hwndTarget, VAR_1);
            break;
        }
    }

    return VAR_5;
}
