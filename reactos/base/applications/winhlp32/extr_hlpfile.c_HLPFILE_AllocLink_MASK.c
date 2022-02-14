
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RtfData {TYPE_1__* current_link; int char_pos; void* force_color; TYPE_1__* first_link; } ;
struct TYPE_4__ {int cookie; char* string; unsigned int window; int hash; int cpMax; int cpMin; struct TYPE_4__* next; void* bHotSpot; void* bClrChange; } ;
typedef int LONG ;
typedef TYPE_1__ HLPFILE_LINK ;
typedef int HLPFILE_HOTSPOTLINK ;
typedef void* BOOL ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int ,int ,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,unsigned int) ;
 unsigned int FUNC_6 (char const*) ;

__attribute__((used)) static HLPFILE_LINK* FUNC_7(struct RtfData* VAR_0, int VAR_1,
                                             const char* VAR_2, unsigned VAR_3, LONG VAR_4,
                                             BOOL VAR_5, BOOL VAR_6, unsigned VAR_7)
{
    HLPFILE_LINK* VAR_8;
    char* VAR_9;
    unsigned VAR_10 = VAR_6 ? sizeof(HLPFILE_HOTSPOTLINK) : sizeof(HLPFILE_LINK);




    if (VAR_3 == -1) VAR_3 = FUNC_6(VAR_2);
    VAR_8 = FUNC_1(FUNC_0(), 0, VAR_10 + VAR_3 + 1);
    if (!VAR_8) return ((void*)0);

    VAR_8->cookie = VAR_1;
    VAR_8->string = VAR_9 = (char*)VAR_8 + VAR_10;
    FUNC_5(VAR_9, VAR_2, VAR_3);
    VAR_9[VAR_3] = '\0';
    VAR_8->hash = VAR_4;
    VAR_8->bClrChange = VAR_5;
    VAR_8->bHotSpot = VAR_6;
    VAR_8->window = VAR_7;
    VAR_8->next = VAR_0->first_link;
    VAR_0->first_link = VAR_8;
    VAR_8->cpMin = VAR_0->char_pos;
    VAR_0->force_color = VAR_5;
    if (VAR_0->current_link) FUNC_2("Pending link\n");
    if (VAR_6)
        VAR_8->cpMax = VAR_0->char_pos;
    else
        VAR_0->current_link = VAR_8;

    FUNC_3("Link[%d] to %s@%08x:%d\n",
               VAR_8->cookie, FUNC_4(VAR_8->string), VAR_8->hash, VAR_8->window);
    return VAR_8;
}
