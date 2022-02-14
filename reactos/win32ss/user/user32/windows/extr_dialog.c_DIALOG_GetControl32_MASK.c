
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {char member_0; unsigned char member_1; char member_2; char member_3; char member_4; char member_5; char member_6; char member_7; char member_8; } ;
typedef TYPE_1__ WCHAR ;
typedef int UINT_PTR ;
struct TYPE_8__ {int x; int y; int cx; int cy; int id; int const* data; void* helpId; void* exStyle; void* style; TYPE_1__ const* windowName; TYPE_1__ const* className; void* windowNameFree; } ;
typedef int LPWSTR ;
typedef void* LPCWSTR ;
typedef TYPE_2__ DLG_CONTROL_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 void* VAR_0 ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 () ;
 TYPE_1__ const* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int ,int ,int,int,int,int,int,void*,void*,void*) ;
 void* VAR_1 ;
 int FUNC_7 (TYPE_1__ const*) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static const WORD *FUNC_10( const WORD *VAR_2, DLG_CONTROL_INFO *VAR_3,
                                        BOOL VAR_4 )
{
    if (VAR_4)
    {
        VAR_3->helpId = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_3->exStyle = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_3->style = FUNC_1(VAR_2); VAR_2 += 2;
    }
    else
    {
        VAR_3->helpId = 0;
        VAR_3->style = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_3->exStyle = FUNC_1(VAR_2); VAR_2 += 2;
    }
    VAR_3->x = FUNC_3(VAR_2); VAR_2++;
    VAR_3->y = FUNC_3(VAR_2); VAR_2++;
    VAR_3->cx = FUNC_3(VAR_2); VAR_2++;
    VAR_3->cy = FUNC_3(VAR_2); VAR_2++;

    if (VAR_4)
    {

        VAR_3->id = FUNC_2(VAR_2);
        VAR_2 += 2;
    }
    else
    {
        VAR_3->id = FUNC_3(VAR_2);
        VAR_2++;
    }

    if (FUNC_3(VAR_2) == 0xffff)
    {
        static const WCHAR VAR_5[6][10] =
        {
            { 'B','u','t','t','o','n', },
            { 'E','d','i','t', },
            { 'S','t','a','t','i','c', },
            { 'L','i','s','t','B','o','x', },
            { 'S','c','r','o','l','l','B','a','r', },
            { 'C','o','m','b','o','B','o','x', }
        };
        WORD VAR_6 = FUNC_3(VAR_2+1);

        if ((VAR_6 >= 0x80) && (VAR_6 <= 0x85)) VAR_6 -= 0x80;
        if (VAR_6 <= 5)
        {
            VAR_3->className = VAR_5[VAR_6];
        }
        else
        {
            VAR_3->className = ((void*)0);

            FUNC_0("Unknown built-in class id %04x\n", VAR_6 );
        }
        VAR_2 += 2;
    }
    else
    {
        VAR_3->className = (LPCWSTR)VAR_2;
        VAR_2 += FUNC_8( VAR_3->className ) + 1;
    }

    if (FUNC_3(VAR_2) == 0xffff)
    {

        VAR_3->windowName = FUNC_5( FUNC_4(), 0, sizeof(L"#65535") );
        if (VAR_3->windowName != ((void*)0))
        {
            FUNC_9((LPWSTR)VAR_3->windowName, L"#%u", FUNC_3(VAR_2 + 1));
            VAR_3->windowNameFree = VAR_1;
        }
        else
        {
            VAR_3->windowNameFree = VAR_0;
        }
        VAR_2 += 2;
    }
    else
    {
        VAR_3->windowName = (LPCWSTR)VAR_2;
        VAR_3->windowNameFree = VAR_0;
        VAR_2 += FUNC_8( VAR_3->windowName ) + 1;
    }

    FUNC_6("    %s %s %ld, %d, %d, %d, %d, %08x, %08x, %08x\n",
          FUNC_7( VAR_3->className ), FUNC_7( VAR_3->windowName ),
          VAR_3->id, VAR_3->x, VAR_3->y, VAR_3->cx, VAR_3->cy,
          VAR_3->style, VAR_3->exStyle, VAR_3->helpId );

    if (FUNC_3(VAR_2))
    {
        VAR_3->data = VAR_2;
        VAR_2 += FUNC_3(VAR_2) / sizeof(WORD);
    }
    else VAR_3->data = ((void*)0);
    VAR_2++;


    return (const WORD *)(((UINT_PTR)VAR_2 + 3) & ~3);
}
