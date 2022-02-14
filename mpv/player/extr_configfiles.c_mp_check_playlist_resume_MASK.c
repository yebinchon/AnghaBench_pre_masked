
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {int filename; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {int position_resume; } ;


 char* FUNC_0 (struct MPContext*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

struct playlist_entry *FUNC_3(struct MPContext *VAR_0,
                                                struct playlist *VAR_1)
{
    if (!VAR_0->opts->position_resume)
        return ((void*)0);
    for (struct playlist_entry *VAR_2 = VAR_1->first; VAR_2; VAR_2 = VAR_2->next) {
        char *VAR_3 = FUNC_0(VAR_0, VAR_2->filename);
        bool VAR_4 = VAR_3 && FUNC_1(VAR_3);
        FUNC_2(VAR_3);
        if (VAR_4)
            return VAR_2;
    }
    return ((void*)0);
}
