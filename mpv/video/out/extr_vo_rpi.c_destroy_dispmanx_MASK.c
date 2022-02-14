
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {scalar_t__ display; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_0);
    FUNC_0(VAR_0);

    if (VAR_1->display) {
        FUNC_3(VAR_1->display, ((void*)0), ((void*)0));
        FUNC_2(VAR_1->display);
    }
    VAR_1->display = 0;
}
