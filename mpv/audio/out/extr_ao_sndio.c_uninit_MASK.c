
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int pfd; scalar_t__ hdl; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->hdl)
        FUNC_1(VAR_1->hdl);

    FUNC_0(VAR_1->pfd);
}
