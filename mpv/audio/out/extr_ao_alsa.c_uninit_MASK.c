
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * alsa; int * output; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->output)
        FUNC_1(VAR_1->output);
    VAR_1->output = ((void*)0);

    if (VAR_1->alsa) {
        int VAR_2;

        VAR_2 = FUNC_2(VAR_1->alsa);
        VAR_1->alsa = ((void*)0);
        FUNC_0("pcm close error");
    }

alsa_error: ;
}
