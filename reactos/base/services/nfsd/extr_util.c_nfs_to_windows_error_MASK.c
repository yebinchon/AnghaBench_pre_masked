
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
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;

int FUNC_3(int VAR_23, int VAR_24)
{

    if (VAR_23 < 0 || (VAR_23 > 70 && VAR_23 < 10001) || VAR_23 > 10087) {
        FUNC_1("nfs_to_windows_error called with non-nfs "
            "error code %d; returning the error as is\n", VAR_23);
        return VAR_23;
    }

    switch (VAR_23) {
    case 128: return VAR_22;
    case 137: return VAR_0;
    case 144: return VAR_7;
    case 151: return VAR_15;
    case 162: return VAR_0;
    case 155: return VAR_5;
    case 129: return VAR_18;
    case 152: return VAR_10;
    case 153: return VAR_8;
    case 142: return VAR_3;
    case 136: return VAR_14;
    case 146: return VAR_21;
    case 145: return VAR_4;
    case 134: return VAR_13;
    case 140: return VAR_16;
    case 156: return VAR_11;
    case 132: return VAR_2;
    case 149: return VAR_12;
    case 135: return VAR_20;
    case 147: return VAR_17;
    case 160: return VAR_19;
    case 138: return VAR_0;
    case 148: return VAR_1;

    case 159:
    case 158: return VAR_9;

    case 141:
    case 150:
    case 133:
    case 130: return VAR_10;

    case 154:
    case 143:
    case 139:
    case 157:
    case 161: return VAR_6;

    case 131: return VAR_0;

    default:
        FUNC_0(1, "nfs error %s not mapped to windows error; "
            "returning default error %d\n",
            FUNC_2(VAR_23), VAR_24);
        return VAR_24;
    }
}
