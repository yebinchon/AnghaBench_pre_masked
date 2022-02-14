
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ULONG VAR_5, VAR_6;

    if (!&FUNC_1)
    {
        FUNC_2("FBadPropTag is not available\n");
        return;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        BOOL VAR_7 = VAR_4;

        switch (VAR_5 & (~VAR_1 & VAR_3))
        {
        case 128:
        case 135: case 138: case 137: case 133:
        case 132: case 140: case 144:
        case 139: case 142: case 134:
        case 136: case 131: case 129:
        case 130: case 141: case 143:
            VAR_7 = VAR_0;
        }

        VAR_6 = FUNC_1(VAR_5);
        if (VAR_7)
            FUNC_0(VAR_6 != 0, "pt= %d: Expected non-zero, got 0\n", VAR_5);
        else
            FUNC_0(VAR_6 == 0,
               "pt= %d: Expected zero, got %d\n", VAR_5, VAR_6);
    }
}
