
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0( int VAR_0, int VAR_1, int VAR_2 ) {
    int VAR_3 = 0xfffe0000 & ~((VAR_1 & 0x3f) << 17);
    return (VAR_1 & 0x40) && ((VAR_2 & VAR_3) == (VAR_0 & VAR_3));
}
