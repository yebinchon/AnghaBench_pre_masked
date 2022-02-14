
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int output; } ;
struct ao {int log; struct priv* priv; } ;
typedef int snd_pcm_hw_params_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*,char const*,int,char*) ;
 size_t FUNC_2 (int ,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct ao *VAR_1, const char *VAR_2,
                           snd_pcm_hw_params_t *VAR_3)
{
    struct priv *VAR_4 = VAR_1->priv;
    int VAR_5;

    VAR_5 = FUNC_4(VAR_3, VAR_4->output);
    FUNC_0("Dump hwparams error");

    char *VAR_6 = ((void*)0);
    size_t VAR_7 = FUNC_2(VAR_4->output, &VAR_6);
    if (VAR_6)
        FUNC_1(VAR_1->log, VAR_0, "%s---\n%.*s---\n", VAR_2, (int)VAR_7, VAR_6);
    FUNC_3(VAR_4->output);
}
