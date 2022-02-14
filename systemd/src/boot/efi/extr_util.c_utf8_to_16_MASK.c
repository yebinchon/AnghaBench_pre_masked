
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINTN ;
typedef int INTN ;
typedef int CHAR8 ;
typedef int CHAR16 ;



__attribute__((used)) static INTN FUNC_0(CHAR8 *VAR_0, CHAR16 *VAR_1) {
        CHAR16 VAR_2;
        UINTN VAR_3;
        UINTN VAR_4;

        if (VAR_0[0] < 0x80)
                VAR_3 = 1;
        else if ((VAR_0[0] & 0xe0) == 0xc0)
                VAR_3 = 2;
        else if ((VAR_0[0] & 0xf0) == 0xe0)
                VAR_3 = 3;
        else if ((VAR_0[0] & 0xf8) == 0xf0)
                VAR_3 = 4;
        else if ((VAR_0[0] & 0xfc) == 0xf8)
                VAR_3 = 5;
        else if ((VAR_0[0] & 0xfe) == 0xfc)
                VAR_3 = 6;
        else
                return -1;

        switch (VAR_3) {
        case 1:
                VAR_2 = VAR_0[0];
                break;
        case 2:
                VAR_2 = VAR_0[0] & 0x1f;
                break;
        case 3:
                VAR_2 = VAR_0[0] & 0x0f;
                break;
        case 4:
                VAR_2 = VAR_0[0] & 0x07;
                break;
        case 5:
                VAR_2 = VAR_0[0] & 0x03;
                break;
        case 6:
                VAR_2 = VAR_0[0] & 0x01;
                break;
        }

        for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
                if ((VAR_0[VAR_4] & 0xc0) != 0x80)
                        return -1;
                VAR_2 <<= 6;
                VAR_2 |= VAR_0[VAR_4] & 0x3f;
        }

        *VAR_1 = VAR_2;
        return VAR_3;
}
