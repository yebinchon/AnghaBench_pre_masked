
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int version; int* TOMap; TYPE_1__* last_page; TYPE_1__* first_page; scalar_t__ hasPhrases40; scalar_t__ hasPhrases; } ;
struct TYPE_8__ {char* lpszMacro; struct TYPE_8__* next; } ;
struct TYPE_7__ {char* lpszTitle; unsigned int offset; unsigned int reference; int browse_bwd; int browse_fwd; TYPE_2__* first_macro; void* wNumber; int * first_link; struct TYPE_7__* next; TYPE_3__* file; struct TYPE_7__* prev; } ;
typedef TYPE_1__ HLPFILE_PAGE ;
typedef TYPE_2__ HLPFILE_MACRO ;
typedef TYPE_3__ HLPFILE ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 void* FUNC_0 (char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,char const*,char const*,char*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,char*,char const*,char const*) ;
 void* FUNC_4 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,unsigned int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static BOOL FUNC_11(HLPFILE *VAR_2, const BYTE *VAR_3, const BYTE *VAR_4, unsigned VAR_5, unsigned VAR_6)
{
    HLPFILE_PAGE* VAR_7;
    const BYTE* VAR_8;
    UINT VAR_9, VAR_10, VAR_11;
    char* VAR_12;
    HLPFILE_MACRO*VAR_13;

    VAR_10 = FUNC_0(VAR_3, 0);
    VAR_11 = FUNC_0(VAR_3, 0x10);
    VAR_8 = VAR_3 + VAR_11;
    if (VAR_8 > VAR_4) {FUNC_7("page2\n"); return VAR_0;};

    VAR_9 = FUNC_0(VAR_3, 4);
    VAR_7 = FUNC_4(FUNC_1(), 0, sizeof(HLPFILE_PAGE) + VAR_9 + 1);
    if (!VAR_7) return VAR_0;
    VAR_7->lpszTitle = (char*)VAR_7 + sizeof(HLPFILE_PAGE);

    if (VAR_9 > VAR_10 - VAR_11)
    {

        if (VAR_2->hasPhrases)
            FUNC_2(VAR_2, VAR_8, VAR_4, (BYTE*)VAR_7->lpszTitle, (BYTE*)VAR_7->lpszTitle + VAR_9);
        else if (VAR_2->hasPhrases40)
            FUNC_3(VAR_2, VAR_7->lpszTitle, VAR_7->lpszTitle + VAR_9, VAR_8, VAR_4);
        else
        {
            FUNC_5("Text size is too long, splitting\n");
            VAR_9 = VAR_10 - VAR_11;
            FUNC_9(VAR_7->lpszTitle, VAR_8, VAR_9);
        }
    }
    else
        FUNC_9(VAR_7->lpszTitle, VAR_8, VAR_9);

    VAR_7->lpszTitle[VAR_9] = '\0';

    if (VAR_2->first_page)
    {
        VAR_2->last_page->next = VAR_7;
        VAR_7->prev = VAR_2->last_page;
        VAR_2->last_page = VAR_7;
    }
    else
    {
        VAR_2->first_page = VAR_7;
        VAR_2->last_page = VAR_7;
        VAR_7->prev = ((void*)0);
    }

    VAR_7->file = VAR_2;
    VAR_7->next = ((void*)0);
    VAR_7->first_macro = ((void*)0);
    VAR_7->first_link = ((void*)0);
    VAR_7->wNumber = FUNC_0(VAR_3, 0x21);
    VAR_7->offset = VAR_6;
    VAR_7->reference = VAR_5;

    VAR_7->browse_bwd = FUNC_0(VAR_3, 0x19);
    VAR_7->browse_fwd = FUNC_0(VAR_3, 0x1D);

    if (VAR_2->version <= 16)
    {
        if (VAR_7->browse_bwd == 0xFFFF || VAR_7->browse_bwd == 0xFFFFFFFF)
            VAR_7->browse_bwd = 0xFFFFFFFF;
        else
            VAR_7->browse_bwd = VAR_2->TOMap[VAR_7->browse_bwd];

        if (VAR_7->browse_fwd == 0xFFFF || VAR_7->browse_fwd == 0xFFFFFFFF)
            VAR_7->browse_fwd = 0xFFFFFFFF;
        else
            VAR_7->browse_fwd = VAR_2->TOMap[VAR_7->browse_fwd];
    }

    FUNC_6("Added page[%d]: title=%s %08x << %08x >> %08x\n",
               VAR_7->wNumber, FUNC_8(VAR_7->lpszTitle),
               VAR_7->browse_bwd, VAR_7->offset, VAR_7->browse_fwd);


    VAR_12 = VAR_7->lpszTitle + FUNC_10(VAR_7->lpszTitle) + 1;
    while (VAR_12 < VAR_7->lpszTitle + VAR_9)
    {
        unsigned VAR_14 = FUNC_10(VAR_12);
        char* VAR_15;

        FUNC_6("macro: %s\n", FUNC_8(VAR_12));
        VAR_13 = FUNC_4(FUNC_1(), 0, sizeof(HLPFILE_MACRO) + VAR_14 + 1);
        VAR_13->lpszMacro = VAR_15 = (char*)(VAR_13 + 1);
        FUNC_9(VAR_15, VAR_12, VAR_14 + 1);



        VAR_13->next = VAR_7->first_macro;
        VAR_7->first_macro = VAR_13;
        VAR_12 += VAR_14 + 1;
    }

    return VAR_1;
}
