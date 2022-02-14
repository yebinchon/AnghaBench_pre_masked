
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_desc {int id; int flags; int num_planes; int chroma_xs; int chroma_ys; int plane_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mp_imgfmt_desc FUNC_0 (int) ;

int FUNC_1(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    for (int VAR_8 = VAR_1 + 1; VAR_8 < VAR_0; VAR_8++) {
        struct mp_imgfmt_desc VAR_9 = FUNC_0(VAR_8);
        if (VAR_9.id && ((VAR_9.flags & VAR_7) == VAR_7)) {
            if (VAR_9.num_planes == VAR_5 && VAR_9.chroma_xs == VAR_3 &&
                VAR_9.chroma_ys == VAR_4 && VAR_9.plane_bits == VAR_6 &&
                (VAR_9.flags & VAR_2))
                return VAR_9.id;
        }
    }
    return 0;
}
