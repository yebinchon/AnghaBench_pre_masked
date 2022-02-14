
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_buffers; scalar_t__ context; scalar_t__ config; int av_device_ref; int queue; int hw_pool; int display; int * buffers; } ;
struct mp_filter {struct priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mp_filter *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_buffers; VAR_3++)
        FUNC_3(VAR_2->display, VAR_2->buffers[VAR_3]);
    if (VAR_2->context != VAR_0)
        FUNC_5(VAR_2->display, VAR_2->context);
    if (VAR_2->config != VAR_0)
        FUNC_4(VAR_2->display, VAR_2->config);
    FUNC_0(&VAR_2->hw_pool);
    FUNC_1(VAR_1);
    FUNC_2(VAR_2->queue);
    FUNC_0(&VAR_2->av_device_ref);
}
