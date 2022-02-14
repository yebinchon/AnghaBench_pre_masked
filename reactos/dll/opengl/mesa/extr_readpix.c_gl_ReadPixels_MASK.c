
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int DrawBuffer; } ;
struct TYPE_15__ {int (* SetBuffer ) (TYPE_4__*,int ) ;} ;
struct TYPE_14__ {int ReadBuffer; } ;
struct TYPE_17__ {TYPE_3__ Color; TYPE_2__ Driver; TYPE_1__ Pixel; } ;
typedef int GLvoid ;
typedef int GLsizei ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_4__ GLcontext ;
 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ,int,int,int *) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int,int *) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ,int ,int,int *) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ,int ,int,int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;

void FUNC_8( GLcontext *VAR_2,
                    GLint VAR_3, GLint VAR_4, GLsizei VAR_5, GLsizei VAR_6,
      GLenum VAR_7, GLenum VAR_8, GLvoid *VAR_9 )
{
    if (FUNC_0(VAR_2))
    {
        FUNC_1(VAR_2, VAR_1, "glReadPixels");
        return;
    }

    (void) (*VAR_2->Driver.SetBuffer)(VAR_2, VAR_2->Pixel.ReadBuffer);

    switch (VAR_7)
    {
    case 136:
        FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
        break;
    case 128:
        FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
        break;
    case 135:
        FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9);
        break;
    case 131:
    case 134:
    case 137:
    case 140:
    case 130:
    case 138:
    case 133:
    case 132:
    case 129:
    case 139:
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        break;
    default:
        FUNC_1(VAR_2, VAR_0, "glReadPixels(format)");
    }

    (void) (*VAR_2->Driver.SetBuffer)(VAR_2, VAR_2->Color.DrawBuffer);
}
