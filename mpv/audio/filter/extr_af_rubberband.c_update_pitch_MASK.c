
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {double pitch; scalar_t__ rubber; } ;


 int FUNC_0 (scalar_t__,double) ;

__attribute__((used)) static bool FUNC_1(struct priv *VAR_0, double VAR_1)
{
    if (VAR_1 < 0.01 || VAR_1 > 100.0)
        return 0;

    VAR_0->pitch = VAR_1;
    if (VAR_0->rubber)
        FUNC_0(VAR_0->rubber, VAR_0->pitch);
    return 1;
}
