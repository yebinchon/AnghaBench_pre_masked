
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT_PTR ;
struct TYPE_3__ {int style; int nbItems; int x; int y; int cx; int cy; int pointSize; int weight; void* italic; int * faceName; void* dialogEx; int * caption; int * className; int * menuName; void* exStyle; void* helpId; } ;
typedef void* LPCWSTR ;
typedef scalar_t__ LPCSTR ;
typedef TYPE_1__ DLG_TEMPLATE ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 void* VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static LPCSTR FUNC_7( LPCSTR VAR_5, DLG_TEMPLATE * VAR_6 )
{
    const WORD *VAR_7 = (const WORD *)VAR_5;
    WORD VAR_8;
    WORD VAR_9;

    VAR_9 = FUNC_1(VAR_7); VAR_7++;
    VAR_8 = FUNC_1(VAR_7); VAR_7++;

    if (VAR_9 == 1 && VAR_8 == 0xffff)
    {
        VAR_6->dialogEx = VAR_3;
        VAR_6->helpId = FUNC_0(VAR_7); VAR_7 += 2;
        VAR_6->exStyle = FUNC_0(VAR_7); VAR_7 += 2;
        VAR_6->style = FUNC_0(VAR_7); VAR_7 += 2;
    }
    else
    {
        VAR_6->style = FUNC_0(VAR_7 - 2);
        VAR_6->dialogEx = VAR_1;
        VAR_6->helpId = 0;
        VAR_6->exStyle = FUNC_0(VAR_7); VAR_7 += 2;
    }
    VAR_6->nbItems = FUNC_1(VAR_7); VAR_7++;
    VAR_6->x = FUNC_1(VAR_7); VAR_7++;
    VAR_6->y = FUNC_1(VAR_7); VAR_7++;
    VAR_6->cx = FUNC_1(VAR_7); VAR_7++;
    VAR_6->cy = FUNC_1(VAR_7); VAR_7++;
    FUNC_4("DIALOG%s %d, %d, %d, %d, %d\n",
           VAR_6->dialogEx ? "EX" : "", VAR_6->x, VAR_6->y,
           VAR_6->cx, VAR_6->cy, VAR_6->helpId );
    FUNC_4(" STYLE 0x%08x\n", VAR_6->style );
    FUNC_4(" EXSTYLE 0x%08x\n", VAR_6->exStyle );



    switch(FUNC_1(VAR_7))
    {
        case 0x0000:
            VAR_6->menuName = ((void*)0);
            VAR_7++;
            break;
        case 0xffff:
            VAR_6->menuName = (LPCWSTR)(UINT_PTR)FUNC_1( VAR_7 + 1 );
            VAR_7 += 2;
            FUNC_4(" MENU %04x\n", FUNC_3(VAR_6->menuName) );
            break;
        default:
            VAR_6->menuName = (LPCWSTR)VAR_7;
            FUNC_4(" MENU %s\n", FUNC_5(VAR_6->menuName) );
            VAR_7 += FUNC_6( VAR_6->menuName ) + 1;
            break;
    }



    switch(FUNC_1(VAR_7))
    {
        case 0x0000:
            VAR_6->className = VAR_4;
            VAR_7++;
            break;
        case 0xffff:
            VAR_6->className = (LPCWSTR)(UINT_PTR)FUNC_1( VAR_7 + 1 );
            VAR_7 += 2;
            FUNC_4(" CLASS %04x\n", FUNC_3(VAR_6->className) );
            break;
        default:
            VAR_6->className = (LPCWSTR)VAR_7;
            FUNC_4(" CLASS %s\n", FUNC_5( VAR_6->className ));
            VAR_7 += FUNC_6( VAR_6->className ) + 1;
            break;
    }



    VAR_6->caption = (LPCWSTR)VAR_7;
    VAR_7 += FUNC_6( VAR_6->caption ) + 1;
    FUNC_4(" CAPTION %s\n", FUNC_5( VAR_6->caption ) );



    VAR_6->pointSize = 0;
    VAR_6->faceName = ((void*)0);
    VAR_6->weight = VAR_2;
    VAR_6->italic = VAR_1;

    if (VAR_6->style & VAR_0)
    {
        VAR_6->pointSize = FUNC_1(VAR_7);
        VAR_7++;





        if (VAR_6->pointSize == 0x7fff)
        {




            FUNC_4(" FONT: Using message box font\n");
        }
        else
        {
            if (VAR_6->dialogEx)
            {
                VAR_6->weight = FUNC_1(VAR_7); VAR_7++;
                VAR_6->italic = FUNC_2(FUNC_1(VAR_7)); VAR_7++;
            }
            VAR_6->faceName = (LPCWSTR)VAR_7;
            VAR_7 += FUNC_6( VAR_6->faceName ) + 1;

            FUNC_4(" FONT %d, %s, %d, %s\n",
                  VAR_6->pointSize, FUNC_5( VAR_6->faceName ),
                  VAR_6->weight, VAR_6->italic ? "TRUE" : "FALSE" );
        }
    }


    return (LPCSTR)((((UINT_PTR)VAR_7) + 3) & ~3);
}
