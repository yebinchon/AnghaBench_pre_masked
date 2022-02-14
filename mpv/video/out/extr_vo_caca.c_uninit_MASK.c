
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int canvas; int display; int * dither_buffer; int * dither; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_2(VAR_1->dither);
    VAR_1->dither = ((void*)0);
    FUNC_3(VAR_1->dither_buffer);
    VAR_1->dither_buffer = ((void*)0);
    FUNC_1(VAR_1->display);
    FUNC_0(VAR_1->canvas);
}
