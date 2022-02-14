
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
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





__attribute__((used)) static GLuint FUNC_2(DWORD VAR_12, const struct wined3d_gl_info *VAR_13,
        unsigned int VAR_14, GLuint *VAR_15, GLuint *VAR_16, GLuint VAR_17)
{
    GLenum VAR_18;

    if(VAR_15) *VAR_15 = VAR_4;
    if(VAR_12 == VAR_0)
    {
        if (VAR_16) *VAR_16 = VAR_4;
        return -1;
    }

    switch(VAR_12 & VAR_11) {
        case 132:
            VAR_18 = VAR_5;
            break;

        case 133:





            VAR_18 = VAR_14 ? VAR_6 : VAR_5;
            break;

        case 129:
            VAR_18 = VAR_6 + VAR_14;
            break;

        case 128:
            VAR_18 = VAR_1;
            break;

        case 131:
            VAR_18 = VAR_7;
            break;

        case 130:
            VAR_18 = VAR_17;
            break;

        case 134:
            VAR_18 = FUNC_0(VAR_14);
            break;

        default:
            FUNC_1("Unknown source argument %d\n", VAR_12);
            VAR_18 = VAR_8;
    }

    if(VAR_12 & VAR_10) {
        if(VAR_15) *VAR_15 |= VAR_3;
    }
    if(VAR_12 & VAR_9) {
        if(VAR_16) *VAR_16 = VAR_2;
    } else {
        if(VAR_16) *VAR_16 = VAR_4;
    }
    return VAR_18;
}
