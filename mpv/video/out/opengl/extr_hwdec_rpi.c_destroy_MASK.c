
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec {struct priv* priv; } ;
struct priv {scalar_t__ renderer; } ;


 int FUNC_0 (struct ra_hwdec*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);

    if (VAR_1->renderer)
        FUNC_1(VAR_1->renderer);

    FUNC_2();
}
