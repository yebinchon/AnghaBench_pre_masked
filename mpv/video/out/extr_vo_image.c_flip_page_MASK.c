
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int log; int global; struct priv* priv; } ;
struct priv {int current; TYPE_1__* opts; int frame; } ;
struct TYPE_2__ {int opts; scalar_t__ outdir; } ;


 int FUNC_0 (struct vo*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (void*,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char* FUNC_5 (void*,char*,int ,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (!VAR_1->current)
        return;

    (VAR_1->frame)++;

    void *VAR_2 = FUNC_7(((void*)0));
    char *VAR_3 = FUNC_5(VAR_2, "%08d.%s", VAR_1->frame,
                                     FUNC_1(VAR_1->opts->opts));

    if (VAR_1->opts->outdir && FUNC_4(VAR_1->opts->outdir))
        VAR_3 = FUNC_3(VAR_2, VAR_1->opts->outdir, VAR_3);

    FUNC_0(VAR_0, "Saving %s\n", VAR_3);
    FUNC_8(VAR_1->current, VAR_1->opts->opts, VAR_3, VAR_0->global, VAR_0->log);

    FUNC_6(VAR_2);
    FUNC_2(&VAR_1->current);
}
