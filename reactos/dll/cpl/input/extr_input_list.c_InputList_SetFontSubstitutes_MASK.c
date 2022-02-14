
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int MUI_SUBFONT ;
typedef int LCID ;
typedef int BOOL ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int ) ;
 int * VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;





 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 (int *) ;

BOOL
FUNC_5(LCID VAR_11)
{
    MUI_SUBFONT *VAR_12;
    WORD VAR_13, VAR_14, VAR_15;

    VAR_13 = FUNC_1(VAR_11);
    VAR_14 = FUNC_2(VAR_13);
    VAR_15 = FUNC_3(VAR_13);


    switch (VAR_14)
    {
        default:
            VAR_12 = VAR_8;
            break;
        case 160:
        case 159:
        case 157:
        case 148:
        case 143:
        case 141:
        case 139:
        case 136:
        case 134:
            VAR_12 = VAR_2;
            break;
        case 153:
            VAR_12 = VAR_4;
            break;
        case 151:
            VAR_12 = VAR_5;
            break;
        case 156:
            switch (VAR_15)
            {
                case 130:
                case 129:
                case 131:
                    VAR_12 = VAR_0;
                    break;
                case 128:
                case 132:
                    VAR_12 = VAR_1;
                    break;
                default:
                    VAR_12 = ((void*)0);
                    FUNC_0();
                    break;
            }
            break;
        case 149:
            VAR_12 = VAR_6;
            break;
        case 146:
            VAR_12 = VAR_7;
            break;
        case 162:
        case 161:
        case 158:
        case 155:
        case 154:
        case 152:
        case 150:
        case 147:
        case 145:
        case 144:
        case 142:
        case 140:
        case 138:
        case 137:
        case 135:
        case 133:
            VAR_12 = VAR_10;
            break;
    }

    if (VAR_12)
    {
        FUNC_4(VAR_12);
        return VAR_9;
    }
    return VAR_3;
}
