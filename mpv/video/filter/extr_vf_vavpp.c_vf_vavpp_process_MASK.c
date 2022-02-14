
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_filters; } ;
struct priv {int queue; TYPE_1__ pipe; } ;
struct mp_image {int dummy; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (struct mp_image*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mp_image* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mp_filter*) ;
 int FUNC_7 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_8(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_7(VAR_0);

    FUNC_2(VAR_1->queue);

    if (!FUNC_1(VAR_1->queue))
        return;

    if (!VAR_1->pipe.num_filters || !FUNC_4(VAR_1->queue)) {

        struct mp_image *VAR_2 = FUNC_3(VAR_1->queue, 0);
        FUNC_5(VAR_1->queue, FUNC_0(VAR_2));
    } else {
        FUNC_5(VAR_1->queue, FUNC_6(VAR_0));
    }
}
