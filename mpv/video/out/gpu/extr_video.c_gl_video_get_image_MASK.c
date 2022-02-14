
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int dummy; } ;
struct gl_video {int dummy; } ;


 int FUNC_0 (struct gl_video*,int) ;
 void* FUNC_1 (struct gl_video*,int) ;
 int FUNC_2 (struct gl_video*,void*) ;
 struct mp_image* FUNC_3 (int,int,int,int,void*,int,struct gl_video*,int (*) (struct gl_video*,void*)) ;
 int FUNC_4 (int,int,int,int) ;

struct mp_image *FUNC_5(struct gl_video *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                    int VAR_4)
{
    if (!FUNC_0(VAR_0, VAR_1))
        return ((void*)0);

    int VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_5 < 0)
        return ((void*)0);

    int VAR_6 = VAR_5 + VAR_4;
    void *VAR_7 = FUNC_1(VAR_0, VAR_6);
    if (!VAR_7)
        return ((void*)0);



    struct mp_image *VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
                                                VAR_7, VAR_6, VAR_0,
                                                FUNC_2);
    if (!VAR_8)
        FUNC_2(VAR_0, VAR_7);
    return VAR_8;
}
