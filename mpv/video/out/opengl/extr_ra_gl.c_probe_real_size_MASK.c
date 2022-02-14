
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_format {int num_components; scalar_t__* component_depth; struct gl_format* priv; } ;
struct gl_format {scalar_t__ format; int type; int internal_format; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int,int *) ;int (* GetTexLevelParameteriv ) (int ,int ,int const,scalar_t__*) ;int (* TexImage2D ) (int ,int ,int ,int,int,int ,scalar_t__,int ,int *) ;int (* BindTexture ) (int ,int ) ;int (* GenTextures ) (int,int *) ;scalar_t__ es; } ;
typedef int GLuint ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef TYPE_1__ GL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,scalar_t__,int ,int *) ;
 int FUNC_5 (int ,int ,int const,scalar_t__*) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void FUNC_7(GL *VAR_8, struct ra_format *VAR_9)
{
    const struct gl_format *VAR_10 = VAR_9->priv;

    if (!VAR_8->GetTexLevelParameteriv)
        return;

    bool VAR_11 = VAR_10->format == VAR_0 ||
                 VAR_10->format == VAR_1;
    if (VAR_11 && VAR_8->es)
        return;

    GLuint VAR_12;
    VAR_8->GenTextures(1, &VAR_12);
    VAR_8->BindTexture(VAR_2, VAR_12);
    VAR_8->TexImage2D(VAR_2, 0, VAR_10->internal_format, 64, 64, 0,
                   VAR_10->format, VAR_10->type, ((void*)0));
    for (int VAR_13 = 0; VAR_13 < VAR_9->num_components; VAR_13++) {
        const GLenum VAR_14[] = {
            VAR_7,
            VAR_5,
            VAR_4,
            VAR_3,
            VAR_6,
            VAR_3,
        };
        int VAR_15 = VAR_11 ? VAR_13 + 4 : VAR_13;
        FUNC_1(VAR_15 < FUNC_0(VAR_14));
        GLint VAR_16 = -1;
        VAR_8->GetTexLevelParameteriv(VAR_2, 0, VAR_14[VAR_15], &VAR_16);
        VAR_9->component_depth[VAR_13] = VAR_16 > 0 ? VAR_16 : 0;
    }
    VAR_8->DeleteTextures(1, &VAR_12);
}
