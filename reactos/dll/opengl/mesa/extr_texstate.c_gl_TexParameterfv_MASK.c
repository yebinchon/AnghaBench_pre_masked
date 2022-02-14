
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gl_texture_object {int MinFilter; int MagFilter; int WrapS; int WrapT; int WrapR; void* Dirty; void** BorderColor; } ;
struct TYPE_8__ {int (* TexParameter ) (TYPE_3__*,int,struct gl_texture_object*,int,double const*) ;} ;
struct TYPE_7__ {void* AnyDirty; struct gl_texture_object* Current2D; struct gl_texture_object* Current1D; } ;
struct TYPE_9__ {TYPE_2__ Driver; TYPE_1__ Texture; int NewState; } ;
typedef int GLint ;
typedef double GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 void* FUNC_0 (int ,int ,int) ;
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
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int,struct gl_texture_object*,int,double const*) ;

void FUNC_3( GLcontext *VAR_12,
                        GLenum VAR_13, GLenum VAR_14, const GLfloat *VAR_15 )
{
   GLenum VAR_16 = (GLenum) (GLint) VAR_15[0];
   struct gl_texture_object *VAR_17;

   switch (VAR_13) {
      case 135:
         VAR_17 = VAR_12->Texture.Current1D;
         break;
      case 134:
         VAR_17 = VAR_12->Texture.Current2D;
         break;
      default:
         FUNC_1( VAR_12, VAR_1, "glTexParameter(target)" );
         return;
   }

   switch (VAR_14) {
      case 131:
         if (VAR_16==VAR_6 || VAR_16==VAR_3
             || VAR_16==VAR_8
             || VAR_16==VAR_5
             || VAR_16==VAR_7
             || VAR_16==VAR_4) {
            VAR_17->MinFilter = VAR_16;
            VAR_12->NewState |= VAR_11;
         }
         else {
            FUNC_1( VAR_12, VAR_2, "glTexParameter(param)" );
            return;
         }
         break;
      case 132:
         if (VAR_16==VAR_6 || VAR_16==VAR_3) {
            VAR_17->MagFilter = VAR_16;
            VAR_12->NewState |= VAR_11;
         }
         else {
            FUNC_1( VAR_12, VAR_2, "glTexParameter(param)" );
            return;
         }
         break;
      case 129:
         if (VAR_16==VAR_0 || VAR_16==VAR_9) {
            VAR_17->WrapS = VAR_16;
         }
         else {
            FUNC_1( VAR_12, VAR_2, "glTexParameter(param)" );
            return;
         }
         break;
      case 128:
         if (VAR_16==VAR_0 || VAR_16==VAR_9) {
            VAR_17->WrapT = VAR_16;
         }
         else {
            FUNC_1( VAR_12, VAR_2, "glTexParameter(param)" );
            return;
         }
         break;
      case 130:
         if (VAR_16==VAR_0 || VAR_16==VAR_9) {
            VAR_17->WrapR = VAR_16;
         }
         else {
            FUNC_1( VAR_12, VAR_2, "glTexParameter(param)" );
         }
         break;
      case 133:
         VAR_17->BorderColor[0] = FUNC_0((GLint)(VAR_15[0]*255.0), 0, 255);
         VAR_17->BorderColor[1] = FUNC_0((GLint)(VAR_15[1]*255.0), 0, 255);
         VAR_17->BorderColor[2] = FUNC_0((GLint)(VAR_15[2]*255.0), 0, 255);
         VAR_17->BorderColor[3] = FUNC_0((GLint)(VAR_15[3]*255.0), 0, 255);
         break;
      default:
         FUNC_1( VAR_12, VAR_1, "glTexParameter(pname)" );
         return;
   }

   VAR_17->Dirty = VAR_10;
   VAR_12->Texture.AnyDirty = VAR_10;

   if (VAR_12->Driver.TexParameter) {
      (*VAR_12->Driver.TexParameter)( VAR_12, VAR_13, VAR_17, VAR_14, VAR_15 );
   }
}
