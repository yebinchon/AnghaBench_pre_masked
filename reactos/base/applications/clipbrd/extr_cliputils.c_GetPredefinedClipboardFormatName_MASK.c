
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PVOID ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int HINSTANCE ;
typedef int BOOL ;
 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int,int ,int) ;
__attribute__((used)) static int
FUNC_2(HINSTANCE VAR_0,
                                 UINT VAR_1,
                                 BOOL VAR_2,
                                 PVOID VAR_3,
                                 UINT VAR_4)
{
    static
    struct FORMAT_NAME
    {
        UINT uFormat;
        UINT uResID;
    } VAR_5[] = {

        {144 , 129 },
        {157 , 140 },
        {150, 133},
        {145 , 130 },
        {154 , 137 },
        {143 , 0 },
        {149 , 132 },
        {156 , 139 },
        {148 , 131 },
        {147 , 0 },
        {146 , 0 },
        {141 , 0 },
        {142 , 128 },
        {153 , 136 },







    };

    switch (VAR_1)
    {
        case 144: case 157: case 150:
        case 145: case 154:
        case 149: case 156: case 148:

        case 142: case 153:






        {
            if (VAR_2)
                return FUNC_1(VAR_0, VAR_5[VAR_1-1].uResID, (LPWSTR)VAR_3, VAR_4);
            else
                return FUNC_0(VAR_0, VAR_5[VAR_1-1].uResID, (LPSTR)VAR_3, VAR_4);
        }

        default:
        {
            return 0;
        }
    }
}
