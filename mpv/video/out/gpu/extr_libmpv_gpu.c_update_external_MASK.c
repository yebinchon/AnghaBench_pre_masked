
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int * osd; } ;
struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;


 int FUNC_0 (int ,struct vo*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct render_backend *VAR_0, struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    FUNC_1(VAR_2->renderer, VAR_1 ? VAR_1->osd : ((void*)0));
    if (VAR_1)
        FUNC_0(VAR_2->renderer, VAR_1);
}
