
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mp_imgfmt_desc {int flags; scalar_t__ num_planes; int plane_bits; } ;
struct TYPE_4__ {scalar_t__ opt_only_8bit; scalar_t__ opt_disable_shaders; } ;
typedef TYPE_1__ d3d_priv ;
typedef scalar_t__ D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;
 struct mp_imgfmt_desc FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(d3d_priv *VAR_6, uint32_t VAR_7,
                                   D3DFORMAT VAR_8[VAR_4])
{
    if (VAR_6->opt_disable_shaders)
        return 0;
    struct mp_imgfmt_desc VAR_9 = FUNC_1(VAR_7);
    if ((VAR_9.flags & VAR_3) && (VAR_9.flags & VAR_2)) {
        if (VAR_9.num_planes > VAR_4)
            return 0;
        int VAR_10 = VAR_9.plane_bits;
        if (VAR_10 < 8 || VAR_10 > 16)
            return 0;
        bool VAR_11 = VAR_10 == 8;
        if (!VAR_11 && VAR_6->opt_only_8bit)
            return 0;
        int VAR_12 = VAR_11 ? VAR_1 : VAR_0;
        D3DFORMAT VAR_13 = FUNC_0(VAR_6, VAR_12, 1);
        if (VAR_13) {
            for (int VAR_14 = 0; VAR_14 < VAR_9.num_planes; VAR_14++)
                VAR_8[VAR_14] = VAR_13;
            return VAR_5;
        }
    }
    return 0;
}
