
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {scalar_t__ context; int hdc; } ;
typedef scalar_t__ HGLRC ;
typedef int HDC ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    HDC VAR_2 = VAR_1->hdc;
    bool VAR_3 = 0;

    HGLRC VAR_4 = FUNC_1(VAR_2);
    if (!VAR_4) {
        FUNC_0(VAR_0->vo, "Could not create GL context!\n");
        return VAR_3;
    }

    if (!FUNC_3(VAR_2, VAR_4)) {
        FUNC_0(VAR_0->vo, "Could not set GL context!\n");
        FUNC_2(VAR_4);
        return VAR_3;
    }

    VAR_1->context = VAR_4;
    return 1;
}
