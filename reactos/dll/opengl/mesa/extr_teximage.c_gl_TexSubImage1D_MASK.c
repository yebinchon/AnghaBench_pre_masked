
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct gl_texture_image {scalar_t__ Border; scalar_t__ Width; scalar_t__ Format; int IntFormat; int * Data; } ;
struct gl_image {scalar_t__ Type; size_t Components; scalar_t__ RefCount; scalar_t__ Data; } ;
struct TYPE_14__ {struct gl_texture_image** Image; void* Dirty; } ;
struct TYPE_12__ {TYPE_5__* Current1D; void* AnyDirty; } ;
struct TYPE_11__ {int (* TexImage ) (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,int ,struct gl_texture_image*) ;int (* TexSubImage ) (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,size_t,int ,scalar_t__,int,int ,struct gl_texture_image*) ;} ;
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
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (struct gl_image*) ;
 int FUNC_4 (struct gl_texture_image*) ;
 size_t FUNC_5 (scalar_t__) ;
 struct gl_texture_image* FUNC_6 (TYPE_3__*,struct gl_image*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,size_t,int ,scalar_t__,int,int ,struct gl_texture_image*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,TYPE_5__*,size_t,int ,struct gl_texture_image*) ;

void FUNC_9( GLcontext *VAR_12,
                       GLenum VAR_13, GLint VAR_14, GLint VAR_15,
                       GLsizei VAR_16, GLenum VAR_17, GLenum VAR_18,
                       struct gl_image *VAR_19 )
{
   struct gl_texture_image *VAR_20;

   if (VAR_13!=VAR_8) {
      FUNC_2( VAR_12, VAR_3, "glTexSubImage1D(target)" );
      return;
   }
   if (VAR_14<0 || VAR_14>=VAR_11) {
      FUNC_2( VAR_12, VAR_3, "glTexSubImage1D(level)" );
      return;
   }

   VAR_20 = VAR_12->Texture.Current1D->Image[VAR_14];
   if (!VAR_20) {
      FUNC_2( VAR_12, VAR_4, "glTexSubImage1D" );
      return;
   }

   if (VAR_15 < -((GLint)VAR_20->Border)) {
      FUNC_2( VAR_12, VAR_5, "glTexSubImage1D(xoffset)" );
      return;
   }
   if (VAR_15 + VAR_16 > VAR_20->Width + VAR_20->Border) {
      FUNC_2( VAR_12, VAR_5, "glTexSubImage1D(xoffset+width)" );
      return;
   }

   if (VAR_19) {

      GLint VAR_21 = FUNC_1(VAR_20->Format);

      if (VAR_19->Type==VAR_10 && VAR_21==VAR_19->Components) {


         GLubyte *VAR_22 = VAR_20->Data + VAR_21 * VAR_15;
         GLubyte *VAR_23 = (GLubyte *) VAR_19->Data;
         FUNC_0( VAR_22, VAR_23, VAR_16 * VAR_21 );
      }
      else {

         struct gl_texture_image *VAR_24 = FUNC_6(VAR_12, VAR_19,
                                        VAR_20->IntFormat, VAR_20->Border);
         GLubyte *VAR_25 = VAR_20->Data + VAR_21 * VAR_15;
         GLubyte *VAR_26 = VAR_24->Data;
         FUNC_0( VAR_25, VAR_26, VAR_16 * VAR_21 );
         FUNC_4(VAR_24);
      }


      if (VAR_19->RefCount==0) {
         FUNC_3(VAR_19);
      }

      VAR_12->Texture.Current1D->Dirty = VAR_9;
      VAR_12->Texture.AnyDirty = VAR_9;


      if (VAR_12->Driver.TexSubImage) {
 (*VAR_12->Driver.TexSubImage)( VAR_12, VAR_8,
        VAR_12->Texture.Current1D, VAR_14,
        VAR_15,0,VAR_16,1,
        VAR_12->Texture.Current1D->Image[VAR_14]->IntFormat,
        VAR_20 );
      }
      else {
 if (VAR_12->Driver.TexImage) {
   (*VAR_12->Driver.TexImage)( VAR_12, VAR_8,
       VAR_12->Texture.Current1D,
       VAR_14, VAR_12->Texture.Current1D->Image[VAR_14]->IntFormat,
       VAR_20 );
 }
      }
   }
   else {

      GLint VAR_27, VAR_28;

      if (VAR_16<0) {
         FUNC_2( VAR_12, VAR_5, "glTexSubImage1D(width)" );
         return;
      }
      if (VAR_18==VAR_0 && VAR_17!=VAR_1) {
         FUNC_2( VAR_12, VAR_3, "glTexSubImage1D(format)" );
         return;
      }
      VAR_27 = FUNC_1( VAR_17 );
      if (VAR_27<0 || VAR_17==VAR_7
          || VAR_17==VAR_2){
         FUNC_2( VAR_12, VAR_3, "glTexSubImage1D(format)" );
         return;
      }
      VAR_28 = FUNC_5( VAR_18 );
      if (VAR_28<=0) {
         FUNC_2( VAR_12, VAR_3, "glTexSubImage1D(type)" );
         return;
      }

      FUNC_2( VAR_12, VAR_6, "glTexSubImage1D" );
   }
}
