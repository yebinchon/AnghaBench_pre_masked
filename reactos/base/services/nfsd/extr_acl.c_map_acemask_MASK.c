
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ACCESS_MASK ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(ACCESS_MASK VAR_11, int VAR_12, uint32_t *VAR_13)
{
    FUNC_0(VAR_5, "ACE MASK: %x\n", VAR_11);
    FUNC_2(0, VAR_11);

    if (VAR_11 & 0xf000000) {
        if (VAR_11 & VAR_6) {
            if (VAR_12 == VAR_10)
                *VAR_13 |= VAR_0;
            else
                *VAR_13 |= VAR_1;
        } else {
            if (VAR_11 & VAR_8)
                *VAR_13 |= VAR_3;
            if (VAR_11 & VAR_9)
                *VAR_13 |= VAR_4;
            if (VAR_11 & VAR_7)
                *VAR_13 |= VAR_2;
        }
    }
    else
        *VAR_13 = VAR_11 & 0x00ffffff;
    FUNC_1(0, *VAR_13);
}
