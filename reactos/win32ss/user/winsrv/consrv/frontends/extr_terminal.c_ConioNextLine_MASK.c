
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_11__ {scalar_t__ Top; scalar_t__ Bottom; scalar_t__ Right; scalar_t__ Left; } ;
struct TYPE_8__ {scalar_t__ Y; } ;
struct TYPE_9__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_10__ {scalar_t__ VirtualY; TYPE_1__ CursorPosition; TYPE_2__ ScreenBufferSize; } ;
typedef int * PUINT ;
typedef TYPE_3__* PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_4__* PSMALL_RECT ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static VOID
FUNC_1(PTEXTMODE_SCREEN_BUFFER VAR_0, PSMALL_RECT VAR_1, PUINT VAR_2)
{

    if (++VAR_0->CursorPosition.Y == VAR_0->ScreenBufferSize.Y)
    {
        VAR_0->CursorPosition.Y--;
        if (++VAR_0->VirtualY == VAR_0->ScreenBufferSize.Y)
        {
            VAR_0->VirtualY = 0;
        }
        (*VAR_2)++;
        FUNC_0(VAR_0);
        if (VAR_1->Top != 0)
        {
            VAR_1->Top--;
        }
    }
    VAR_1->Left = 0;
    VAR_1->Right = VAR_0->ScreenBufferSize.X - 1;
    VAR_1->Bottom = VAR_0->CursorPosition.Y;
}
