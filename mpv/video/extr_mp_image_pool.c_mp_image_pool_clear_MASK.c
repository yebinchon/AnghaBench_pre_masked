
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_pool {int num_images; struct mp_image** images; } ;
struct mp_image {struct image_flags* priv; } ;
struct image_flags {int pool_alive; int referenced; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct mp_image*) ;

void FUNC_4(struct mp_image_pool *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_images; VAR_1++) {
        struct mp_image *VAR_2 = VAR_0->images[VAR_1];
        struct image_flags *VAR_3 = VAR_2->priv;
        bool VAR_4;
        FUNC_1();
        FUNC_0(VAR_3->pool_alive);
        VAR_3->pool_alive = 0;
        VAR_4 = VAR_3->referenced;
        FUNC_2();
        if (!VAR_4)
            FUNC_3(VAR_2);
    }
    VAR_0->num_images = 0;
}
