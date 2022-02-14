
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_gl_resource_type { ____Placeholder_wined3d_gl_resource_type } wined3d_gl_resource_type ;
typedef int GLenum ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
__attribute__((used)) static GLenum FUNC_1(enum wined3d_gl_resource_type VAR_6)
{
    switch (VAR_6)
    {
        case 132:
            return VAR_1;
        case 131:
            return VAR_2;
        case 130:
            return VAR_3;
        case 129:
            return VAR_4;
        case 128:
            return VAR_5;
        case 135:
            return VAR_2;
        case 133:
            return VAR_0;
        case 134:
            break;
    }
    FUNC_0("Unexpected GL resource type %u.\n", VAR_6);
    return 0;
}
