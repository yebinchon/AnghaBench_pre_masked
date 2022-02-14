
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirect_priv {struct redirect_priv* to; } ;


 int FUNC_0 (struct redirect_priv*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct redirect_priv *VAR_1 = VAR_0;

    if (VAR_1) {
        FUNC_0(VAR_1->to);
        FUNC_0(VAR_1);
    }
}
