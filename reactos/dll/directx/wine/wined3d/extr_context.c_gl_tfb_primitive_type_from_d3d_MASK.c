
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_primitive_type { ____Placeholder_wined3d_primitive_type } wined3d_primitive_type ;
typedef int GLenum ;
 int FUNC_0 (int) ;

__attribute__((used)) static GLenum FUNC_1(enum wined3d_primitive_type VAR_0)
{
    GLenum VAR_1 = FUNC_0(VAR_0);
    switch (VAR_1)
    {
        case 133:
            return 133;

        case 135:
        case 134:
        case 136:
        case 137:
            return 137;

        case 130:
        case 129:
        case 128:
        case 131:
        case 132:
            return 132;

        default:
            return VAR_1;
    }
}
