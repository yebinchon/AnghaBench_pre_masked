
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_primitive_type { ____Placeholder_wined3d_primitive_type } wined3d_primitive_type ;
typedef int GLenum ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_1 (int) ;

__attribute__((used)) static enum wined3d_primitive_type FUNC_2(GLenum VAR_12)
{
    switch (VAR_12)
    {
        case 133:
            return VAR_5;

        case 138:
            return VAR_0;

        case 136:
            return VAR_2;

        case 132:
            return VAR_7;

        case 129:
            return VAR_9;

        case 130:
            return VAR_6;

        case 137:
            return VAR_1;

        case 135:
            return VAR_3;

        case 131:
            return VAR_8;

        case 128:
            return VAR_10;

        case 134:
            return VAR_4;

        default:
            FUNC_0("Unhandled primitive type %s.\n", FUNC_1(VAR_12));
        case ~0u:
            return VAR_11;
    }
}
