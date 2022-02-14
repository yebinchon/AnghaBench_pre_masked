
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int device_lost; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static bool FUNC_2(struct ao *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    if (VAR_2 != -VAR_0)
        return 1;
    if (!VAR_3->device_lost) {
        FUNC_0(VAR_1, "Device lost, trying to recover...\n");
        FUNC_1(VAR_1);
        VAR_3->device_lost = 1;
    }
    return 0;
}
