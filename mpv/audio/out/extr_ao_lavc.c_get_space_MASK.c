
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int aframesize; int framecount; } ;
struct ao {struct priv* priv; } ;



__attribute__((used)) static int FUNC_0(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    return VAR_1->aframesize * VAR_1->framecount;
}
