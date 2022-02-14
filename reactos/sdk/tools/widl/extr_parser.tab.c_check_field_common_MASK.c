
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; int loc_info; int attrs; int const* type; } ;
typedef TYPE_1__ var_t ;
typedef int const type_t ;
struct expr_loc {char* attr; TYPE_1__ const* v; } ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_2__ expr_t ;
typedef int expr_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__ const*,int const*,int *) ;
 int FUNC_2 (TYPE_1__ const*,int const*) ;
 int FUNC_3 (int *,char*,...) ;
 int const* FUNC_4 (struct expr_loc*,int const*,TYPE_2__*) ;
 void* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int const* FUNC_11 (int const*) ;
 int const FUNC_12 (int const*) ;
 int const* FUNC_13 (int const*) ;
 int FUNC_14 (int const*,int ,int ) ;
 int FUNC_15 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_16(const type_t *VAR_10,
                               const char *VAR_11, const var_t *VAR_12)
{
    type_t *VAR_13 = VAR_12->type;
    int VAR_14;
    const char *VAR_15;
    const char *VAR_16;

    switch (FUNC_12(VAR_10))
    {
    case 130:
        VAR_15 = "struct";
        VAR_16 = "field";
        break;
    case 129:
        VAR_15 = "union";
        VAR_16 = "arm";
        break;
    case 134:
        VAR_15 = "encapsulated union";
        VAR_16 = "arm";
        break;
    case 133:
        VAR_15 = "function";
        VAR_16 = "parameter";
        break;
    default:

        FUNC_0(0);
        return;
    }

    if (FUNC_8(VAR_12->attrs, VAR_1) &&
        (FUNC_8(VAR_12->attrs, VAR_4) || FUNC_6(VAR_12->type, VAR_4)))
        FUNC_3(&VAR_12->loc_info,
                       "string and length_is specified for argument %s are mutually exclusive attributes\n",
                       VAR_12->name);

    if (FUNC_8(VAR_12->attrs, VAR_3))
    {
        expr_list_t *VAR_17 = FUNC_5(VAR_12->attrs, VAR_3);
        FUNC_1("size_is", VAR_12, VAR_10, VAR_17);
    }
    if (FUNC_8(VAR_12->attrs, VAR_1))
    {
        expr_list_t *VAR_18 = FUNC_5(VAR_12->attrs, VAR_1);
        FUNC_1("length_is", VAR_12, VAR_10, VAR_18);
    }
    if (FUNC_8(VAR_12->attrs, VAR_0))
    {
        struct expr_loc VAR_19;
        expr_t *VAR_20 = FUNC_5(VAR_12->attrs, VAR_0);
        if (VAR_20->type != VAR_6)
        {
            const type_t *VAR_21;
            VAR_19.v = VAR_12;
            VAR_19.attr = "iid_is";
            VAR_21 = FUNC_4(&VAR_19, VAR_10, VAR_20);
            if (!VAR_21 || !FUNC_10(VAR_21))
                FUNC_3(&VAR_12->loc_info, "expression must resolve to pointer to GUID type for attribute iid_is\n");
        }
    }
    if (FUNC_8(VAR_12->attrs, VAR_5))
    {
        struct expr_loc VAR_22;
        expr_t *VAR_23 = FUNC_5(VAR_12->attrs, VAR_5);
        if (VAR_23->type != VAR_6)
        {
            const type_t *VAR_24;
            VAR_22.v = VAR_12;
            VAR_22.attr = "switch_is";
            VAR_24 = FUNC_4(&VAR_22, VAR_10, VAR_23);
            if (!VAR_24 || !FUNC_7(VAR_24))
                FUNC_3(&VAR_12->loc_info, "expression must resolve to integral type <= 32bits for attribute %s\n",
                               VAR_22.attr);
        }
    }

    do
    {
        VAR_14 = VAR_7;

        switch (FUNC_14(VAR_13, VAR_12->attrs, VAR_8))
        {
        case 139:
        case 138:
            FUNC_2(VAR_12, VAR_13);
            break;
        case 143:
        {
            const char *VAR_25 = "is invalid";
            switch (FUNC_12(VAR_13))
            {
            case 128:
                VAR_25 = "cannot derive from void *";
                break;
            case 133:
                VAR_25 = "cannot be a function pointer";
                break;
            case 136:
                VAR_25 = "cannot be a bit-field";
                break;
            case 135:
                VAR_25 = "cannot be a class";
                break;
            case 132:
                VAR_25 = "cannot be a non-pointer to an interface";
                break;
            case 131:
                VAR_25 = "cannot be a module";
                break;
            default:
                break;
            }
            FUNC_3(&VAR_12->loc_info, "%s \'%s\' of %s \'%s\' %s\n",
                           VAR_16, VAR_12->name, VAR_15, VAR_11, VAR_25);
            break;
        }
        case 147:
        case 146:
            if (FUNC_12(VAR_10) != 133)
                FUNC_3(&VAR_12->loc_info,
                               "%s \'%s\' of %s \'%s\' cannot be a context handle\n",
                               VAR_16, VAR_12->name, VAR_15,
                               VAR_11);
            break;
        case 140:
        {
            const type_t *VAR_26 = VAR_13;
            while (FUNC_9(VAR_26))
                VAR_26 = FUNC_13(VAR_26);
            if (FUNC_6(VAR_26, VAR_2))
                FUNC_15(&VAR_12->loc_info, "%s: range not verified for a string of ranged types\n", VAR_12->name);
            break;
        }
        case 142:
            VAR_13 = FUNC_13(VAR_13);
            VAR_14 = VAR_9;
            break;
        case 149:
            VAR_13 = FUNC_11(VAR_13);
            VAR_14 = VAR_9;
            break;
        case 137:
        case 144:
        case 148:
        case 145:
        case 141:

            break;
        }
    } while (VAR_14);
}
