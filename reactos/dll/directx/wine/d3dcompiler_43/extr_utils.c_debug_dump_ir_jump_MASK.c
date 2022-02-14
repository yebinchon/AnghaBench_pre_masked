
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_jump {int type; int return_value; } ;






 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct hlsl_ir_jump *VAR_0)
{
    switch (VAR_0->type)
    {
        case 131:
            FUNC_0("break");
            break;
        case 130:
            FUNC_0("continue");
            break;
        case 129:
            FUNC_0("discard");
            break;
        case 128:
            FUNC_0("return ");
            if (VAR_0->return_value)
                FUNC_1(VAR_0->return_value);
            FUNC_0(";");
            break;
    }
}
