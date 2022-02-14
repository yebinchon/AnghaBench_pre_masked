
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int reload_display; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
                        uint32_t VAR_3)
{
    struct ra_ctx *VAR_4 = VAR_0;
    struct priv *VAR_5 = VAR_4->priv;
    FUNC_0(&VAR_5->reload_display, 1);
    FUNC_1(VAR_4->vo);
}
