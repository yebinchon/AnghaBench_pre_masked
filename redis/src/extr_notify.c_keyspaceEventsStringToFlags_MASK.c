
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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

int FUNC_0(char *VAR_13) {
    char *VAR_14 = VAR_13;
    int VAR_15, VAR_16 = 0;

    while((VAR_15 = *VAR_14++) != '\0') {
        switch(VAR_15) {
        case 'A': VAR_16 |= VAR_0; break;
        case 'g': VAR_16 |= VAR_3; break;
        case '$': VAR_16 |= VAR_11; break;
        case 'l': VAR_16 |= VAR_8; break;
        case 's': VAR_16 |= VAR_9; break;
        case 'h': VAR_16 |= VAR_4; break;
        case 'z': VAR_16 |= VAR_12; break;
        case 'x': VAR_16 |= VAR_2; break;
        case 'e': VAR_16 |= VAR_1; break;
        case 'K': VAR_16 |= VAR_6; break;
        case 'E': VAR_16 |= VAR_5; break;
        case 't': VAR_16 |= VAR_10; break;
        case 'm': VAR_16 |= VAR_7; break;
        default: return -1;
        }
    }
    return VAR_16;
}
