
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {scalar_t__ w; scalar_t__ h; scalar_t__ imgfmt; scalar_t__* planes; int * stride; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_image*,int,int) ;
 int FUNC_2 (struct mp_image*,int ) ;
 int FUNC_3 (struct mp_image*,struct mp_image*,int ) ;

__attribute__((used)) static void FUNC_4(struct mp_image *VAR_4, struct mp_image *VAR_5)
{
    FUNC_0(VAR_4->w == VAR_5->w && VAR_4->h == VAR_5->h);
    if (VAR_5 != VAR_4) {
        if (VAR_4->imgfmt == VAR_0) {

            FUNC_0(VAR_5->imgfmt == VAR_1);
            FUNC_0(VAR_5->planes[0] == VAR_4->planes[0]);
            struct mp_image VAR_6 = *VAR_5;
            FUNC_2(&VAR_6, VAR_2);
            FUNC_1(&VAR_6, VAR_4->w >> 1, VAR_4->h >> 1);
            struct mp_image VAR_7 = VAR_6;
            FUNC_1(&VAR_7, VAR_5->w, VAR_5->h);
            for (int VAR_8 = 0; VAR_8 < 2; VAR_8++) {
                VAR_6.planes[0] = VAR_4->planes[1 + VAR_8];
                VAR_6.stride[0] = VAR_4->stride[1 + VAR_8];
                VAR_7.planes[0] = VAR_5->planes[1 + VAR_8];
                VAR_7.stride[0] = VAR_5->stride[1 + VAR_8];
                FUNC_3(&VAR_6, &VAR_7, VAR_3);
            }
        } else {
            FUNC_3(VAR_4, VAR_5, VAR_3);
        }
    }
}
