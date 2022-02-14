
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
typedef TYPE_1__ type_t ;
typedef enum type_context { ____Placeholder_type_context } type_context ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 unsigned char FUNC_1 (TYPE_1__ const*) ;
 unsigned char FUNC_2 (TYPE_1__ const*) ;
 unsigned char FUNC_3 (TYPE_1__ const*,int const*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int const*,TYPE_1__ const*) ;
 int FUNC_8 (int *,int,char*,...) ;
 int FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_11 (TYPE_1__ const*) ;

__attribute__((used)) static unsigned int FUNC_12(FILE *VAR_11, const attr_list_t *VAR_12,
                                         const type_t *VAR_13, enum type_context VAR_14)
{
    unsigned char VAR_15;
    unsigned char VAR_16;
    const type_t *VAR_17;
    int VAR_18 = FUNC_5(VAR_12, VAR_0);
    int VAR_19 = FUNC_5(VAR_12, VAR_1);
    unsigned char VAR_20 = VAR_5;



    if (FUNC_7(VAR_12, VAR_13))
        FUNC_0("write_simple_pointer: can't handle type %s which is a string type\n", VAR_13->name);

    VAR_16 = FUNC_3(VAR_13, VAR_12, VAR_14);

    VAR_17 = FUNC_11(VAR_13);
    if (FUNC_10(VAR_17) == VAR_8)
        VAR_15 = FUNC_2(VAR_17);
    else
        VAR_15 = FUNC_1(VAR_17);

    if (!FUNC_6(VAR_10, VAR_9))
    {
        if (VAR_19 && !VAR_18 && VAR_16 == VAR_4)
            VAR_20 |= VAR_2;
    }
    else if (FUNC_4() == VAR_6)
    {
        if (VAR_14 == VAR_7 && VAR_15 == VAR_3 && VAR_16 == VAR_4)
            VAR_20 |= VAR_2;
    }

    FUNC_8(VAR_11, 2, "0x%02x, 0x%x,\t/* %s %s[simple_pointer] */\n",
               VAR_16, VAR_20, FUNC_9(VAR_16),
               VAR_20 & VAR_2 ? "[allocated_on_stack] " : "");
    FUNC_8(VAR_11, 2, "0x%02x,\t/* %s */\n", VAR_15, FUNC_9(VAR_15));
    FUNC_8(VAR_11, 2, "0x5c,\t/* FC_PAD */\n");
    return 4;
}
