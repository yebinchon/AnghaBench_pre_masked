
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_chmap {int dummy; } ;
struct ao {int dummy; } ;
struct MPContext {int audio_speed; int shown_aframes; int delay; int written_audio; struct ao* ao; int encode_lavc_ctx; scalar_t__ paused; } ;


 int FUNC_0 (struct ao*,int*,int*,struct mp_chmap*) ;
 int FUNC_1 (struct ao*,void**,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct MPContext*) ;

__attribute__((used)) static int FUNC_5(struct MPContext *VAR_0, uint8_t **VAR_1, int VAR_2,
                       int VAR_3)
{
    if (VAR_0->paused)
        return 0;
    struct ao *VAR_4 = VAR_0->ao;
    int VAR_5;
    int VAR_6;
    struct mp_chmap VAR_7;
    FUNC_0(VAR_4, &VAR_5, &VAR_6, &VAR_7);
    FUNC_3(VAR_0->encode_lavc_ctx, FUNC_4(VAR_0));
    if (VAR_2 == 0)
        return 0;
    double VAR_8 = VAR_5 / VAR_0->audio_speed;
    int VAR_9 = FUNC_1(VAR_0->ao, (void **)VAR_1, VAR_2, VAR_3);
    FUNC_2(VAR_9 <= VAR_2);
    if (VAR_9 > 0) {
        VAR_0->shown_aframes += VAR_9;
        VAR_0->delay += VAR_9 / VAR_8;
        VAR_0->written_audio += VAR_9 / (double)VAR_5;
        return VAR_9;
    }
    return 0;
}
