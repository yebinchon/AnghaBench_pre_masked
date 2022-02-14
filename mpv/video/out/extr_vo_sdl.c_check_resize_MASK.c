
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dwidth; int dheight; struct priv* priv; } ;
struct priv {int window; } ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (struct vo*,int,int) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    int VAR_2, VAR_3;
    FUNC_0(VAR_1->window, &VAR_2, &VAR_3);
    if (VAR_0->dwidth != VAR_2 || VAR_0->dheight != VAR_3)
        FUNC_1(VAR_0, VAR_2, VAR_3);
}
