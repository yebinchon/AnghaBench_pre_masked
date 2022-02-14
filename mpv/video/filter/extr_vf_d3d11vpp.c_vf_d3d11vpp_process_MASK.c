
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_subfmt; } ;
struct priv {int require_filtering; int queue; TYPE_1__ out_params; TYPE_1__ params; int out_format; int pool; } ;
struct mp_image {TYPE_1__ params; } ;
struct mp_filter {struct priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*) ;
 struct mp_image* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mp_image* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct mp_image*) ;
 struct mp_image* FUNC_9 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_10(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    struct mp_image *VAR_4 = FUNC_5(VAR_3->queue);
    if (VAR_4) {
        FUNC_3(VAR_3->pool);

        FUNC_0(VAR_2);

        VAR_3->params = VAR_4->params;
        VAR_3->out_params = VAR_3->params;

        VAR_3->out_params.hw_subfmt = VAR_1;
        VAR_3->out_format = VAR_0;

        VAR_3->require_filtering = VAR_3->params.hw_subfmt != VAR_3->out_params.hw_subfmt;
    }

    if (!FUNC_4(VAR_3->queue))
        return;

    if (!FUNC_7(VAR_3->queue) && !VAR_3->require_filtering) {

        struct mp_image *VAR_5 = FUNC_2(FUNC_6(VAR_3->queue, 0));
        if (!VAR_5) {
            FUNC_1(VAR_2);
            return;
        }
        FUNC_8(VAR_3->queue, VAR_5);
    } else {
        FUNC_8(VAR_3->queue, FUNC_9(VAR_2));
    }
}
