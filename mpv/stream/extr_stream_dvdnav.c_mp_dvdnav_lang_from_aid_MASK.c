
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct priv {int dvdnav; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_0, int VAR_1)
{
    uint8_t VAR_2;
    uint16_t VAR_3;
    struct priv *VAR_4 = VAR_0->priv;

    if (VAR_1 < 0)
        return 0;
    VAR_2 = FUNC_1(VAR_4->dvdnav, VAR_1 & 0x7);
    if (VAR_2 == 0xff)
        return 0;
    VAR_3 = FUNC_0(VAR_4->dvdnav, VAR_2);
    if (VAR_3 == 0xffff)
        return 0;
    return VAR_3;
}
