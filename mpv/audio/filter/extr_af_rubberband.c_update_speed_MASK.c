
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {double speed; scalar_t__ rubber; } ;


 int FUNC_0 (scalar_t__,double) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0, double VAR_1)
{
    VAR_0->speed = VAR_1;
    if (VAR_0->rubber)
        FUNC_0(VAR_0->rubber, 1.0 / VAR_0->speed);
}
