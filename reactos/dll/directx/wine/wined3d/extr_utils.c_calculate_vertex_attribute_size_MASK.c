
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLhalfNV ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLbyte ;


 int FUNC_0 (char*,int) ;
__attribute__((used)) static unsigned int FUNC_1(GLenum VAR_0, unsigned int VAR_1)
{
    switch (VAR_0)
    {
        case 134:
            return VAR_1 * sizeof(GLhalfNV);
        case 135:
            return VAR_1 * sizeof(GLfloat);
        case 136:
            return VAR_1 * sizeof(GLbyte);
        case 131:
            return VAR_1 * sizeof(GLubyte);
        case 132:
            return VAR_1 * sizeof(GLshort);
        case 128:
            return VAR_1 * sizeof(GLushort);
        case 133:
            return VAR_1 * sizeof(GLint);
        case 130:
            return VAR_1 * sizeof(GLuint);
        case 129:
            return sizeof(GLuint);
        default:
            FUNC_0("Unhandled GL type %#x.\n", VAR_0);
            return 0;
    }
}
