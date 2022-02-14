
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WORD ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_9__ {int idResult; scalar_t__ hUserFont; int yBaseUnit; int xBaseUnit; } ;
struct TYPE_8__ {int style; int exStyle; scalar_t__ windowName; scalar_t__ className; scalar_t__ windowNameFree; scalar_t__ data; scalar_t__ id; int cy; int cx; int y; int x; } ;
struct TYPE_7__ {int style; int dialogEx; int nbItems; } ;
typedef int * LPVOID ;
typedef int * LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int INT ;
typedef int * HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef int DWORD ;
typedef TYPE_1__ DLG_TEMPLATE ;
typedef TYPE_2__ DLG_CONTROL_INFO ;
typedef TYPE_3__ DIALOGINFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int *,int *,int,int ,int ,int ,int ,int *,int ,int ,int *) ;
 int * FUNC_1 (int,scalar_t__,scalar_t__,int,int ,int ,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int const*,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *,int ,int ,scalar_t__) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int ,int ,scalar_t__,int,int *,int ,int *,int *) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_15( HWND VAR_15, LPCSTR VAR_16, const DLG_TEMPLATE *VAR_17,
                                     HINSTANCE VAR_18, BOOL VAR_19 )
{
    DIALOGINFO * VAR_20;
    DLG_CONTROL_INFO VAR_21;
    HWND VAR_22, VAR_23 = 0;
    INT VAR_24 = VAR_17->nbItems;

    if (!(VAR_20 = FUNC_3(VAR_15))) return VAR_5;

    FUNC_11(" BEGIN\n" );
    while (VAR_24--)
    {
        VAR_16 = (LPCSTR)FUNC_2( (const WORD *)VAR_16, &VAR_21,
                                                VAR_17->dialogEx );
        VAR_21.style &= ~VAR_14;
        VAR_21.style |= VAR_11;

        if (VAR_21.style & VAR_10)
        {
            VAR_21.style &= ~VAR_10;
            VAR_21.exStyle |= VAR_12;
        }

        if (VAR_19)
        {
            VAR_22 = FUNC_1( VAR_21.exStyle | VAR_13,
                                        VAR_21.className, VAR_21.windowName,
                                        VAR_21.style | VAR_11,
                                        FUNC_9(VAR_21.x, VAR_20->xBaseUnit, 4),
                                        FUNC_9(VAR_21.y, VAR_20->yBaseUnit, 8),
                                        FUNC_9(VAR_21.cx, VAR_20->xBaseUnit, 4),
                                        FUNC_9(VAR_21.cy, VAR_20->yBaseUnit, 8),
                                        VAR_15, (HMENU)(ULONG_PTR)VAR_21.id,
                                        VAR_18, (LPVOID)VAR_21.data );
        }
        else
        {
            LPSTR VAR_25 = (LPSTR)VAR_21.className;
            LPSTR VAR_26 = (LPSTR)VAR_21.windowName;

            if (!FUNC_8(VAR_25))
            {
                DWORD VAR_27 = FUNC_13( VAR_2, 0, VAR_21.className, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
                VAR_25 = FUNC_6( FUNC_4(), 0, VAR_27 );
                if (VAR_25 != ((void*)0))
                    FUNC_13( VAR_2, 0, VAR_21.className, -1, VAR_25, VAR_27, ((void*)0), ((void*)0) );
            }
            if (!FUNC_8(VAR_26))
            {
                DWORD VAR_28 = FUNC_13( VAR_2, 0, VAR_21.windowName, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
                VAR_26 = FUNC_6( FUNC_4(), 0, VAR_28 );
                if (VAR_26 != ((void*)0))
                    FUNC_13( VAR_2, 0, VAR_21.windowName, -1, VAR_26, VAR_28, ((void*)0), ((void*)0) );
            }

            if (VAR_25 != ((void*)0) && VAR_26 != ((void*)0))
            {
                VAR_22 = FUNC_0( VAR_21.exStyle | VAR_13,
                                            VAR_25, VAR_26, VAR_21.style | VAR_11,
                                            FUNC_9(VAR_21.x, VAR_20->xBaseUnit, 4),
                                            FUNC_9(VAR_21.y, VAR_20->yBaseUnit, 8),
                                            FUNC_9(VAR_21.cx, VAR_20->xBaseUnit, 4),
                                            FUNC_9(VAR_21.cy, VAR_20->yBaseUnit, 8),
                                            VAR_15, (HMENU)(ULONG_PTR)VAR_21.id,
                                            VAR_18, (LPVOID)VAR_21.data );
            }
            else
                VAR_22 = ((void*)0);
            if (!FUNC_8(VAR_25)) FUNC_7( FUNC_4(), 0, VAR_25 );
            if (!FUNC_8(VAR_26)) FUNC_7( FUNC_4(), 0, VAR_26 );
        }

        if (VAR_21.windowNameFree)
        {
            FUNC_7( FUNC_4(), 0, (LPVOID)VAR_21.windowName );
        }

        if (!VAR_22)
        {
            FUNC_12("control %s %s creation failed\n", FUNC_14(VAR_21.className),
                  FUNC_14(VAR_21.windowName));
            if (VAR_17->style & VAR_4) continue;
            return VAR_5;
        }


        if (VAR_20->hUserFont) FUNC_10( VAR_22, VAR_9,
                                             (WPARAM)VAR_20->hUserFont, 0 );
        if (FUNC_10(VAR_22, VAR_8, 0, 0) & VAR_3)
        {


            if (VAR_23)
                FUNC_10( VAR_23, VAR_0, VAR_1, VAR_5 );
            VAR_23 = VAR_22;
            VAR_20->idResult = FUNC_5( VAR_22, VAR_6 );
        }
    }
    FUNC_11(" END\n" );
    return VAR_7;
}
