
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
 int FUNC_0 (char*) ;

__attribute__((used)) static INT FUNC_1( INT VAR_0, INT VAR_1, INT VAR_2 )
{
    switch (VAR_1)
    {
    case 131:
    case 136:
        return VAR_0 < VAR_2;
    case 141:
    case 138:
        return VAR_0 > VAR_2;
    case 143:
    case 140:
        return VAR_0 == VAR_2;
    case 130:
    case 135:
        return VAR_0 != VAR_2;
    case 142:
    case 139:
        return VAR_0 >= VAR_2;
    case 133:
    case 137:
        return VAR_0 <= VAR_2;
    case 128:
    case 134:
        return ( VAR_0 & VAR_2 ) ? 1 : 0;
    case 129:
        return ( ( VAR_0 & 0xffff ) == VAR_2 ) ? 1 : 0;
    case 132:
        return ( ( (VAR_0>>16) & 0xffff ) == VAR_2 ) ? 1 : 0;
    default:
        FUNC_0("invalid integer operator\n");
        return 0;
    }
    return 0;
}
