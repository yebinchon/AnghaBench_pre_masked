
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_11__ {int UnicodeChar; } ;
struct TYPE_13__ {int Attributes; TYPE_3__ Char; } ;
struct TYPE_10__ {scalar_t__ X; } ;
struct TYPE_9__ {int Y; } ;
struct TYPE_12__ {int ScreenDefaultAttrib; TYPE_2__ ScreenBufferSize; TYPE_1__ CursorPosition; } ;
typedef scalar_t__ SHORT ;
typedef TYPE_4__* PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_5__* PCHAR_INFO ;


 TYPE_5__* FUNC_0 (TYPE_4__*,int ,int ) ;

VOID
FUNC_1(PTEXTMODE_SCREEN_BUFFER VAR_0)
{
    PCHAR_INFO VAR_1 = FUNC_0(VAR_0, 0, VAR_0->CursorPosition.Y);
    SHORT VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->ScreenBufferSize.X; VAR_2++, VAR_1++)
    {

        VAR_1->Char.UnicodeChar = L' ';
        VAR_1->Attributes = VAR_0->ScreenDefaultAttrib;
    }
}
