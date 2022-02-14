
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;







 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int FUNC_0 (char*,int const,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

size_t FUNC_3(const DWORD* VAR_17)
{
    const DWORD VAR_18 = *VAR_17;
    size_t VAR_19 = 1;

    switch ((VAR_18 & VAR_11) >> VAR_12) {
        case 131:
            FUNC_0(" 0x%08x NOP()\n", VAR_18);
            break;

        case 130:
            if (VAR_18 & VAR_10)
            {
                FUNC_0(" 0x%08x STREAM_TESS()\n", VAR_18);
            } else {
                FUNC_0(" 0x%08x STREAM(%u)\n", VAR_18, ((VAR_18 & VAR_8) >> VAR_9));
            }
            break;

        case 129:
            if (VAR_18 & 0x10000000)
            {
                FUNC_0(" 0x%08x SKIP(%u)\n", VAR_18, ((VAR_18 & VAR_6) >> VAR_7));
            } else {
                DWORD VAR_20 = ((VAR_18 & VAR_2) >> VAR_3);
                DWORD VAR_21 = ((VAR_18 & VAR_15) >> VAR_16);
                FUNC_0(" 0x%08x REG(%s, %s)\n", VAR_18, FUNC_1(VAR_21), FUNC_2(VAR_20));
            }
            break;

        case 128:
            if (VAR_18 & 0x10000000)
            {
                DWORD VAR_22 = ((VAR_18 & VAR_2) >> VAR_3);
                DWORD VAR_23 = ((VAR_18 & VAR_15) >> VAR_16);
                FUNC_0(" 0x%08x TESSUV(%s) as %s\n", VAR_18, FUNC_1(VAR_23), FUNC_2(VAR_22));
            } else {
                DWORD VAR_24 = ((VAR_18 & VAR_2) >> VAR_3);
                DWORD VAR_25 = ((VAR_18 & VAR_15) >> VAR_16);
                DWORD VAR_26 = ((VAR_18 & VAR_13) >> VAR_14);
                FUNC_0(" 0x%08x TESSNORMAL(%s, %s) as %s\n", VAR_18, FUNC_1(VAR_26),
                        FUNC_1(VAR_25), FUNC_2(VAR_24));
            }
            break;

        case 134:
            {
                DWORD VAR_27 = ((VAR_18 & VAR_0) >> VAR_1);
                VAR_19 = (4 * VAR_27) + 1;
            }
            break;

        case 132:
            {
                DWORD VAR_28 = ((VAR_18 & VAR_0) >> VAR_1);
                DWORD VAR_29 = ((VAR_18 & VAR_4) >> VAR_5);
                FUNC_0(" 0x%08x EXT(%u, %u)\n", VAR_18, VAR_28, VAR_29);

                VAR_19 = VAR_28 + 1;
            }
            break;

        case 133:
            FUNC_0(" 0x%08x END()\n", VAR_18);
            break;

        default:
            FUNC_0(" 0x%08x UNKNOWN\n", VAR_18);

    }

    return VAR_19;
}
