
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* x11; struct priv* priv; } ;
struct priv {int original_image; scalar_t__ gc; scalar_t__* myximage; } ;
struct TYPE_2__ {int display; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct priv*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->myximage[0])
        FUNC_1(VAR_1, 0);
    if (VAR_1->myximage[1])
        FUNC_1(VAR_1, 1);
    if (VAR_1->gc)
        FUNC_0(VAR_0->x11->display, VAR_1->gc);

    FUNC_2(VAR_1->original_image);

    FUNC_3(VAR_0);
}
