
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {struct priv* priv; } ;
struct queue_surf {int dummy; } ;
struct priv {int queue_len; size_t queue_pos; struct queue_surf** queue; } ;


 int FUNC_0 (struct ra_hwdec_mapper*,char*,int) ;
 int FUNC_1 (struct priv*,struct queue_surf**,int,size_t,struct queue_surf*) ;
 int FUNC_2 (struct ra_hwdec_mapper*,char*) ;
 struct queue_surf* FUNC_3 (struct ra_hwdec_mapper*) ;
 int FUNC_4 (struct ra_hwdec_mapper*,struct queue_surf*) ;
 int FUNC_5 (struct ra_hwdec_mapper*,struct queue_surf*) ;

__attribute__((used)) static struct queue_surf *FUNC_6(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->queue_len || !FUNC_4(VAR_0, VAR_1->queue[VAR_1->queue_pos])) {
        if (VAR_1->queue_len < 16) {
            struct queue_surf *VAR_2 = FUNC_3(VAR_0);
            if (!VAR_2)
                return ((void*)0);


            FUNC_1(VAR_1, VAR_1->queue, VAR_1->queue_len, VAR_1->queue_pos, VAR_2);
            FUNC_0(VAR_0, "Queue grew to %d surfaces\n", VAR_1->queue_len);
        } else {



            if (!FUNC_5(VAR_0, VAR_1->queue[VAR_1->queue_pos]))
                return ((void*)0);
            FUNC_2(VAR_0, "Queue underflow!\n");
        }
    }
    return VAR_1->queue[VAR_1->queue_pos];
}
