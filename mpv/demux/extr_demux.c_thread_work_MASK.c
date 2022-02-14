
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {scalar_t__ next_cache_update; int lock; int eof; scalar_t__ seeking; scalar_t__ back_any_need_recheck; scalar_t__ need_back_seek; scalar_t__ tracks_switched; int opts_cache; } ;


 int FUNC_0 (struct demux_internal*) ;
 int FUNC_1 (struct demux_internal*) ;
 int FUNC_2 (struct demux_internal*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct demux_internal*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct demux_internal*) ;
 int FUNC_9 (struct demux_internal*) ;
 int FUNC_10 (struct demux_internal*) ;

__attribute__((used)) static bool FUNC_11(struct demux_internal *VAR_0)
{
    if (FUNC_3(VAR_0->opts_cache))
        FUNC_10(VAR_0);
    if (VAR_0->tracks_switched) {
        FUNC_2(VAR_0);
        return 1;
    }
    if (VAR_0->need_back_seek) {
        FUNC_5(VAR_0);
        return 1;
    }
    if (VAR_0->back_any_need_recheck) {
        FUNC_0(VAR_0);
        return 1;
    }
    if (VAR_0->seeking) {
        FUNC_1(VAR_0);
        return 1;
    }
    if (!VAR_0->eof) {
        if (FUNC_8(VAR_0))
            return 1;
    }
    if (FUNC_4() >= VAR_0->next_cache_update) {
        FUNC_7(&VAR_0->lock);
        FUNC_9(VAR_0);
        FUNC_6(&VAR_0->lock);
        return 1;
    }
    return 0;
}
