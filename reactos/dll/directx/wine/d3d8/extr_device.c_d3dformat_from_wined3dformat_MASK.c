
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef int D3DFORMAT ;
typedef int BYTE ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;

D3DFORMAT FUNC_2(enum wined3d_format_id VAR_35)
{
    BYTE *VAR_36 = (BYTE *)&VAR_35;


    if (FUNC_1(VAR_36[0]) && FUNC_1(VAR_36[1]) && FUNC_1(VAR_36[2]) && FUNC_1(VAR_36[3])) return VAR_35;

    switch(VAR_35)
    {
        case 129: return VAR_27;
        case 152: return VAR_26;
        case 154: return VAR_9;
        case 153: return VAR_34;
        case 155: return VAR_25;
        case 156: return VAR_31;
        case 157: return VAR_0;
        case 159: return VAR_4;
        case 160: return VAR_24;
        case 162: return VAR_5;
        case 161: return VAR_8;
        case 158: return VAR_32;
        case 142: return VAR_1;
        case 138: return VAR_17;
        case 143: return VAR_7;
        case 144: return VAR_22;
        case 145: return VAR_21;
        case 146: return VAR_6;
        case 147: return VAR_3;
        case 133: return VAR_29;
        case 135: return VAR_20;
        case 132: return VAR_33;
        case 134: return VAR_23;
        case 139: return VAR_28;
        case 140: return VAR_30;
        case 141: return VAR_2;
        case 151: return VAR_12;
        case 148: return VAR_16;
        case 131: return VAR_10;
        case 149: return VAR_13;
        case 128: return VAR_15;
        case 130: return VAR_14;
        case 150: return VAR_11;
        case 137: return VAR_18;
        case 136: return VAR_19;
        default:
            FUNC_0("Unhandled wined3d format %#x.\n", VAR_35);
            return VAR_27;
    }
}
