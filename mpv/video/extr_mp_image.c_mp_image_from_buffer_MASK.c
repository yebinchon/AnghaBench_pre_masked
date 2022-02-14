
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_image {int * bufs; } ;


 int FUNC_0 (int *,int,void (*) (void*,int *),void*,int ) ;
 int FUNC_1 (struct mp_image*,int,int *,int) ;
 struct mp_image* FUNC_2 (int *) ;
 int FUNC_3 (struct mp_image*,int,int) ;
 int FUNC_4 (struct mp_image*,int) ;
 int FUNC_5 (struct mp_image*) ;

struct mp_image *FUNC_6(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                      uint8_t *VAR_4, int VAR_5,
                                      void *VAR_6,
                                      void (*VAR_7)(void *VAR_8, uint8_t *VAR_9))
{
    struct mp_image *VAR_10 = FUNC_2(((void*)0));
    FUNC_4(VAR_10, VAR_0);
    FUNC_3(VAR_10, VAR_1, VAR_2);

    if (!FUNC_1(VAR_10, VAR_3, VAR_4, VAR_5))
        goto fail;

    VAR_10->bufs[0] = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_6, 0);
    if (!VAR_10->bufs[0])
        goto fail;

    return VAR_10;

fail:
    FUNC_5(VAR_10);
    return ((void*)0);
}
