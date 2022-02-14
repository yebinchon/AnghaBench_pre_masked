
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* subexpr; } ;
typedef TYPE_1__ unary_expression_t ;
struct TYPE_10__ {int value; } ;
typedef TYPE_2__ string_expression_t ;
typedef int member_expression_t ;
struct TYPE_11__ {int value; } ;
typedef TYPE_3__ int_expression_t ;
struct TYPE_12__ {int type; } ;
typedef TYPE_4__ expression_t ;
struct TYPE_13__ {int value; } ;
typedef TYPE_5__ double_expression_t ;
typedef int compile_ctx_t ;
struct TYPE_14__ {int value; } ;
typedef TYPE_6__ bool_expression_t ;
typedef int binary_expression_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_8(compile_ctx_t *VAR_38, expression_t *VAR_39)
{
    switch(VAR_39->type) {
    case 162:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_3);
    case 161:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_4);
    case 160:
        return FUNC_6(VAR_38, VAR_5, ((bool_expression_t*)VAR_39)->value);
    case 159:
        return FUNC_8(VAR_38, ((unary_expression_t*)VAR_39)->subexpr);
    case 158:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_6);
    case 157:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_7);
    case 156:
        return FUNC_5(VAR_38, VAR_8, ((double_expression_t*)VAR_39)->value);
    case 155:
        return FUNC_4(VAR_38, VAR_9) ? VAR_36 : VAR_2;
    case 154:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_10);
    case 153:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_11);
    case 152:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_12);
    case 151:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_13);
    case 150:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_14);
    case 149:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_16);
    case 147:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_18);
    case 148:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_17);
    case 146:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_20);
    case 145:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_21);
    case 144:
        return FUNC_4(VAR_38, VAR_22) ? VAR_36 : VAR_2;
    case 143:
        return FUNC_2(VAR_38, (member_expression_t*)VAR_39, VAR_37);
    case 142:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_23);
    case 141:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_24);
    case 140:
        return FUNC_3(VAR_38, (unary_expression_t*)VAR_39, VAR_25);
    case 139:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_26);
    case 138:
        return FUNC_7(VAR_38, VAR_27, ((string_expression_t*)VAR_39)->value);
    case 137:
        return FUNC_6(VAR_38, VAR_15, VAR_0);
    case 136:
        return FUNC_3(VAR_38, (unary_expression_t*)VAR_39, VAR_28);
    case 135:
        return FUNC_4(VAR_38, VAR_29) ? VAR_36 : VAR_2;
    case 134:
        return FUNC_4(VAR_38, VAR_30) ? VAR_36 : VAR_2;
    case 133:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_31);
    case 132:
        return FUNC_7(VAR_38, VAR_33, ((string_expression_t*)VAR_39)->value);
    case 131:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_34);
    case 129:
        return FUNC_6(VAR_38, VAR_32, ((int_expression_t*)VAR_39)->value);
    case 130:
        return FUNC_6(VAR_38, VAR_19, ((int_expression_t*)VAR_39)->value);
    case 128:
        return FUNC_1(VAR_38, (binary_expression_t*)VAR_39, VAR_35);
    default:
        FUNC_0("Unimplemented expression type %d\n", VAR_39->type);
        return VAR_1;
    }

    return VAR_36;
}
