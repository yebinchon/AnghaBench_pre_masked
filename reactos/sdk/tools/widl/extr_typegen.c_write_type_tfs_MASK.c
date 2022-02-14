
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {unsigned int ptr_tfsoff; } ;
struct TYPE_24__ {TYPE_1__ array; } ;
struct TYPE_25__ {unsigned int typestring_offset; int name; TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
typedef int expr_list_t ;
typedef enum type_context { ____Placeholder_type_context } type_context ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,char const*) ;
 int * FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (int const*,int ) ;
 int FUNC_3 (TYPE_3__*,int const*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int const*,TYPE_3__*) ;
 int FUNC_6 (int *,int,char*,short,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int const*,int ) ;
 int FUNC_11 (TYPE_3__*,unsigned int,int *) ;
 unsigned int FUNC_12 (int *,int const*,TYPE_3__*,char const*,unsigned int*) ;
 unsigned int FUNC_13 (int *,int const*,TYPE_3__*,int,unsigned int*) ;
 unsigned int FUNC_14 (int *,int const*,TYPE_3__*,unsigned int*) ;
 unsigned int FUNC_15 (int *,int const*,TYPE_3__*,unsigned int,int,unsigned int*) ;
 unsigned int FUNC_16 (int *,int const*,TYPE_3__*,int *,unsigned int*) ;
 unsigned int FUNC_17 (int *,int const*,TYPE_3__*,int,char const*,unsigned int*) ;
 unsigned int FUNC_18 (int *,TYPE_3__*,char const*,unsigned int*) ;
 unsigned int FUNC_19 (int *,int const*,TYPE_3__*,unsigned int*) ;
 unsigned int FUNC_20 (int *,TYPE_3__*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_21(FILE *VAR_7, int VAR_8,
                                   const attr_list_t *VAR_9, type_t *VAR_10,
                                   const char *VAR_11,
                                   enum type_context VAR_12,
                                   unsigned int *VAR_13)
{
    unsigned int VAR_14;

    switch (FUNC_10(VAR_10, VAR_9, VAR_2))
    {
    case 138:
    case 137:
        return FUNC_13(VAR_7, VAR_9, VAR_10,
                                       VAR_12 == VAR_6, VAR_13);
    case 128:
        return FUNC_20(VAR_7, VAR_10, VAR_13);
    case 131:
        return FUNC_17(VAR_7, VAR_9, VAR_10, VAR_12, VAR_11, VAR_13);
    case 140:
    {
        unsigned int VAR_15;

        if ((VAR_12 != VAR_3 &&
             VAR_12 != VAR_4) ||
            !FUNC_4(VAR_10) || FUNC_8(VAR_10))
            VAR_15 = FUNC_12(VAR_7, VAR_9, VAR_10, VAR_11, VAR_13);
        else
            VAR_15 = 0;
        if (VAR_12 != VAR_3 &&
            VAR_12 != VAR_4)
        {
            int VAR_16;
            VAR_16 = FUNC_3(VAR_10, VAR_9,
                                      VAR_12 == VAR_6);
            if (VAR_16 != VAR_1 || FUNC_8(VAR_10))
            {
                unsigned int VAR_17 = VAR_10->typestring_offset;
                short VAR_18 = VAR_17 - (*VAR_13 + 2);
                VAR_15 = *VAR_13;
                FUNC_6(VAR_7, 0, "/* %d */\n", VAR_15);
                FUNC_6(VAR_7, 2, "0x%x, 0x0,\t/* %s */\n", VAR_16,
                           FUNC_7(VAR_16));
                FUNC_6(VAR_7, 2, "NdrFcShort(0x%hx),\t/* Offset= %hd (%u) */\n",
                           VAR_18, VAR_18, VAR_17);
                if (VAR_16 != VAR_1) FUNC_11( VAR_10, VAR_15, VAR_7 );
                *VAR_13 += 4;
            }
            VAR_10->details.array.ptr_tfsoff = VAR_15;
        }
        return VAR_15;
    }
    case 130:
        return FUNC_18(VAR_7, VAR_10, VAR_11, VAR_13);
    case 129:
        return FUNC_19(VAR_7, VAR_9, VAR_10, VAR_13);
    case 136:
    case 139:

        return 0;
    case 132:
    {
        expr_list_t *VAR_19 = FUNC_2(VAR_9, VAR_0);
        if (!VAR_19)
            VAR_19 = FUNC_1(VAR_10, VAR_0);
        return FUNC_16(VAR_7, VAR_9, VAR_10, VAR_19, VAR_13);
    }
    case 135:
        return FUNC_14(VAR_7, VAR_9, VAR_10, VAR_13);
    case 133:
    {
        enum type_context VAR_20;
        type_t *VAR_21 = FUNC_9(VAR_10);

        if (VAR_12 == VAR_6)
            VAR_20 = VAR_5;
        else if (VAR_12 == VAR_4)
            VAR_20 = VAR_3;
        else
            VAR_20 = VAR_12;

        if (FUNC_5(VAR_9, VAR_21))
        {
            if (VAR_12 != VAR_4)
                FUNC_15(VAR_7, VAR_9, VAR_10, *VAR_13 + 4, VAR_12, VAR_13);

            VAR_14 = FUNC_21(VAR_7, VAR_8, VAR_9, VAR_21, VAR_11, VAR_20, VAR_13);
            if (VAR_12 == VAR_4)
                return 0;
            return VAR_14;
        }

        VAR_14 = FUNC_21( VAR_7, VAR_8, VAR_9, FUNC_9(VAR_10), VAR_11,
                                 VAR_20, VAR_13);
        if (VAR_12 == VAR_4)
            return 0;
        return FUNC_15(VAR_7, VAR_9, VAR_10, VAR_14, VAR_12, VAR_13);
    }
    case 134:
        break;
    }
    FUNC_0("invalid type %s for var %s\n", VAR_10->name, VAR_11);
    return 0;
}
