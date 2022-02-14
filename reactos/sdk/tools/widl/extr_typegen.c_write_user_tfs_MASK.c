
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {unsigned int typestring_offset; int name; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char FUNC_0 (TYPE_1__*) ;
 unsigned char FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char const**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int,char*,...) ;
 int FUNC_6 (int *,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (unsigned char) ;
 unsigned int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 unsigned int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,unsigned int,int *) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 unsigned short FUNC_14 (char const*) ;
 int FUNC_15 (int *,int *,TYPE_1__*,int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_16(FILE *VAR_8, type_t *VAR_9, unsigned int *VAR_10)
{
    unsigned int VAR_11, VAR_12, VAR_13;
    const char *VAR_14 = ((void*)0);
    type_t *VAR_15 = FUNC_3(VAR_9, &VAR_14);
    unsigned int VAR_16 = FUNC_11(VAR_15);
    unsigned int VAR_17 = FUNC_9(VAR_15);
    unsigned int VAR_18 = FUNC_11(VAR_9);
    unsigned short VAR_19 = FUNC_14(VAR_14);
    short VAR_20;

    if (FUNC_7(VAR_9)) return VAR_9->typestring_offset;

    FUNC_4(VAR_9);

    if(FUNC_13(VAR_15)) VAR_16 = 0;

    if (FUNC_10(VAR_15) == VAR_5 ||
        FUNC_10(VAR_15) == VAR_6)
    {
        unsigned char VAR_21;

        if (FUNC_10(VAR_15) == VAR_6)
            VAR_21 = FUNC_1(VAR_15);
        else
            VAR_21 = FUNC_0(VAR_15);

        VAR_12 = *VAR_10;
        FUNC_6(VAR_8, VAR_15, VAR_12);
        FUNC_5(VAR_8, 2, "0x%x,\t/* %s */\n", VAR_21, FUNC_8(VAR_21));
        FUNC_5(VAR_8, 2, "0x5c,\t/* FC_PAD */\n");
        *VAR_10 += 2;
    }
    else
    {
        if (!FUNC_7(VAR_15))
            FUNC_15(VAR_8, ((void*)0), VAR_15, VAR_15->name, VAR_4, VAR_10);
        VAR_12 = VAR_15->typestring_offset;
    }

    if (FUNC_10(VAR_15) == VAR_7 && FUNC_2(VAR_15, ((void*)0), VAR_0) == VAR_1)
        VAR_13 = 0x40;
    else if (FUNC_10(VAR_15) == VAR_7 && FUNC_2(VAR_15, ((void*)0), VAR_0) == VAR_2)
        VAR_13 = 0x80;
    else
        VAR_13 = 0;

    VAR_11 = *VAR_10;
    FUNC_12(VAR_9, VAR_11, VAR_8);
    FUNC_6(VAR_8, VAR_9, VAR_11);
    FUNC_5(VAR_8, 2, "0x%x,\t/* FC_USER_MARSHAL */\n", VAR_3);
    FUNC_5(VAR_8, 2, "0x%x,\t/* Alignment= %d, Flags= %02x */\n",
               VAR_13 | (VAR_17 - 1), VAR_17 - 1, VAR_13);
    FUNC_5(VAR_8, 2, "NdrFcShort(0x%hx),\t/* Function offset= %hu */\n", VAR_19, VAR_19);
    FUNC_5(VAR_8, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_18, VAR_18);
    FUNC_5(VAR_8, 2, "NdrFcShort(0x%hx),\t/* %u */\n", (unsigned short)VAR_16, VAR_16);
    *VAR_10 += 8;
    VAR_20 = VAR_12 - *VAR_10;
    FUNC_5(VAR_8, 2, "NdrFcShort(0x%hx),\t/* Offset= %hd (%u) */\n", VAR_20, VAR_20, VAR_12);
    *VAR_10 += 2;
    return VAR_11;
}
