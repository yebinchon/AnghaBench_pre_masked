
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_image {struct image_flags* priv; } ;
struct image_flags {int referenced; int pool_alive; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct mp_image*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    struct mp_image *VAR_2 = VAR_0;
    struct image_flags *VAR_3 = VAR_2->priv;
    bool VAR_4;
    FUNC_1();
    FUNC_0(VAR_3->referenced);
    VAR_3->referenced = 0;
    VAR_4 = VAR_3->pool_alive;
    FUNC_2();
    if (!VAR_4)
        FUNC_3(VAR_2);
}
