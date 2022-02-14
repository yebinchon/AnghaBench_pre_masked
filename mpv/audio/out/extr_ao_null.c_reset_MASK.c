
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int playing_final; scalar_t__ buffered; } ;
struct ao {struct priv* priv; } ;



__attribute__((used)) static void FUNC_0(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    VAR_1->buffered = 0;
    VAR_1->playing_final = 0;
}
