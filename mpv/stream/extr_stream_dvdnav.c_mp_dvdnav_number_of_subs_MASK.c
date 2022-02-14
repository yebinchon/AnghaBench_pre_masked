
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct priv {int dvdnav; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    uint8_t VAR_2, VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
        VAR_2 = FUNC_0(VAR_1->dvdnav, VAR_3);
        if (VAR_2 == 0xff)
            continue;
        if (VAR_2 >= VAR_4)
            VAR_4 = VAR_2 + 1;
    }
    return VAR_4;
}
