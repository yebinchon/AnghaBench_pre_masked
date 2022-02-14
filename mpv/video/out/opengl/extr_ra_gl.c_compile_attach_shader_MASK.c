
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra {int log; } ;
struct TYPE_3__ {int (* DeleteShader ) (int ) ;int (* AttachShader ) (int ,int ) ;int (* GetTranslatedShaderSourceANGLE ) (int ,int,int *,char const*) ;int (* GetShaderiv ) (int ,int ,int*) ;int (* GetShaderInfoLog ) (int ,int,int *,char const*) ;int (* CompileShader ) (int ) ;int (* ShaderSource ) (int ,int,char const**,int *) ;int (* CreateShader ) (int ) ;} ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;
typedef char const GLchar ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ra*,char*) ;
 int FUNC_1 (struct ra*,int,char*,char const*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,char const*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 TYPE_1__* FUNC_4 (struct ra*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,char const**,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (int ,int,int *,char const*) ;
 int FUNC_13 (int ,int ,int*) ;
 int FUNC_14 (int ,int,int *,char const*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char const*) ;
 char* FUNC_17 (int *,int) ;

__attribute__((used)) static void FUNC_18(struct ra *VAR_6, GLuint VAR_7,
                                  GLenum VAR_8, const char *VAR_9, bool *VAR_10)
{
    GL *VAR_11 = FUNC_4(VAR_6);

    GLuint VAR_12 = VAR_11->CreateShader(VAR_8);
    VAR_11->ShaderSource(VAR_12, 1, &VAR_9, ((void*)0));
    VAR_11->CompileShader(VAR_12);
    GLint VAR_13 = 0;
    VAR_11->GetShaderiv(VAR_12, VAR_0, &VAR_13);
    GLint VAR_14 = 0;
    VAR_11->GetShaderiv(VAR_12, VAR_1, &VAR_14);

    int VAR_15 = VAR_13 ? (VAR_14 > 1 ? VAR_5 : VAR_3) : VAR_4;
    const char *VAR_16 = FUNC_5(VAR_8);
    if (FUNC_3(VAR_6->log, VAR_15)) {
        FUNC_1(VAR_6, VAR_15, "%s shader source:\n", VAR_16);
        FUNC_2(VAR_6->log, VAR_15, VAR_9);
    }
    if (VAR_14 > 1) {
        GLchar *VAR_17 = FUNC_17(((void*)0), VAR_14 + 1);
        VAR_11->GetShaderInfoLog(VAR_12, VAR_14, ((void*)0), VAR_17);
        FUNC_1(VAR_6, VAR_15, "%s shader compile log (status=%d):\n%s\n",
               VAR_16, VAR_13, VAR_17);
        FUNC_16(VAR_17);
    }
    if (VAR_11->GetTranslatedShaderSourceANGLE && FUNC_3(VAR_6->log, VAR_3)) {
        GLint VAR_18 = 0;
        VAR_11->GetShaderiv(VAR_12, VAR_2, &VAR_18);
        if (VAR_18 > 0) {
            GLchar *VAR_19 = FUNC_17(((void*)0), VAR_18 + 1);
            VAR_11->GetTranslatedShaderSourceANGLE(VAR_12, VAR_18, ((void*)0), VAR_19);
            FUNC_0(VAR_6, "Translated shader:\n");
            FUNC_2(VAR_6->log, VAR_3, VAR_19);
        }
    }

    VAR_11->AttachShader(VAR_7, VAR_12);
    VAR_11->DeleteShader(VAR_12);

    *VAR_10 &= VAR_13;
}
