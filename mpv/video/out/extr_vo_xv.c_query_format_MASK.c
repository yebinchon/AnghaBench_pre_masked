
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct xvctx {size_t formats; TYPE_1__* fo; } ;
struct vo {struct xvctx* priv; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0, int VAR_1)
{
    struct xvctx *VAR_2 = VAR_0->priv;
    uint32_t VAR_3;

    int VAR_4 = FUNC_0(VAR_1);
    if (VAR_4) {
        for (VAR_3 = 0; VAR_3 < VAR_2->formats; VAR_3++) {
            if (VAR_2->fo[VAR_3].id == VAR_4)
                return 1;
        }
    }
    return 0;
}
