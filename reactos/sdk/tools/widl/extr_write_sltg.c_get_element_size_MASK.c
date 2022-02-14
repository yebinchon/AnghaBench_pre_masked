
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(type_t *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);

    switch (VAR_2)
    {
    case 146:
    case 136:
        return 1;

    case 142:
    case 132:
        return 4;

    case 135:
    case 145:
    case 154:
        return 2;

    case 144:
    case 134:
    case 138:
    case 148:
    case 147:
        return 4;

    case 137:
    case 143:
    case 133:
    case 152:
    case 151:
        return 8;

    case 150:
        return 16;

    case 139:
    case 131:
    case 149:
    case 153:
    case 141:
    case 140:
        return VAR_0;

    case 128:
        return 0;

    case 129:
        return VAR_0 == 8 ? 24 : 16;

    case 130:
        return 0;

    default:
        FUNC_0("get_element_size: unrecognized vt %d\n", VAR_2);
        break;
    }

    return 0;
}
