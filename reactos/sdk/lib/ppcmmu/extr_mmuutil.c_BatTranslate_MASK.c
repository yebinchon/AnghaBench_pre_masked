
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0( int VAR_0, int VAR_1, int VAR_2 ) {
    int VAR_3;
    if(VAR_0 & 0x3fc)
    {
 VAR_3 = ~(0x1ffff | ((VAR_0 & 0x3fc)>>2)<<17);
 if((VAR_0 & 2) && ((VAR_0 & VAR_3) == (VAR_2 & VAR_3)))
     return (VAR_1 & VAR_3) | (VAR_2 & ~VAR_3);
    } else {
 VAR_3 = ~(0x1ffff | (VAR_1 << 17));
 if(!(VAR_1 & 0x40) || ((VAR_0 & VAR_3) != (VAR_2 & VAR_3)))
     return (VAR_1 & VAR_3) | (VAR_2 & ~VAR_3);
    }
    return -1;
}
