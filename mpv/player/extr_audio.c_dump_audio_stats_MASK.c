
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ audio_status; int audio_stat_start; double written_audio; int ao; scalar_t__ paused; int log; } ;


 int FUNC_0 (struct MPContext*,char*,double) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_2)
{
    if (!FUNC_2(VAR_2->log, VAR_0))
        return;
    if (VAR_2->audio_status != VAR_1 || !VAR_2->ao || VAR_2->paused) {
        VAR_2->audio_stat_start = 0;
        return;
    }

    double VAR_3 = FUNC_1(VAR_2->ao);
    if (!VAR_2->audio_stat_start) {
        VAR_2->audio_stat_start = FUNC_3();
        VAR_2->written_audio = VAR_3;
    }
    double VAR_4 = VAR_2->written_audio - VAR_3;
    double VAR_5 = (FUNC_3() - VAR_2->audio_stat_start) / 1e6;
    FUNC_0(VAR_2, "value %f ao-dev", VAR_4 - VAR_5);
}
