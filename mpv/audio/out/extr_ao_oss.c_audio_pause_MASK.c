
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int prepause_samples; int audio_fd; } ;
struct ao {int samplerate; struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*) ;
 int FUNC_1 (struct ao*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->prepause_samples = FUNC_1(VAR_1) * VAR_1->samplerate;



    FUNC_0(VAR_1);

}
