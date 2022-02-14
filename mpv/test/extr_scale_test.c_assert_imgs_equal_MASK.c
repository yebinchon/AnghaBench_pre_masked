
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scale_test {int fail; } ;
struct TYPE_2__ {int flags; int* bytes; } ;
struct mp_image {scalar_t__ imgfmt; scalar_t__ w; scalar_t__ h; int num_planes; int* stride; TYPE_1__ fmt; void** planes; } ;
typedef int ptrdiff_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct scale_test*,char*,struct mp_image*) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 scalar_t__ FUNC_3 (void*,void*,size_t) ;
 char* FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(struct scale_test *VAR_1, FILE *VAR_2,
                              struct mp_image *VAR_3, struct mp_image *VAR_4)
{
    FUNC_0(VAR_3->imgfmt == VAR_4->imgfmt);
    FUNC_0(VAR_3->w == VAR_4->w);
    FUNC_0(VAR_3->h == VAR_4->h);

    FUNC_0(VAR_3->fmt.flags & VAR_0);
    FUNC_0(VAR_3->fmt.bytes[0]);

    for (int VAR_5 = 0; VAR_5 < VAR_3->num_planes; VAR_5++) {
        for (int VAR_6 = 0; VAR_6 < VAR_3->h; VAR_6++) {
            void *VAR_7 = VAR_3->planes[VAR_5] + VAR_3->stride[VAR_5] * (ptrdiff_t)VAR_6;
            void *VAR_8 = VAR_4->planes[VAR_5] + VAR_4->stride[VAR_5] * (ptrdiff_t)VAR_6;
            size_t VAR_9 = VAR_3->fmt.bytes[VAR_5] * (size_t)VAR_4->w;

            bool VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9) == 0;
            if (!VAR_10) {
                VAR_1->fail += 1;
                char *VAR_11 = FUNC_4(80, "img%d_ref", VAR_1->fail);
                char *VAR_12 = FUNC_4(80, "img%d_new", VAR_1->fail);
                FUNC_2(VAR_2, "Images mismatching, dumping to %s/%s\n", VAR_11, VAR_12);
                FUNC_1(VAR_1, VAR_11, VAR_3);
                FUNC_1(VAR_1, VAR_12, VAR_4);
                return;
            }
        }
    }
}
