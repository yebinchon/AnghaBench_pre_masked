
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
typedef char GLuint ;
typedef size_t GLint ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (size_t) ;
 char* FUNC_4 (char const**) ;
 int FUNC_5 (char,size_t,int *,char*) ;
 int FUNC_6 (char,int ,size_t*) ;
 int FUNC_7 (char,size_t,int *,char*) ;
 int FUNC_8 (char,int ,size_t*) ;
 char* FUNC_9 (size_t) ;
 char* FUNC_10 (size_t,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(const struct wined3d_gl_info *VAR_4, GLuint VAR_5)
{
    GLint VAR_6, VAR_7, VAR_8 = -1;
    GLuint *VAR_9;
    char *VAR_10 = ((void*)0);

    FUNC_2(FUNC_6(VAR_5, VAR_0, &VAR_7));
    if (!(VAR_9 = FUNC_10(VAR_7, sizeof(*VAR_9))))
    {
        FUNC_0("Failed to allocate shader array memory.\n");
        return;
    }

    FUNC_2(FUNC_5(VAR_5, VAR_7, ((void*)0), VAR_9));
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        const char *VAR_11, *VAR_12;
        GLint VAR_13;

        FUNC_2(FUNC_8(VAR_9[VAR_6], VAR_2, &VAR_13));

        if (VAR_8 < VAR_13)
        {
            FUNC_11(VAR_10);

            if (!(VAR_10 = FUNC_9(VAR_13)))
            {
                FUNC_0("Failed to allocate %d bytes for shader source.\n", VAR_13);
                FUNC_11(VAR_9);
                return;
            }
            VAR_8 = VAR_13;
        }

        FUNC_1("Shader %u:\n", VAR_9[VAR_6]);
        FUNC_2(FUNC_8(VAR_9[VAR_6], VAR_3, &VAR_13));
        FUNC_1("    GL_SHADER_TYPE: %s.\n", FUNC_3(VAR_13));
        FUNC_2(FUNC_8(VAR_9[VAR_6], VAR_1, &VAR_13));
        FUNC_1("    GL_COMPILE_STATUS: %d.\n", VAR_13);
        FUNC_1("\n");

        VAR_11 = VAR_10;
        FUNC_2(FUNC_7(VAR_9[VAR_6], VAR_8, ((void*)0), VAR_10));
        while ((VAR_12 = FUNC_4(&VAR_11))) FUNC_1("    %.*s", (int)(VAR_11 - VAR_12), VAR_12);
        FUNC_1("\n");
    }

    FUNC_11(VAR_10);
    FUNC_11(VAR_9);
}
