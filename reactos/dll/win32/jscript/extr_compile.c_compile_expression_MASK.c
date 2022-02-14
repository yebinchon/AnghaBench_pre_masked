
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unary_expression_t ;
typedef int property_value_expression_t ;
typedef int member_expression_t ;
struct TYPE_5__ {int literal; } ;
typedef TYPE_1__ literal_expression_t ;
struct TYPE_6__ {int identifier; } ;
typedef TYPE_2__ identifier_expression_t ;
typedef int function_expression_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ expression_t ;
typedef int conditional_expression_t ;
typedef int compiler_ctx_t ;
typedef int call_expression_t ;
typedef int binary_expression_t ;
typedef int array_literal_expression_t ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
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
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 int FUNC_9 (int *,int *,int ,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_20(compiler_ctx_t *VAR_37, expression_t *VAR_38, BOOL VAR_39)
{
    HRESULT VAR_40;

    switch(VAR_38->type) {
    case 185:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_3);
        break;
    case 184:
        VAR_40 = FUNC_11(VAR_37, (binary_expression_t*)VAR_38, VAR_8);
        break;
    case 183:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_5);
        break;
    case 182:
        VAR_40 = FUNC_1(VAR_37, (array_literal_expression_t*)VAR_38);
        break;
    case 181:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_2);
        break;
    case 180:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_3);
        break;
    case 179:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_4);
        break;
    case 171:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_31);
        break;
    case 175:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_21);
        break;
    case 178:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_9);
        break;
    case 176:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_20);
        break;
    case 174:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_25);
        break;
    case 177:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_16);
        break;
    case 172:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_29);
        break;
    case 173:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_30);
        break;
    case 170:
        VAR_40 = FUNC_2(VAR_37, (binary_expression_t*)VAR_38, VAR_35);
        break;
    case 169:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_4);
        break;
    case 168:
        VAR_40 = FUNC_16(VAR_37, (unary_expression_t*)VAR_38, VAR_6);
        break;
    case 167:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_25);
        break;
    case 165:
        return FUNC_4(VAR_37, (call_expression_t*)VAR_38, VAR_39);
    case 164:
        return FUNC_5(VAR_37, (binary_expression_t*)VAR_38, VAR_39);
    case 163:
        VAR_40 = FUNC_6(VAR_37, (conditional_expression_t*)VAR_38);
        break;
    case 162:
        VAR_40 = FUNC_7(VAR_37, (unary_expression_t*)VAR_38);
        break;
    case 161:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_9);
        break;
    case 160:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_10);
        break;
    case 159:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_11);
        break;
    case 158:
        return FUNC_8(VAR_37, (function_expression_t*)VAR_38, VAR_39);
    case 157:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_12);
        break;
    case 156:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_13);
        break;
    case 155:
        VAR_40 = FUNC_17(VAR_37, ((identifier_expression_t*)VAR_38)->identifier);
        break;
    case 154:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_14);
        break;
    case 153:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_15);
        break;
    case 152:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_17);
        break;
    case 151:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_18);
        break;
    case 150:
        VAR_40 = FUNC_10(VAR_37, ((literal_expression_t*)VAR_38)->literal);
        break;
    case 149:
        VAR_40 = FUNC_16(VAR_37, (unary_expression_t*)VAR_38, VAR_22);
        break;
    case 148:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_16);
        break;
    case 147:
        VAR_40 = FUNC_12(VAR_37, (member_expression_t*)VAR_38);
        break;
    case 146:
        VAR_40 = FUNC_16(VAR_37, (unary_expression_t*)VAR_38, VAR_19);
        break;
    case 145:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_20);
        break;
    case 144:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_21);
        break;
    case 143:
        VAR_40 = FUNC_13(VAR_37, (call_expression_t*)VAR_38);
        break;
    case 142:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_23);
        break;
    case 141:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_24);
        break;
    case 140:
        VAR_40 = FUNC_11(VAR_37, (binary_expression_t*)VAR_38, VAR_7);
        break;
    case 139:
        VAR_40 = FUNC_16(VAR_37, (unary_expression_t*)VAR_38, VAR_33);
        break;
    case 138:
        VAR_40 = FUNC_9(VAR_37, (unary_expression_t*)VAR_38, VAR_27, -1);
        break;
    case 137:
        VAR_40 = FUNC_9(VAR_37, (unary_expression_t*)VAR_38, VAR_27, 1);
        break;
    case 136:
        VAR_40 = FUNC_9(VAR_37, (unary_expression_t*)VAR_38, VAR_28, -1);
        break;
    case 135:
        VAR_40 = FUNC_9(VAR_37, (unary_expression_t*)VAR_38, VAR_28, 1);
        break;
    case 134:
        VAR_40 = FUNC_14(VAR_37, (property_value_expression_t*)VAR_38);
        break;
    case 132:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_29);
        break;
    case 133:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_30);
        break;
    case 131:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_31);
        break;
    case 130:
        return !VAR_39 || FUNC_18(VAR_37, VAR_32) ? VAR_36 : VAR_1;
    case 129:
        VAR_40 = FUNC_15(VAR_37, (unary_expression_t*)VAR_38);
        break;
    case 128:
        VAR_40 = FUNC_16(VAR_37, (unary_expression_t*)VAR_38, VAR_34);
        break;
    case 166:
        VAR_40 = FUNC_3(VAR_37, (binary_expression_t*)VAR_38, VAR_35);
        break;
    VAR_0;
    }

    if(FUNC_0(VAR_40))
        return VAR_40;

    return VAR_39 ? VAR_36 : FUNC_19(VAR_37, VAR_26, 1);
}
