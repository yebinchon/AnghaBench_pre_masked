
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int WCHAR ;
typedef int SCRIPT_CONTROL ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int const*,int*,unsigned int,int const*) ;

BOOL FUNC_1(const WCHAR *VAR_4, unsigned int VAR_5, const SCRIPT_CONTROL *VAR_6, WORD *VAR_7)
{
    unsigned int VAR_8;

    FUNC_0(VAR_4, VAR_7, VAR_5, VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
    {
        switch (VAR_7[VAR_8])
        {
            case 137:
            case 136:
            case 135:
            case 132:
            case 145:
            case 131:
            case 130:
                VAR_7[VAR_8] = VAR_1;
                break;
            case 133:
            case 140:
            case 139:
            case 138:
            case 144:
            case 141:
            case 142:
                VAR_7[VAR_8] = VAR_2;
                break;
            case 143:
            case 129:
            case 128:
            case 134:
            default:
                VAR_7[VAR_8] = VAR_0;
        }
    }
    return VAR_3;
}
