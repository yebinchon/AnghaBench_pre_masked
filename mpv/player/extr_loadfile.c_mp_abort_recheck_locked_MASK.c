
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_abort_entry {scalar_t__ coupled_to_playback; } ;
struct MPContext {scalar_t__ abort_all; int playback_abort; } ;


 int FUNC_0 (struct MPContext*,struct mp_abort_entry*) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct MPContext *VAR_0,
                             struct mp_abort_entry *VAR_1)
{
    if ((VAR_1->coupled_to_playback && FUNC_1(VAR_0->playback_abort)) ||
        VAR_0->abort_all)
    {
        FUNC_0(VAR_0, VAR_1);
    }
}
