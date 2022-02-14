
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_aframe_pool {int element_size; scalar_t__ avpool; } ;
struct mp_aframe {TYPE_1__* av_frame; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int* linesize; int nb_samples; TYPE_2__** buf; scalar_t__* extended_data; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 size_t VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (size_t,int *) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__**) ;
 scalar_t__* FUNC_7 (int,int) ;
 int FUNC_8 (struct mp_aframe*) ;
 size_t FUNC_9 (struct mp_aframe*) ;
 scalar_t__ FUNC_10 (struct mp_aframe*) ;
 int VAR_1 ;
 size_t FUNC_11 (int) ;
 int FUNC_12 (struct mp_aframe_pool*,int ) ;

int FUNC_13(struct mp_aframe_pool *VAR_2, struct mp_aframe *VAR_3,
                            int VAR_4)
{
    int VAR_5 = FUNC_8(VAR_3);
    size_t VAR_6 = FUNC_9(VAR_3);



    int VAR_7 = FUNC_1(FUNC_0(VAR_4, 1), 32);
    int VAR_8 = FUNC_1(VAR_6 * VAR_7, 64);
    int VAR_9 = VAR_8 * VAR_5;

    if (VAR_9 <= 0 || FUNC_10(VAR_3))
        return -1;

    if (!VAR_2->avpool || VAR_9 > VAR_2->element_size) {
        size_t VAR_10 = FUNC_11(VAR_9);
        if (VAR_10 >= VAR_0)
            return -1;
        FUNC_5(&VAR_2->avpool);
        VAR_2->element_size = VAR_10;
        VAR_2->avpool = FUNC_4(VAR_2->element_size, ((void*)0));
        if (!VAR_2->avpool)
            return -1;
        FUNC_12(VAR_2, VAR_1);
    }




    AVFrame *VAR_11 = VAR_3->av_frame;
    if (VAR_11->extended_data != VAR_11->data)
        FUNC_6(&VAR_11->extended_data);
    VAR_11->extended_data =
        FUNC_7(VAR_5, sizeof(VAR_11->extended_data[0]));
    if (!VAR_11->extended_data)
        FUNC_2();
    VAR_11->buf[0] = FUNC_3(VAR_2->avpool);
    if (!VAR_11->buf[0])
        return -1;
    VAR_11->linesize[0] = VAR_4 * VAR_6;
    for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
        VAR_11->extended_data[VAR_12] = VAR_11->buf[0]->data + VAR_12 * VAR_8;
    VAR_11->nb_samples = VAR_4;

    return 0;
}
