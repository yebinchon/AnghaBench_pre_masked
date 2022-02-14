
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void type_t ;
struct expression_type {void* type; void* is_variable; void* is_temporary; } ;
struct expr_loc {char* attr; TYPE_2__* v; } ;
struct TYPE_5__ {void* tref; TYPE_3__* ext; int sval; } ;
struct TYPE_7__ {int type; TYPE_1__ u; struct TYPE_7__* ref; struct TYPE_7__* ext2; } ;
typedef TYPE_3__ expr_t ;
struct TYPE_6__ {int loc_info; } ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct expr_loc const*,void const*,void*) ;
 int FUNC_1 (struct expr_loc const*,void const*,void*) ;
 int FUNC_2 (struct expr_loc const*,void const*,void*) ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (int ,void const*,int*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int ,int ) ;
 void* FUNC_13 (int ,void*,int *) ;
 void* FUNC_14 (void*) ;

__attribute__((used)) static struct expression_type FUNC_15(const struct expr_loc *VAR_7,
                                                 const type_t *VAR_8,
                                                 const expr_t *VAR_9)
{
    struct expression_type VAR_10;
    VAR_10.is_variable = VAR_0;
    VAR_10.is_temporary = VAR_0;
    VAR_10.type = ((void*)0);
    switch (VAR_9->type)
    {
    case 130:
        break;
    case 153:
    case 140:
    case 131:
        VAR_10.is_temporary = VAR_0;
        VAR_10.type = FUNC_12(VAR_5, 0);
        break;
    case 133:
        VAR_10.is_temporary = VAR_2;
        VAR_10.type = FUNC_13(VAR_1, FUNC_12(VAR_3, 0), ((void*)0));
        break;
    case 129:
        VAR_10.is_temporary = VAR_2;
        VAR_10.type = FUNC_13(VAR_1, FUNC_12(VAR_6, 0), ((void*)0));
        break;
    case 160:
        VAR_10.is_temporary = VAR_2;
        VAR_10.type = FUNC_12(VAR_3, 0);
        break;
    case 157:
        VAR_10.is_temporary = VAR_2;
        VAR_10.type = FUNC_11(VAR_4);
        break;
    case 152:
    {
        int VAR_11;
        VAR_10.is_variable = VAR_2;
        VAR_10.is_temporary = VAR_0;
        VAR_10.type = FUNC_4(VAR_9->u.sval, VAR_8, &VAR_11);
        if (!VAR_10.type)
        {
            FUNC_3(&VAR_7->v->loc_info, "identifier %s cannot be resolved in expression%s%s\n",
                           VAR_9->u.sval, VAR_7->attr ? " for attribute " : "",
                           VAR_7->attr ? VAR_7->attr : "");
        }
        break;
    }
    case 147:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        FUNC_2(VAR_7, VAR_8, VAR_10.type);
        VAR_10.is_variable = VAR_0;
        VAR_10.is_temporary = VAR_0;
        VAR_10.type = FUNC_12(VAR_5, 0);
        break;
    case 141:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        FUNC_1(VAR_7, VAR_8, VAR_10.type);
        VAR_10.is_variable = VAR_0;
        break;
    case 138:
    case 142:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        FUNC_0(VAR_7, VAR_8, VAR_10.type);
        VAR_10.is_variable = VAR_0;
        break;
    case 164:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        if (!VAR_10.is_variable)
            FUNC_3(&VAR_7->v->loc_info, "address-of operator applied to non-variable type in expression%s%s\n",
                           VAR_7->attr ? " for attribute " : "",
                           VAR_7->attr ? VAR_7->attr : "");
        VAR_10.is_variable = VAR_0;
        VAR_10.is_temporary = VAR_2;
        VAR_10.type = FUNC_13(VAR_1, VAR_10.type, ((void*)0));
        break;
    case 137:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        if (VAR_10.type && FUNC_7(VAR_10.type))
            VAR_10.type = FUNC_14(VAR_10.type);
        else if(VAR_10.type && FUNC_5(VAR_10.type)
                            && FUNC_10(VAR_10.type))
            VAR_10.type = FUNC_9(VAR_10.type);
        else
            FUNC_3(&VAR_7->v->loc_info, "dereference operator applied to non-pointer type in expression%s%s\n",
                           VAR_7->attr ? " for attribute " : "",
                           VAR_7->attr ? VAR_7->attr : "");
        break;
    case 161:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        VAR_10.type = VAR_9->u.tref;
        break;
    case 134:
        VAR_10.is_temporary = VAR_0;
        VAR_10.type = FUNC_12(VAR_5, 0);
        break;
    case 136:
    case 135:
    case 144:
    case 143:
    case 158:
    case 165:
    case 132:
    case 163:
    case 139:
    case 128:
    {
        struct expression_type VAR_12;
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        VAR_10.is_variable = VAR_0;
        VAR_12 = FUNC_15(VAR_7, VAR_8, VAR_9->u.ext);

        FUNC_2(VAR_7, VAR_8, VAR_10.type);
        FUNC_2(VAR_7, VAR_8, VAR_12.type);
        break;
    }
    case 146:
    case 148:
    case 156:
    case 151:
    case 155:
    case 150:
    case 154:
    case 149:
    {
        struct expression_type VAR_13, VAR_14;
        VAR_13 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        VAR_14 = FUNC_15(VAR_7, VAR_8, VAR_9->u.ext);
        FUNC_2(VAR_7, VAR_8, VAR_13.type);
        FUNC_2(VAR_7, VAR_8, VAR_14.type);
        VAR_10.is_temporary = VAR_0;
        VAR_10.type = FUNC_12(VAR_5, 0);
        break;
    }
    case 145:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        if (VAR_10.type && FUNC_8(VAR_10.type))
            VAR_10 = FUNC_15(VAR_7, VAR_10.type, VAR_9->u.ext);
        else
            FUNC_3(&VAR_7->v->loc_info, "'.' or '->' operator applied to a type that isn't a structure, union or enumeration in expression%s%s\n",
                           VAR_7->attr ? " for attribute " : "",
                           VAR_7->attr ? VAR_7->attr : "");
        break;
    case 159:
    {
        struct expression_type VAR_15, VAR_16, VAR_17;
        VAR_15 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        FUNC_2(VAR_7, VAR_8, VAR_15.type);
        VAR_16 = FUNC_15(VAR_7, VAR_8, VAR_9->u.ext);
        VAR_17 = FUNC_15(VAR_7, VAR_8, VAR_9->ext2);
        FUNC_2(VAR_7, VAR_8, VAR_16.type);
        FUNC_2(VAR_7, VAR_8, VAR_17.type);
        if (!FUNC_7(VAR_16.type) ^ !FUNC_7(VAR_17.type))
            FUNC_3(&VAR_7->v->loc_info, "type mismatch in ?: expression\n" );

        VAR_10 = VAR_16;
        VAR_10.is_variable = VAR_0;
        break;
    }
    case 162:
        VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9->ref);
        if (VAR_10.type && FUNC_5(VAR_10.type))
        {
            struct expression_type VAR_18;
            VAR_10.type = FUNC_9(VAR_10.type);
            VAR_18 = FUNC_15(VAR_7, VAR_8 , VAR_9->u.ext);
            if (!VAR_18.type || !FUNC_6(VAR_18.type))
                FUNC_3(&VAR_7->v->loc_info, "array subscript not of integral type in expression%s%s\n",
                               VAR_7->attr ? " for attribute " : "",
                               VAR_7->attr ? VAR_7->attr : "");
        }
        else
            FUNC_3(&VAR_7->v->loc_info, "array subscript operator applied to non-array type in expression%s%s\n",
                           VAR_7->attr ? " for attribute " : "",
                           VAR_7->attr ? VAR_7->attr : "");
        break;
    }
    return VAR_10;
}
