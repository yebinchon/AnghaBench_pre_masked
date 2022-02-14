
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int vs_initialized; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0)
{
    if (VAR_0->vs_initialized)
        FUNC_0();
    VAR_0->vs_initialized = 0;
}
