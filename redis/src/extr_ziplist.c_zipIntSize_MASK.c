
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*,unsigned char) ;

unsigned int FUNC_1(unsigned char VAR_2) {
    switch(VAR_2) {
    case 128: return 1;
    case 132: return 2;
    case 131: return 3;
    case 130: return 4;
    case 129: return 8;
    }
    if (VAR_2 >= VAR_1 && VAR_2 <= VAR_0)
        return 0;
    FUNC_0("Invalid integer encoding 0x%02X", VAR_2);
    return 0;
}
