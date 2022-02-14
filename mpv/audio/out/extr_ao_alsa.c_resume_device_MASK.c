
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int alsa; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    int VAR_4;

    if (FUNC_3(VAR_3->alsa) == VAR_1) {
        FUNC_0(VAR_2, "PCM in suspend mode, trying to resume.\n");

        while ((VAR_4 = FUNC_2(VAR_3->alsa)) == -VAR_0)
            FUNC_1(1);
    }
}
