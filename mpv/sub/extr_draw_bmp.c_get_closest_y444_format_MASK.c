
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_desc {int flags; int component_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int const,int) ;
 struct mp_imgfmt_desc FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_5, int *VAR_6, int *VAR_7)
{
    struct mp_imgfmt_desc VAR_8 = FUNC_1(VAR_5);
    int VAR_9 = VAR_8.flags & VAR_1 ? 4 : 3;
    if (VAR_8.flags & VAR_2) {

        int VAR_10 = (VAR_8.component_bits > 8) ? VAR_8.component_bits : 8;
        if (VAR_10 > 16)
            VAR_10 = 16;
        *VAR_6 = FUNC_0(0, 0, VAR_9, VAR_10, VAR_3);
        if (!FUNC_2(*VAR_6))
            *VAR_6 = FUNC_0(0, 0, VAR_9, 8, VAR_3);
    } else if (VAR_8.flags & VAR_4) {
        const int VAR_11 = (VAR_8.component_bits > 8) ? 16 : 8;
        *VAR_6 = FUNC_0(0, 0, VAR_9, VAR_11, VAR_4);
    } else {
        *VAR_6 = 0;
    }
    if (!FUNC_2(*VAR_6))
        *VAR_6 = VAR_0;
    *VAR_7 = FUNC_1(*VAR_6).component_bits;
}
