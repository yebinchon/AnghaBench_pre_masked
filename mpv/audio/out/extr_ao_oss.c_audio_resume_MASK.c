
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ prepause_samples; scalar_t__ audio_end; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (struct ao*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    VAR_1->audio_end = 0;
    if (VAR_1->prepause_samples > 0)
        FUNC_0(VAR_0, VAR_1->prepause_samples);
}
