
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_primitive_type { ____Placeholder_wined3d_primitive_type } wined3d_primitive_type ;
typedef unsigned int GLenum ;


 int FUNC_0 (char*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int) ;

GLenum FUNC_2(enum wined3d_primitive_type VAR_11)
{
    switch (VAR_11)
    {
        case 134:
            return VAR_5;

        case 139:
            return VAR_0;

        case 137:
            return VAR_2;

        case 132:
            return VAR_6;

        case 130:
            return VAR_9;

        case 133:
            return VAR_8;

        case 138:
            return VAR_1;

        case 136:
            return VAR_3;

        case 131:
            return VAR_7;

        case 129:
            return VAR_10;

        case 135:
            return VAR_4;

        default:
            FUNC_0("Unhandled primitive type %s.\n", FUNC_1(VAR_11));
        case 128:
            return ~0u;
    }
}
