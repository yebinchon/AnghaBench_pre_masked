
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef enum type_context { ____Placeholder_type_context } type_context ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int const*,int const*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int const*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,char*,short,short,unsigned int) ;
 unsigned int FUNC_9 (int) ;
 int * FUNC_10 (int const*) ;
 int FUNC_11 (int *,int *,int ) ;

__attribute__((used)) static unsigned int FUNC_12(FILE *VAR_10, const attr_list_t *VAR_11,
                                            const type_t *VAR_12,
                                            enum type_context VAR_13,
                                            unsigned int VAR_14,
                                            unsigned int *VAR_15)
{
    unsigned int VAR_16 = *VAR_15;
    short VAR_17 = VAR_14 - (*VAR_15 + 2);
    int VAR_18, VAR_19;
    int VAR_20;
    unsigned char VAR_21 = 0;

    VAR_20 = FUNC_1(VAR_12, VAR_11, VAR_13);

    VAR_18 = FUNC_3(VAR_11, VAR_0);
    VAR_19 = FUNC_3(VAR_11, VAR_1);
    if (!VAR_18 && !VAR_19) VAR_18 = 1;

    if (!FUNC_5(VAR_9, VAR_8))
    {
        if (VAR_19 && !VAR_18 && VAR_20 == VAR_4)
            VAR_21 |= VAR_2;
    }
    else if (FUNC_2() == VAR_5)
    {
        if (VAR_13 == VAR_7 && FUNC_6(VAR_12) && VAR_20 == VAR_4)
        {
            switch (FUNC_11(FUNC_10(VAR_12), ((void*)0), VAR_6))
            {
            case 128:
            case 129:
            case 132:
            case 131:
                VAR_21 |= VAR_2;
                break;
            case 130:
                if (VAR_18 && VAR_19)
                    VAR_21 |= VAR_2;
                break;
            default:
                break;
            }
        }
    }

    if (FUNC_6(VAR_12))
    {
        type_t *VAR_22 = FUNC_10(VAR_12);
        if(FUNC_4(VAR_22) && !FUNC_7(VAR_22))
            VAR_21 |= VAR_3;
    }

    FUNC_8(VAR_10, 2, "0x%x, 0x%x,\t\t/* %s",
               VAR_20,
               VAR_21,
               FUNC_9(VAR_20));
    if (VAR_10)
    {
        if (VAR_21 & VAR_2)
            FUNC_0(VAR_10, " [allocated_on_stack]");
        if (VAR_21 & VAR_3)
            FUNC_0(VAR_10, " [pointer_deref]");
        FUNC_0(VAR_10, " */\n");
    }

    FUNC_8(VAR_10, 2, "NdrFcShort(0x%hx),\t/* Offset= %hd (%u) */\n", VAR_17, VAR_17, VAR_14);
    *VAR_15 += 4;

    return VAR_16;
}
