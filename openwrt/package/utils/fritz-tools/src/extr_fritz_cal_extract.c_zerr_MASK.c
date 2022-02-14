
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
    switch (VAR_3) {
    case 131:
        if (FUNC_0(VAR_1))
            FUNC_1("error reading stdin\n", VAR_0);
        if (FUNC_0(VAR_2))
            FUNC_1("error writing stdout\n", VAR_0);
        break;
    case 129:
        FUNC_1("invalid compression level\n", VAR_0);
        break;
    case 132:
        FUNC_1("invalid or incomplete deflate data\n", VAR_0);
        break;
    case 130:
        FUNC_1("out of memory\n", VAR_0);
        break;
    case 128:
        FUNC_1("zlib version mismatch!\n", VAR_0);
    }
}
