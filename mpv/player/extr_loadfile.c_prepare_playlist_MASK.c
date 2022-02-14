
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist {int * first; int * current; } ;
struct MPOpts {scalar_t__ playlist_pos; scalar_t__ merge_files; scalar_t__ shuffle; } ;
struct MPContext {struct MPOpts* opts; } ;


 int FUNC_0 (struct playlist*) ;
 int * FUNC_1 (struct MPContext*,struct playlist*) ;
 int * FUNC_2 (struct playlist*,scalar_t__) ;
 int FUNC_3 (struct playlist*) ;

void FUNC_4(struct MPContext *VAR_0, struct playlist *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_0->opts;

    VAR_1->current = ((void*)0);

    if (VAR_2->playlist_pos >= 0)
        VAR_1->current = FUNC_2(VAR_1, VAR_2->playlist_pos);

    if (VAR_2->shuffle)
        FUNC_3(VAR_1);

    if (VAR_2->merge_files)
        FUNC_0(VAR_1);

    if (!VAR_1->current)
        VAR_1->current = FUNC_1(VAR_0, VAR_1);

    if (!VAR_1->current)
        VAR_1->current = VAR_1->first;
}
