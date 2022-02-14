
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int COLORREF ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static
ULONG
FUNC_4(ULONG VAR_0, COLORREF VAR_1)
{
    ULONG VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_2(VAR_1);
    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = FUNC_0(VAR_1);

    switch (VAR_0)
    {
        case 134:
            return VAR_1 ? 0xffffff : 0;

        case 129:
        case 128:
        case 136:
            VAR_2 = (VAR_2 & 0xF8) >> 3;
            VAR_3 = (VAR_3 & 0xF8) >> 3;
            VAR_4 = (VAR_4 & 0xF8) >> 3;
            return VAR_2 << 10 | VAR_3 << 5 | VAR_4;

        case 135:
            VAR_2 = (VAR_2 & 0xF8) >> 3;
            VAR_3 = (VAR_3 & 0xFC) >> 2;
            VAR_4 = (VAR_4 & 0xF8) >> 3;
            return VAR_2 << 11 | VAR_3 << 5 | VAR_4;

        case 132:
        case 130:
            return VAR_1;

        case 133:
        case 131:
            return FUNC_3(VAR_4, VAR_3, VAR_2);
    }
    return 0;
}
