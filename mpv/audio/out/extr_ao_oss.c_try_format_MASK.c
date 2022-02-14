
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_fd; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*,int) ;
 int FUNC_1 (struct ao*,char*,int ) ;
 int FUNC_2 (struct ao*,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ao *VAR_2, int *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;

    int VAR_5 = FUNC_5(*VAR_3);
    if (VAR_5 == -1 && FUNC_3(*VAR_3))
        VAR_5 = VAR_0;

    if (VAR_5 == -1) {
        FUNC_1(VAR_2, "Unknown/not supported internal format: %s\n",
                   FUNC_4(*VAR_3));
        *VAR_3 = 0;
        return 0;
    }

    int VAR_6 = VAR_5;
    if (FUNC_6(VAR_4->audio_fd, VAR_1, &VAR_6) < 0)
        VAR_6 = -1;

    if (VAR_6 == VAR_5)
        return 1;

    FUNC_2(VAR_2, "Can't set audio device to %s output.\n", FUNC_4(*VAR_3));
    *VAR_3 = FUNC_7(VAR_6);
    if (VAR_6 != -1 && !*VAR_3)
        FUNC_0(VAR_2, "Unknown/Unsupported OSS format: 0x%x.\n", VAR_6);
    return 0;
}
