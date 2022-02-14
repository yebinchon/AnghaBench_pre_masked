
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int ,int) ;
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

__attribute__((used)) static inline int FUNC_1(WCHAR VAR_16)
{
    int VAR_17;

    if (!VAR_16) return VAR_3;
    if (VAR_16 == 0x200D) return VAR_14;
    if (VAR_16 == 0x200C) return VAR_15;
    if (VAR_16 == 0x00A0) return VAR_10;

    VAR_17 = FUNC_0( VAR_0, VAR_16 );

    if ((VAR_17 & 0x00ff) != 0x0007) VAR_17 = VAR_17 & 0x00ff;

    switch( VAR_17 )
    {
        case 0x0d07:
        case 0x0e07:
        default: return VAR_3;
        case 0x0001:
        case 0x0002:
        case 0x0011:
        case 0x0012:
        case 0x0013:
        case 0x0014: return VAR_9;
        case 0x0003:
        case 0x0009:
        case 0x000a:
        case 0x000b:
        case 0x000d:
        case 0x000e:
        case 0x000f:
        case 0x0010: return VAR_2;
        case 0x0004: return VAR_11;
        case 0x0005: return VAR_4;
        case 0x0006:
        case 0x0008: return VAR_13;
        case 0x0007:
        case 0x0107: return VAR_7;
        case 0x0207:
        case 0x0307: return VAR_8;
        case 0x0807:
        case 0x0907:
        case 0x0a07:
        case 0x0b07:
        case 0x0c07:
        case 0x0407: return VAR_1;
        case 0x0507: return VAR_5;
        case 0x0607: return VAR_6;
        case 0x000c:
        case 0x0015: return VAR_12;
    };
}
