
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct gl_texture_image {scalar_t__ Border; size_t Width; scalar_t__ Height; int IntFormat; int * Data; int Format; } ;
struct gl_image {scalar_t__ Type; size_t Components; scalar_t__ RefCount; scalar_t__ Data; } ;
struct TYPE_14__ {struct gl_texture_image** Image; void* Dirty; } ;
struct TYPE_12__ {TYPE_5__* Current2D; void* AnyDirty; } ;
struct TYPE_11__ {int (* TexImage ) (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,int ,struct gl_texture_image*) ;int (* TexSubImage ) (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,size_t,size_t,scalar_t__,scalar_t__,int ,struct gl_texture_image*) ;} ;
struct TYPE_13__ {TYPE_2__ Texture; TYPE_1__ Driver; } ;
typedef int GLubyte ;
typedef scalar_t__ GLsizei ;
typedef size_t GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (struct gl_image*) ;
 int FUNC_5 (struct gl_texture_image*) ;
 size_t FUNC_6 (scalar_t__) ;
 struct gl_texture_image* FUNC_7 (TYPE_3__*,struct gl_image*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,size_t,size_t,scalar_t__,scalar_t__,int ,struct gl_texture_image*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,int ,struct gl_texture_image*) ;

void FUNC_10( GLcontext *VAR_12,
                       GLenum VAR_13, GLint VAR_14,
                       GLint VAR_15, GLint VAR_16,
                       GLsizei VAR_17, GLsizei VAR_18,
                       GLenum VAR_19, GLenum VAR_20,
                       struct gl_image *VAR_21 )
{
   struct gl_texture_image *VAR_22;

   if (VAR_13!=VAR_8) {
      FUNC_3( VAR_12, VAR_3, "glTexSubImage2D(target)" );
      return;
   }
   if (VAR_14<0 || VAR_14>=VAR_11) {
      FUNC_3( VAR_12, VAR_3, "glTexSubImage2D(level)" );
      return;
   }

   VAR_22 = VAR_12->Texture.Current2D->Image[VAR_14];
   if (!VAR_22) {
      FUNC_3( VAR_12, VAR_4, "glTexSubImage2D" );
      return;
   }

   if (VAR_15 < -((GLint)VAR_22->Border)) {
      FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(xoffset)" );
      return;
   }
   if (VAR_16 < -((GLint)VAR_22->Border)) {
      FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(yoffset)" );
      return;
   }
   if (VAR_15 + VAR_17 > VAR_22->Width + VAR_22->Border) {
      FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(xoffset+width)" );
      return;
   }
   if (VAR_16 + VAR_18 > VAR_22->Height + VAR_22->Border) {
      FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(yoffset+height)" );
      return;
   }

   if (VAR_21) {

      GLint VAR_23 = FUNC_1(VAR_22->Format);

      if (VAR_21->Type==VAR_10 && VAR_23==VAR_21->Components) {


         GLubyte *VAR_24 = VAR_22->Data
                      + (VAR_16 * VAR_22->Width + VAR_15) * VAR_23;
         GLubyte *VAR_25 = (GLubyte *) VAR_21->Data;
         GLint VAR_26;
         for (VAR_26=0;VAR_26<VAR_18;VAR_26++) {
            FUNC_0( VAR_24, VAR_25, VAR_17 * VAR_23 );
            VAR_24 += VAR_22->Width * VAR_23 * sizeof(GLubyte);
            VAR_25 += VAR_17 * VAR_23 * sizeof(GLubyte);
         }
      }
      else {

         struct gl_texture_image *VAR_27 = FUNC_7(VAR_12, VAR_21,
                                        VAR_22->IntFormat, VAR_22->Border);
         GLubyte *VAR_28 = VAR_22->Data
                  + (VAR_16 * VAR_22->Width + VAR_15) * VAR_23;
         GLubyte *VAR_29 = VAR_27->Data;
         GLint VAR_30;
         for (VAR_30=0;VAR_30<VAR_18;VAR_30++) {
            FUNC_0( VAR_28, VAR_29, VAR_17 * VAR_23 );
            VAR_28 += VAR_22->Width * VAR_23 * sizeof(GLubyte);
            VAR_29 += VAR_17 * VAR_23 * sizeof(GLubyte);
         }
         FUNC_5(VAR_27);
      }


      if (VAR_21->RefCount==0) {
         FUNC_4(VAR_21);
      }

      VAR_12->Texture.Current2D->Dirty = VAR_9;
      VAR_12->Texture.AnyDirty = VAR_9;


      if (VAR_12->Driver.TexSubImage) {
 (*VAR_12->Driver.TexSubImage)( VAR_12, VAR_8, VAR_12->Texture.Current2D, VAR_14,
        VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_12->Texture.Current2D->Image[VAR_14]->IntFormat,
        VAR_22 );
      }
      else {
 if (VAR_12->Driver.TexImage) {
   (*VAR_12->Driver.TexImage)( VAR_12, VAR_8, VAR_12->Texture.Current2D,
       VAR_14, VAR_12->Texture.Current2D->Image[VAR_14]->IntFormat,
       VAR_22 );
 }
      }
   }
   else {

      GLint VAR_31, VAR_32;

      if (VAR_17<0) {
         FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(width)" );
         return;
      }
      if (VAR_18<0) {
         FUNC_3( VAR_12, VAR_5, "glTexSubImage2D(height)" );
         return;
      }
      if (VAR_20==VAR_0 && VAR_19!=VAR_1) {
         FUNC_3( VAR_12, VAR_3, "glTexSubImage1D(format)" );
         return;
      }
      VAR_31 = FUNC_2( VAR_19 );
      if (VAR_31<0 || VAR_19==VAR_7
          || VAR_19==VAR_2){
         FUNC_3( VAR_12, VAR_3, "glTexSubImage2D(format)" );
         return;
      }
      VAR_32 = FUNC_6( VAR_20 );
      if (VAR_32<=0) {
         FUNC_3( VAR_12, VAR_3, "glTexSubImage2D(type)" );
         return;
      }

      FUNC_3( VAR_12, VAR_6, "glTexSubImage2D" );
   }
}
