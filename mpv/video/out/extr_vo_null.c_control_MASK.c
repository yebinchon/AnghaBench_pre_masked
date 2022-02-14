
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {struct priv* priv; } ;
struct priv {double cfg_fps; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vo *VAR_2, uint32_t VAR_3, void *VAR_4)
{
    struct priv *VAR_5 = VAR_2->priv;
    switch (VAR_3) {
    case 128:
        if (!VAR_5->cfg_fps)
            break;
        *(double *)VAR_4 = VAR_5->cfg_fps;
        return VAR_1;
    }
    return VAR_0;
}
