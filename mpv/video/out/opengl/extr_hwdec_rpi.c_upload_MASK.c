
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ra_hwdec {struct priv* priv; } ;
struct priv {int params; TYPE_1__* swpool; } ;
struct mp_image {int member_0; void** planes; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_8__ {int queue; } ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (struct ra_hwdec*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mp_image*,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_6 (int *,TYPE_2__*,int ) ;
 int FUNC_7 (struct mp_image*,int ) ;

__attribute__((used)) static struct mp_image *FUNC_8(struct ra_hwdec *VAR_2, struct mp_image *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;

    MMAL_BUFFER_HEADER_T *VAR_5 = FUNC_4(VAR_4->swpool->queue);
    if (!VAR_5) {
        FUNC_0(VAR_2, "Can't allocate buffer.\n");
        return ((void*)0);
    }
    FUNC_3(VAR_5);

    struct mp_image *VAR_6 = FUNC_6(((void*)0), VAR_5,
                                                       VAR_1);
    if (!VAR_6) {
        FUNC_2(VAR_5);
        FUNC_0(VAR_2, "Out of memory.\n");
        return ((void*)0);
    }

    FUNC_7(VAR_6, VAR_0);
    VAR_6->planes[3] = (void *)VAR_5;

    struct mp_image VAR_7 = {0};
    VAR_5->length = FUNC_1(&VAR_7, VAR_5, &VAR_4->params);
    FUNC_5(&VAR_7, VAR_3);

    return VAR_6;
}
