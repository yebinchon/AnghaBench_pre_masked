
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct mp_image {int dummy; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__**) ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (int *,int const*,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 struct mp_image* FUNC_11 (struct mp_image*,int,int *,int ) ;
 int FUNC_12 (int ,void*,size_t) ;
 struct mp_image* FUNC_13 (int *) ;
 int VAR_1 ;
 int FUNC_14 (struct mp_image*) ;

struct mp_image *FUNC_15(void *VAR_2, size_t VAR_3, int VAR_4)
{
    const AVCodec *VAR_5 = FUNC_6(VAR_0);
    if (!VAR_5)
        return ((void*)0);

    AVCodecContext *VAR_6 = FUNC_5(VAR_5);
    if (!VAR_6)
        return ((void*)0);

    if (FUNC_8(VAR_6, VAR_5, ((void*)0)) < 0) {
        FUNC_7(&VAR_6);
        return ((void*)0);
    }

    AVPacket *VAR_7 = FUNC_3();
    if (VAR_7) {
        if (FUNC_2(VAR_7, VAR_3) >= 0)
            FUNC_12(VAR_7->data, VAR_2, VAR_3);
    }


    FUNC_10(VAR_6, VAR_7);
    FUNC_10(VAR_6, ((void*)0));

    FUNC_4(&VAR_7);

    struct mp_image *VAR_8 = ((void*)0);
    AVFrame *VAR_9 = FUNC_0();
    if (VAR_9 && FUNC_9(VAR_6, VAR_9) >= 0) {
        struct mp_image *VAR_10 = FUNC_13(VAR_9);
        if (VAR_10)
            VAR_8 = FUNC_11(VAR_10, VAR_4, ((void*)0), VAR_1);
        FUNC_14(VAR_10);
    }
    FUNC_1(&VAR_9);

    FUNC_7(&VAR_6);
    return VAR_8;
}
