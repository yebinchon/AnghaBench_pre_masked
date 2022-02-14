
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {int title; int filename; struct playlist_entry* next; } ;
struct m_sub_property {char* member_0; int unavailable; int member_1; } ;
struct get_playlist_ctx {int last_index; struct playlist_entry* last_entry; struct MPContext* mpctx; } ;
struct MPContext {struct playlist_entry* playing; TYPE_1__* playlist; } ;
struct TYPE_2__ {struct playlist_entry* current; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct m_sub_property*,int,void*) ;
 struct playlist_entry* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, int VAR_2, void *VAR_3, void *VAR_4)
{
    struct get_playlist_ctx *VAR_5 = VAR_4;
    struct MPContext *VAR_6 = VAR_5->mpctx;

    struct playlist_entry *VAR_7;




    if (VAR_5->last_entry && VAR_1 == VAR_5->last_index)
        VAR_7 = VAR_5->last_entry;
    else if (VAR_5->last_entry && VAR_1 == VAR_5->last_index + 1)
        VAR_7 = VAR_5->last_entry->next;
    else
        VAR_7 = FUNC_3(VAR_6->playlist, VAR_1);
    VAR_5->last_index = VAR_1;
    VAR_5->last_entry = VAR_7;
    if (!VAR_7)
        return VAR_0;

    bool VAR_8 = VAR_6->playlist->current == VAR_7;
    bool VAR_9 = VAR_6->playing == VAR_7;
    struct m_sub_property VAR_10[] = {
        {"filename", FUNC_1(VAR_7->filename)},
        {"current", FUNC_0(1), .unavailable = !VAR_8},
        {"playing", FUNC_0(1), .unavailable = !VAR_9},
        {"title", FUNC_1(VAR_7->title), .unavailable = !VAR_7->title},
        {0}
    };

    return FUNC_2(VAR_10, VAR_2, VAR_3);
}
