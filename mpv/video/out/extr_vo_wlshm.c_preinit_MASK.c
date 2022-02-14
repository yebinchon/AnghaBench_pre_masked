
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int global; int log; struct priv* priv; } ;
struct priv {TYPE_1__* sws; } ;
struct TYPE_3__ {int log; } ;


 TYPE_1__* FUNC_0 (struct vo*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct vo*) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!FUNC_2(VAR_0))
        return -1;
    VAR_1->sws = FUNC_0(VAR_0);
    VAR_1->sws->log = VAR_0->log;
    FUNC_1(VAR_1->sws, VAR_0->global);

    return 0;
}
