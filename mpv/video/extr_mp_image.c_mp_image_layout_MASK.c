
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_desc {int flags; int* ys; int* bpp; int* bytes; int * xs; } ;
struct mp_image_params {int imgfmt; int w; int h; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct mp_image_params*) ;
 struct mp_imgfmt_desc FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_4, int VAR_5, int VAR_6, int VAR_7,
                           int VAR_8[VAR_3],
                           int VAR_9[VAR_3],
                           int VAR_10[VAR_3])
{
    struct mp_imgfmt_desc VAR_11 = FUNC_3(VAR_4);
    struct mp_image_params VAR_12 = {.imgfmt = VAR_4, .w = VAR_5, .h = VAR_6};

    if (!FUNC_2(&VAR_12) || VAR_11.flags & VAR_1)
        return -1;





    for (int VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
        int VAR_14 = FUNC_1(VAR_5, VAR_11.xs[VAR_13]);
        int VAR_15 = FUNC_0(VAR_6, 32) >> VAR_11.ys[VAR_13];
        int VAR_16 = (VAR_14 * VAR_11.bpp[VAR_13] + 7) / 8;
        VAR_8[VAR_13] = FUNC_0(VAR_16, VAR_7);

        while (VAR_11.bytes[VAR_13] && VAR_8[VAR_13] % VAR_11.bytes[VAR_13])
            VAR_8[VAR_13] += VAR_7;
        VAR_10[VAR_13] = VAR_8[VAR_13] * VAR_15;
    }
    if (VAR_11.flags & VAR_2)
        VAR_10[1] = VAR_0;

    int VAR_17 = 0;
    for (int VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
        VAR_9[VAR_18] = VAR_10[VAR_18] ? VAR_17 : -1;
        VAR_17 += VAR_10[VAR_18];
    }

    return VAR_17;
}
