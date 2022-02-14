
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image_pool {int num_images; scalar_t__ lru_counter; scalar_t__ use_lru; struct mp_image** images; } ;
struct mp_image {int imgfmt; int w; int h; struct image_flags* priv; TYPE_1__** bufs; } ;
struct image_flags {int pool_alive; int referenced; scalar_t__ order; } ;
struct TYPE_3__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int ,int ,struct mp_image*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct mp_image* FUNC_3 (struct mp_image*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct mp_image*) ;
 int VAR_2 ;

struct mp_image *FUNC_7(struct mp_image_pool *VAR_3, int VAR_4,
                                            int VAR_5, int VAR_6)
{
    struct mp_image *VAR_7 = ((void*)0);
    FUNC_4();
    for (int VAR_8 = 0; VAR_8 < VAR_3->num_images; VAR_8++) {
        struct mp_image *VAR_9 = VAR_3->images[VAR_8];
        struct image_flags *VAR_10 = VAR_9->priv;
        FUNC_0(VAR_10->pool_alive);
        if (!VAR_10->referenced) {
            if (VAR_9->imgfmt == VAR_4 && VAR_9->w == VAR_5 && VAR_9->h == VAR_6) {
                if (VAR_3->use_lru) {
                    struct image_flags *VAR_11 = VAR_7 ? VAR_7->priv : ((void*)0);
                    if (!VAR_11 || VAR_11->order > VAR_10->order)
                        VAR_7 = VAR_9;
                } else {
                    VAR_7 = VAR_9;
                    break;
                }
            }
        }
    }
    FUNC_5();
    if (!VAR_7)
        return ((void*)0);




    for (int VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
        FUNC_0(!!VAR_7->bufs[VAR_12] == !VAR_12);

    struct mp_image *VAR_13 = FUNC_3(VAR_7);




    int VAR_14 = FUNC_2(VAR_7->bufs[0]) ? 0 : VAR_0;
    VAR_13->bufs[0] = FUNC_1(VAR_7->bufs[0]->data, VAR_7->bufs[0]->size,
                                    VAR_2, VAR_7, VAR_14);
    if (!VAR_13->bufs[0]) {
        FUNC_6(VAR_13);
        return ((void*)0);
    }

    struct image_flags *VAR_15 = VAR_7->priv;
    FUNC_0(!VAR_15->referenced && VAR_15->pool_alive);
    VAR_15->referenced = 1;
    VAR_15->order = ++VAR_3->lru_counter;
    return VAR_13;
}
