
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int expr_t ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int const*,int *) ;
 int FUNC_4 (int *,int,char*,unsigned short,...) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 unsigned int FUNC_6 (unsigned char) ;
 int * FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 unsigned int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 unsigned int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned int,int *) ;
 int FUNC_16 (int *,int const*,int *,int ,unsigned int*) ;
 scalar_t__ FUNC_17 (int *,int *,unsigned int,int *,int const*) ;
 int FUNC_18 (int *,int const*,int *,char const*,int ,unsigned int*) ;
 int FUNC_19 (int *,unsigned int*) ;
 int FUNC_20 (int *,int const*,int *,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_21(FILE *VAR_12, const attr_list_t *VAR_13, type_t *VAR_14,
                                    const char *VAR_15, unsigned int *VAR_16)
{
    const expr_t *VAR_17 = FUNC_10(VAR_14);
    const expr_t *VAR_18 = FUNC_7(VAR_14);
    unsigned int VAR_19;
    unsigned int VAR_20;
    unsigned int VAR_21;
    unsigned char VAR_22;
    int VAR_23 = FUNC_1(VAR_13, VAR_0);
    unsigned int VAR_24
        = !FUNC_11(VAR_14) && VAR_11
        ? FUNC_14(VAR_11)
        : 0;

    if (!VAR_23)
        VAR_23 = VAR_8;

    if (!FUNC_3(VAR_13, FUNC_9(VAR_14)))
        FUNC_18(VAR_12, VAR_13, FUNC_9(VAR_14), VAR_15, VAR_1, VAR_16);

    VAR_20 = FUNC_14(FUNC_2(VAR_14) ? FUNC_9(VAR_14) : VAR_14);
    VAR_19 = FUNC_12(FUNC_2(VAR_14) ? FUNC_9(VAR_14) : VAR_14);
    VAR_22 = FUNC_0(VAR_14);

    VAR_21 = *VAR_16;
    FUNC_15(VAR_14, VAR_21, VAR_12);
    FUNC_5(VAR_12, VAR_14, VAR_21);
    FUNC_4(VAR_12, 2, "0x%02x,\t/* %s */\n", VAR_22, FUNC_6(VAR_22));
    FUNC_4(VAR_12, 2, "0x%x,\t/* %d */\n", VAR_19 - 1, VAR_19 - 1);
    *VAR_16 += 2;

    VAR_19 = 0;
    if (VAR_22 != VAR_2)
    {
        if (VAR_22 == VAR_4 || VAR_22 == VAR_5)
        {
            FUNC_4(VAR_12, 2, "NdrFcLong(0x%x),\t/* %u */\n", VAR_20, VAR_20);
            *VAR_16 += 4;
        }
        else
        {
            FUNC_4(VAR_12, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_20, VAR_20);
            *VAR_16 += 2;
        }

        if (FUNC_2(VAR_14))
            *VAR_16
                += FUNC_17(VAR_12, VAR_11, VAR_24,
                                          VAR_14, VAR_18);

        if (VAR_22 == VAR_9 || VAR_22 == VAR_5)
        {
            unsigned int VAR_25 = FUNC_14(FUNC_9(VAR_14));
            unsigned int VAR_26 = FUNC_8(VAR_14);

            if (VAR_22 == VAR_5)
            {
                FUNC_4(VAR_12, 2, "NdrFcLong(0x%x),\t/* %u */\n", VAR_26, VAR_26);
                *VAR_16 += 4;
            }
            else
            {
                FUNC_4(VAR_12, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_26, VAR_26);
                *VAR_16 += 2;
            }

            FUNC_4(VAR_12, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_25, VAR_25);
            *VAR_16 += 2;
        }

        if (VAR_17)
            *VAR_16
                += FUNC_17(VAR_12, VAR_11, VAR_24,
                                          VAR_14, VAR_17);

        if (FUNC_13(FUNC_9(VAR_14)) &&
            (FUNC_11(VAR_14) || !VAR_11))
        {
            FUNC_4(VAR_12, 2, "0x%x,\t/* FC_PP */\n", VAR_7);
            FUNC_4(VAR_12, 2, "0x%x,\t/* FC_PAD */\n", VAR_6);
            *VAR_16 += 2;
            FUNC_20(VAR_12, FUNC_3(VAR_13, VAR_14) ? VAR_13 : ((void*)0), VAR_14, VAR_16);
            FUNC_4(VAR_12, 2, "0x%x,\t/* FC_END */\n", VAR_3);
            *VAR_16 += 1;
        }

        FUNC_16(VAR_12, FUNC_3(VAR_13, VAR_14) ? VAR_13 : ((void*)0), VAR_14, VAR_1, VAR_16);
        FUNC_19(VAR_12, VAR_16);
    }
    else
    {
        unsigned int VAR_27 = VAR_18 ? 0 : FUNC_8(VAR_14);
        FUNC_4(VAR_12, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_27, VAR_27);
        *VAR_16 += 2;
        *VAR_16
            += FUNC_17(VAR_12, VAR_11, VAR_24,
                                      VAR_14, VAR_18);
        *VAR_16
            += FUNC_17(VAR_12, VAR_11, VAR_24,
                                      VAR_14, VAR_17);

        FUNC_16(VAR_12, FUNC_3(VAR_13, VAR_14) ? VAR_13 : ((void*)0), VAR_14, VAR_10, VAR_16);
        FUNC_19(VAR_12, VAR_16);
    }

    return VAR_21;
}
