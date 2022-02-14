
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lfs2_tag_t ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_2,
        lfs2_tag_t VAR_3, const void *VAR_4) {
    lfs2_tag_t *VAR_5 = VAR_2;
    (void)VAR_4;


    uint32_t VAR_6 = (VAR_3 & FUNC_0(0x100, 0, 0))
            ? FUNC_0(0x7ff, 0x3ff, 0)
            : FUNC_0(0x700, 0x3ff, 0);


    if ((VAR_6 & VAR_3) == (VAR_6 & *VAR_5) ||
            FUNC_2(*VAR_5) ||
            (FUNC_0(0x7ff, 0x3ff, 0) & VAR_3) == (
                FUNC_0(VAR_0, 0, 0) |
                    (FUNC_0(0, 0x3ff, 0) & *VAR_5))) {
        return 1;
    }


    if (FUNC_4(VAR_3) == VAR_1 &&
            FUNC_1(VAR_3) <= FUNC_1(*VAR_5)) {
        *VAR_5 += FUNC_0(0, FUNC_3(VAR_3), 0);
    }

    return 0;
}
