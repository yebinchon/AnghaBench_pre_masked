
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo {int osd; int params; struct priv* priv; } ;
struct priv {TYPE_1__* current; } ;
struct mp_osd_res {int dummy; } ;
struct TYPE_4__ {int pts; } ;
typedef TYPE_1__ mp_image_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mp_osd_res,int ,int ,TYPE_1__*) ;
 struct mp_osd_res FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_1, mp_image_t *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;

    VAR_3->current = VAR_2;

    struct mp_osd_res VAR_4 = FUNC_1(VAR_1->params);
    FUNC_0(VAR_1->osd, VAR_4, VAR_2->pts, VAR_0, VAR_3->current);
}
