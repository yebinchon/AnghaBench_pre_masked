
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int BYTE ;
 int FUNC_0 (int*,int,int,int) ;


__attribute__((used)) static void FUNC_1(int VAR_0, const WORD *VAR_1, BYTE *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    BYTE VAR_5 = VAR_0;

    int VAR_6 = 0;
    for (; VAR_6 < VAR_3; VAR_6++)
    {
        switch(VAR_1[VAR_6])
        {
        default:
            VAR_4 = 0;
            break;
        case 128:
            VAR_4++;
            break;

        case 132:
        case 137:
        case 135:
        case 130:
        case 134:
        case 136:
        case 131:
        case 138:
        case 133:
        case 139:
            VAR_2[VAR_6] = VAR_5;
            VAR_4++;
            break;

        case 129:
        case 140:

            FUNC_0(VAR_2, VAR_4, VAR_6, VAR_0);
            VAR_4 = 0;
            VAR_2[VAR_6] = VAR_0;
            break;
        }
        VAR_5 = VAR_2[VAR_6];
    }

    FUNC_0(VAR_2, VAR_4, VAR_6, VAR_0);
}
