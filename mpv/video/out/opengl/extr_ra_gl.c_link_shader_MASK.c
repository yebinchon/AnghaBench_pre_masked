
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra {int log; } ;
struct TYPE_3__ {int (* GetProgramInfoLog ) (int ,int,int *,int *) ;int (* GetProgramiv ) (int ,int ,int*) ;int (* LinkProgram ) (int ) ;} ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLchar ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ra*,int,char*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (struct ra*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct ra *VAR_5, GLuint VAR_6, bool *VAR_7)
{
    GL *VAR_8 = FUNC_2(VAR_5);

    VAR_8->LinkProgram(VAR_6);
    GLint VAR_9 = 0;
    VAR_8->GetProgramiv(VAR_6, VAR_1, &VAR_9);
    GLint VAR_10 = 0;
    VAR_8->GetProgramiv(VAR_6, VAR_0, &VAR_10);

    int VAR_11 = VAR_9 ? (VAR_10 > 1 ? VAR_4 : VAR_2) : VAR_3;
    if (FUNC_1(VAR_5->log, VAR_11)) {
        GLchar *VAR_12 = FUNC_8(((void*)0), VAR_10 + 1);
        VAR_8->GetProgramInfoLog(VAR_6, VAR_10, ((void*)0), VAR_12);
        FUNC_0(VAR_5, VAR_11, "shader link log (status=%d): %s\n", VAR_9, VAR_12);
        FUNC_7(VAR_12);
    }

    *VAR_7 &= VAR_9;
}
