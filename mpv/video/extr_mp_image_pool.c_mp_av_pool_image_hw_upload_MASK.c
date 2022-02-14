
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {scalar_t__ h; int w; } ;
struct AVBufferRef {int dummy; } ;
typedef int AVFrame ;


 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (struct AVBufferRef*,int *,int ) ;
 int FUNC_3 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_4 (int *) ;
 int FUNC_5 (struct mp_image*,struct mp_image*) ;
 int FUNC_6 (struct mp_image*,int ,scalar_t__) ;
 int FUNC_7 (struct mp_image*) ;

struct mp_image *FUNC_8(struct AVBufferRef *VAR_0,
                                            struct mp_image *VAR_1)
{
    AVFrame *VAR_2 = FUNC_0();
    if (!VAR_2)
        return ((void*)0);
    if (FUNC_2(VAR_0, VAR_2, 0) < 0) {
        FUNC_1(&VAR_2);
        return ((void*)0);
    }
    struct mp_image *VAR_3 = FUNC_4(VAR_2);
    FUNC_1(&VAR_2);
    if (!VAR_3)
        return ((void*)0);

    if (VAR_3->w < VAR_1->w || VAR_3->h < VAR_1->h) {
        FUNC_7(VAR_3);
        return ((void*)0);
    }

    FUNC_6(VAR_3, VAR_1->w, VAR_1->h);

    if (!FUNC_5(VAR_3, VAR_1)) {
        FUNC_7(VAR_3);
        return ((void*)0);
    }

    FUNC_3(VAR_3, VAR_1);
    return VAR_3;
}
