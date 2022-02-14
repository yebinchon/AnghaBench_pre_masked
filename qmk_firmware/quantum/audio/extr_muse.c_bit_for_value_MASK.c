
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;

bool FUNC_0(uint8_t VAR_5) {
    switch (VAR_5) {
        case 129:
            return 0;
        case 128:
            return 1;
        case 130:
            return VAR_1;
        case 136:
            return (VAR_4 & 1);
        case 135:
            return (VAR_4 & 2);
        case 133:
            return (VAR_4 & 4);
        case 131:
            return (VAR_4 & 8);
        case 134:
            return (VAR_2 & 1);
        case 132:
            return (VAR_2 & 2);
        default:
            return VAR_3 & (1UL << (VAR_5 - VAR_0));
    }
}
