
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int filename; } ;
struct playlist {struct playlist_entry* current; scalar_t__ first; } ;
struct MPContext {TYPE_1__* playlist; } ;
struct TYPE_3__ {struct playlist_entry* current; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct playlist*,int ) ;
 int FUNC_2 (TYPE_1__*,struct playlist_entry*) ;
 int FUNC_3 (TYPE_1__*,struct playlist*) ;
 int FUNC_4 (struct MPContext*,struct playlist*) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_0, struct playlist *VAR_1)
{
    if (VAR_1->first) {
        FUNC_4(VAR_0, VAR_1);
        struct playlist_entry *VAR_2 = VAR_1->current;
        if (VAR_0->playlist->current)
            FUNC_1(VAR_1, VAR_0->playlist->current->filename);
        FUNC_3(VAR_0->playlist, VAR_1);

        if (VAR_0->playlist->current)
            FUNC_2(VAR_0->playlist, VAR_0->playlist->current);
        if (VAR_2)
            VAR_0->playlist->current = VAR_2;
    } else {
        FUNC_0(VAR_0, "Empty playlist!\n");
    }
}
