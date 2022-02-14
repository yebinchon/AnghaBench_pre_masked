
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_node {int type; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hlsl_ir_node*) ;
 int FUNC_2 (struct hlsl_ir_node*) ;
 int FUNC_3 (struct hlsl_ir_node*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hlsl_ir_node*) ;
 int FUNC_6 (struct hlsl_ir_node*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct hlsl_ir_node*) ;
 int FUNC_16 (struct hlsl_ir_node*) ;
 int FUNC_17 (struct hlsl_ir_node*) ;

void FUNC_18(struct hlsl_ir_node *VAR_0)
{
    switch (VAR_0->type)
    {
        case 134:
            FUNC_8(FUNC_2(VAR_0));
            break;
        case 132:
            FUNC_10(FUNC_5(VAR_0));
            break;
        case 128:
            FUNC_14(FUNC_17(VAR_0));
            break;
        case 133:
            FUNC_9(FUNC_3(VAR_0));
            break;
        case 131:
            FUNC_11(FUNC_6(VAR_0));
            break;
        case 135:
            FUNC_7(FUNC_1(VAR_0));
            break;
        case 130:
            FUNC_12(FUNC_15(VAR_0));
            break;
        case 129:
            FUNC_13(FUNC_16(VAR_0));
            break;
        default:
            FUNC_0("Unsupported node type %s\n", FUNC_4(VAR_0->type));
    }
}
