
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int dummy; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    if (!VAR_2)
        return;

    if (FUNC_2(VAR_0)) {

        FUNC_0();


        FUNC_1(VAR_0);
    }
}
