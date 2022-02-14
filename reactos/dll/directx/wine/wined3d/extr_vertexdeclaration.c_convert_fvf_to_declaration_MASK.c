
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_element {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_fvf_convert_state {struct wined3d_vertex_element* elements; int idx; scalar_t__ offset; struct wined3d_gl_info const* gl_info; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct wined3d_fvf_convert_state*,int ,int ,unsigned int) ;
 struct wined3d_vertex_element* FUNC_2 (unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_3(const struct wined3d_gl_info *VAR_28,
        DWORD VAR_29, struct wined3d_vertex_element **VAR_30)
{
    BOOL VAR_31 = !!(VAR_29 & VAR_10);
    BOOL VAR_32 = (VAR_29 & VAR_17) > VAR_18;
    BOOL VAR_33 = VAR_32 &&
       (((VAR_29 & VAR_17) == VAR_17) ||
        (VAR_29 & VAR_7) ||
        (VAR_29 & VAR_8));
    BOOL VAR_34 = !!(VAR_29 & VAR_9);
    BOOL VAR_35 = !!(VAR_29 & VAR_11);
    BOOL VAR_36 = !!(VAR_29 & VAR_6);
    BOOL VAR_37 = !!(VAR_29 & VAR_12);

    DWORD VAR_38 = (VAR_29 & VAR_13) >> VAR_14;
    DWORD VAR_39 = (VAR_29 & 0xffff0000) >> 16;
    struct wined3d_fvf_convert_state VAR_40;
    unsigned int VAR_41;
    unsigned int VAR_42;
    DWORD VAR_43 = 1 + (((VAR_29 & VAR_17) - VAR_15) >> 1);
    if (VAR_33) VAR_43--;


    VAR_41 = VAR_31 + (VAR_32 && VAR_43 > 0) + VAR_33 + VAR_34 +
           VAR_35 + VAR_36 + VAR_37 + VAR_38;

    VAR_40.gl_info = VAR_28;
    if (!(VAR_40.elements = FUNC_2(VAR_41, sizeof(*VAR_40.elements))))
        return ~0u;
    VAR_40.offset = 0;
    VAR_40.idx = 0;

    if (VAR_31)
    {
        if (!VAR_32 && (VAR_29 & VAR_18))
            FUNC_1(&VAR_40, VAR_1, VAR_25, 0);
        else if ((VAR_29 & VAR_19) == VAR_19)
            FUNC_1(&VAR_40, VAR_1, VAR_24, 0);
        else
            FUNC_1(&VAR_40, VAR_2, VAR_24, 0);
    }

    if (VAR_32 && (VAR_43 > 0))
    {
        if ((VAR_29 & VAR_17) == VAR_16 && (VAR_29 & VAR_7))
            FUNC_1(&VAR_40, VAR_0, VAR_21, 0);
        else
        {
            switch (VAR_43)
            {
                case 1:
                    FUNC_1(&VAR_40, VAR_4, VAR_21, 0);
                    break;
                case 2:
                    FUNC_1(&VAR_40, VAR_3, VAR_21, 0);
                    break;
                case 3:
                    FUNC_1(&VAR_40, VAR_2, VAR_21, 0);
                    break;
                case 4:
                    FUNC_1(&VAR_40, VAR_1, VAR_21, 0);
                    break;
                default:
                    FUNC_0("Unexpected amount of blend values: %u\n", VAR_43);
            }
        }
    }

    if (VAR_33)
    {
        if ((VAR_29 & VAR_8)
                || ((VAR_29 & VAR_17) == VAR_16 && (VAR_29 & VAR_7)))
            FUNC_1(&VAR_40, VAR_5, VAR_20, 0);
        else if (VAR_29 & VAR_7)
            FUNC_1(&VAR_40, VAR_0, VAR_20, 0);
        else
            FUNC_1(&VAR_40, VAR_4, VAR_20, 0);
    }

    if (VAR_34)
        FUNC_1(&VAR_40, VAR_2, VAR_23, 0);
    if (VAR_35)
        FUNC_1(&VAR_40, VAR_4, VAR_26, 0);
    if (VAR_36)
        FUNC_1(&VAR_40, VAR_0, VAR_22, 0);
    if (VAR_37)
        FUNC_1(&VAR_40, VAR_0, VAR_22, 1);

    for (VAR_42 = 0; VAR_42 < VAR_38; ++VAR_42)
    {
        switch ((VAR_39 >> (VAR_42 * 2)) & 0x03)
        {
            case 131:
                FUNC_1(&VAR_40, VAR_4, VAR_27, VAR_42);
                break;
            case 130:
                FUNC_1(&VAR_40, VAR_3, VAR_27, VAR_42);
                break;
            case 129:
                FUNC_1(&VAR_40, VAR_2, VAR_27, VAR_42);
                break;
            case 128:
                FUNC_1(&VAR_40, VAR_1, VAR_27, VAR_42);
                break;
        }
    }

    *VAR_30 = VAR_40.elements;
    return VAR_41;
}
