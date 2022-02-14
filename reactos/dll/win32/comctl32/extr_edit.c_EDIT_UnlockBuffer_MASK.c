
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_count; int * text; scalar_t__ hloc32W; int hwndSelf; } ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(EDITSTATE *VAR_0, BOOL VAR_1)
{

    if (!FUNC_1(VAR_0->hwndSelf))
    {
        FUNC_3("edit hwnd %p already destroyed\n", VAR_0->hwndSelf);
        return;
    }

    if (!VAR_0->lock_count)
    {
        FUNC_0("lock_count == 0 ... please report\n");
        return;
    }

    if (!VAR_0->text)
    {
        FUNC_0("es->text == 0 ... please report\n");
        return;
    }

    if (VAR_1 || (VAR_0->lock_count == 1))
    {
        if (VAR_0->hloc32W)
        {
            FUNC_2(VAR_0->hloc32W);
            VAR_0->text = ((void*)0);
        }
        else
        {
            FUNC_0("no buffer ... please report\n");
            return;
        }

    }

    VAR_0->lock_count--;
}
