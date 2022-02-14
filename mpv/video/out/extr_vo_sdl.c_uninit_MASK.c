
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int * window; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct priv*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    FUNC_2(VAR_1);
    FUNC_0(VAR_2->window);
    VAR_2->window = ((void*)0);
    FUNC_1(VAR_0);
    FUNC_3(VAR_2);
}
