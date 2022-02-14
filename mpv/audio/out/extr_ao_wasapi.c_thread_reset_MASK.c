
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int sample_count; int pAudioClient; } ;
struct ao {struct wasapi_state* priv; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wasapi_state*,char*) ;
 int FUNC_4 (struct wasapi_state*,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ao *VAR_0)
{
    struct wasapi_state *VAR_1 = VAR_0->priv;
    HRESULT VAR_2;
    FUNC_3(VAR_1, "Thread Reset\n");
    VAR_2 = FUNC_2(VAR_1->pAudioClient);
    if (FUNC_0(VAR_2))
        FUNC_4(VAR_1, "IAudioClient_Stop returned: %s\n", FUNC_6(VAR_2));

    VAR_2 = FUNC_1(VAR_1->pAudioClient);
    if (FUNC_0(VAR_2))
        FUNC_4(VAR_1, "IAudioClient_Reset returned: %s\n", FUNC_6(VAR_2));

    FUNC_5(&VAR_1->sample_count, 0);
}
