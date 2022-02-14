
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int alsa; int final_chunk_written; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ao*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->final_chunk_written) {
        FUNC_1(VAR_0);

        int VAR_2 = FUNC_2(VAR_1->alsa);
        FUNC_0("pcm prepare error");
    alsa_error: ;
    }
}
