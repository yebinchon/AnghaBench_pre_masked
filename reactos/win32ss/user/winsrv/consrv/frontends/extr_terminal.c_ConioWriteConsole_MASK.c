
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_22__ {int UnicodeChar; } ;
struct TYPE_28__ {int Attributes; TYPE_3__ Char; } ;
struct TYPE_27__ {scalar_t__ ActiveBuffer; } ;
struct TYPE_26__ {TYPE_1__* Vtbl; TYPE_8__* Console; } ;
struct TYPE_23__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_21__ {size_t X; } ;
struct TYPE_25__ {int Mode; TYPE_4__ CursorPosition; TYPE_2__ ScreenBufferSize; int ScreenDefaultAttrib; } ;
struct TYPE_24__ {size_t Left; size_t Top; int Right; size_t Bottom; } ;
struct TYPE_20__ {int (* WriteStream ) (TYPE_7__*,TYPE_5__*,scalar_t__,scalar_t__,size_t,int*,size_t) ;int (* RingBell ) (TYPE_7__*) ;} ;
typedef TYPE_5__ SMALL_RECT ;
typedef scalar_t__ SHORT ;
typedef int* PWCHAR ;
typedef TYPE_6__* PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_7__* PFRONTEND ;
typedef TYPE_8__* PCONSRV_CONSOLE ;
typedef scalar_t__ PCONSOLE_SCREEN_BUFFER ;
typedef TYPE_9__* PCHAR_INFO ;
typedef int NTSTATUS ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 TYPE_9__* FUNC_0 (TYPE_6__*,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (int,size_t) ;
 void* FUNC_4 (size_t,size_t) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_5__*,scalar_t__,scalar_t__,size_t,int*,size_t) ;

__attribute__((used)) static NTSTATUS
FUNC_7(PFRONTEND VAR_4,
                  PTEXTMODE_SCREEN_BUFFER VAR_5,
                  PWCHAR VAR_6,
                  DWORD VAR_7,
                  BOOL VAR_8)
{
    PCONSRV_CONSOLE VAR_9 = VAR_4->Console;

    UINT VAR_10;
    PCHAR_INFO VAR_11;
    SMALL_RECT VAR_12;
    SHORT VAR_13, VAR_14;
    UINT VAR_15;

    VAR_13 = VAR_5->CursorPosition.X;
    VAR_14 = VAR_5->CursorPosition.Y;
    VAR_12.Left = VAR_5->ScreenBufferSize.X;
    VAR_12.Top = VAR_5->CursorPosition.Y;
    VAR_12.Right = -1;
    VAR_12.Bottom = VAR_5->CursorPosition.Y;
    VAR_15 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {




        if (VAR_5->Mode & VAR_0)
        {

            if (VAR_6[VAR_10] == L'\r')
            {
                VAR_5->CursorPosition.X = 0;
                VAR_12.Left = FUNC_4(VAR_12.Left, VAR_5->CursorPosition.X);
                VAR_12.Right = FUNC_3(VAR_12.Right, VAR_5->CursorPosition.X);
                continue;
            }

            else if (VAR_6[VAR_10] == L'\n')
            {
                VAR_5->CursorPosition.X = 0;
                FUNC_2(VAR_5, &VAR_12, &VAR_15);
                continue;
            }

            else if (VAR_6[VAR_10] == L'\b')
            {

                if (0 != VAR_5->CursorPosition.X || 0 != VAR_5->CursorPosition.Y)
                {
                    if (0 == VAR_5->CursorPosition.X)
                    {

                        VAR_5->CursorPosition.X = VAR_5->ScreenBufferSize.X - 1;
                        VAR_5->CursorPosition.Y--;
                        VAR_12.Top = FUNC_4(VAR_12.Top, VAR_5->CursorPosition.Y);
                    }
                    else
                    {
                        VAR_5->CursorPosition.X--;
                    }
                    VAR_11 = FUNC_0(VAR_5, VAR_5->CursorPosition.X, VAR_5->CursorPosition.Y);
                    VAR_11->Char.UnicodeChar = L' ';
                    VAR_11->Attributes = VAR_5->ScreenDefaultAttrib;
                    VAR_12.Left = FUNC_4(VAR_12.Left, VAR_5->CursorPosition.X);
                    VAR_12.Right = FUNC_3(VAR_12.Right, VAR_5->CursorPosition.X);
                }
                continue;
            }

            else if (VAR_6[VAR_10] == L'\t')
            {
                UINT VAR_16;

                VAR_12.Left = FUNC_4(VAR_12.Left, VAR_5->CursorPosition.X);
                VAR_16 = (VAR_5->CursorPosition.X + VAR_3) & ~(VAR_3 - 1);
                VAR_16 = FUNC_4(VAR_16, (UINT)VAR_5->ScreenBufferSize.X);
                VAR_11 = FUNC_0(VAR_5, VAR_5->CursorPosition.X, VAR_5->CursorPosition.Y);
                while ((UINT)VAR_5->CursorPosition.X < VAR_16)
                {
                    VAR_11->Char.UnicodeChar = L' ';
                    VAR_11->Attributes = VAR_5->ScreenDefaultAttrib;
                    ++VAR_11;
                    VAR_5->CursorPosition.X++;
                }
                VAR_12.Right = FUNC_3(VAR_12.Right, VAR_5->CursorPosition.X - 1);
                if (VAR_5->CursorPosition.X == VAR_5->ScreenBufferSize.X)
                {
                    if (VAR_5->Mode & VAR_1)
                    {
                        VAR_5->CursorPosition.X = 0;
                        FUNC_2(VAR_5, &VAR_12, &VAR_15);
                    }
                    else
                    {
                        VAR_5->CursorPosition.X--;
                    }
                }
                continue;
            }

            else if (VAR_6[VAR_10] == L'\a')
            {
                VAR_4->Vtbl->RingBell(VAR_4);
                continue;
            }
        }
        VAR_12.Left = FUNC_4(VAR_12.Left, VAR_5->CursorPosition.X);
        VAR_12.Right = FUNC_3(VAR_12.Right, VAR_5->CursorPosition.X);

        VAR_11 = FUNC_0(VAR_5, VAR_5->CursorPosition.X, VAR_5->CursorPosition.Y);
        VAR_11->Char.UnicodeChar = VAR_6[VAR_10];
        if (VAR_8) VAR_11->Attributes = VAR_5->ScreenDefaultAttrib;

        VAR_5->CursorPosition.X++;
        if (VAR_5->CursorPosition.X == VAR_5->ScreenBufferSize.X)
        {
            if (VAR_5->Mode & VAR_1)
            {
                VAR_5->CursorPosition.X = 0;
                FUNC_2(VAR_5, &VAR_12, &VAR_15);
            }
            else
            {
                VAR_5->CursorPosition.X = VAR_13;
            }
        }
    }

    if (!FUNC_1(&VAR_12) && (PCONSOLE_SCREEN_BUFFER)VAR_5 == VAR_9->ActiveBuffer)
    {


        VAR_4->Vtbl->WriteStream(VAR_4,
                                    &VAR_12,
                                    VAR_13,
                                    VAR_14,
                                    VAR_15,
                                    VAR_6,
                                    VAR_7);
    }

    return VAR_2;
}
