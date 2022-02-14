
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_texture_image {scalar_t__ Border; scalar_t__ Width; scalar_t__ Height; scalar_t__ Data; } ;
struct TYPE_9__ {TYPE_1__* Current2D; } ;
struct TYPE_10__ {TYPE_2__ Texture; } ;
struct TYPE_8__ {struct gl_texture_image** Image; } ;
typedef scalar_t__ GLsizei ;
typedef size_t GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_3__*,struct gl_texture_image*,scalar_t__,scalar_t__,size_t,size_t,size_t,size_t) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_5,
                              GLenum VAR_6, GLint VAR_7,
                              GLint VAR_8, GLint VAR_9,
                              GLint VAR_10, GLint VAR_11, GLsizei VAR_12, GLsizei VAR_13 )
{
   struct gl_texture_image *VAR_14;

   if (FUNC_0(VAR_5)) {
      FUNC_2( VAR_5, VAR_1, "glCopyTexSubImage2D" );
      return;
   }
   if (VAR_6!=VAR_3) {
      FUNC_2( VAR_5, VAR_0, "glCopyTexSubImage2D(target)" );
      return;
   }
   if (VAR_7<0 || VAR_7>=VAR_4) {
      FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage2D(level)" );
      return;
   }
   if (VAR_12<0) {
      FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage2D(width)" );
      return;
   }
   if (VAR_13<0) {
      FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage2D(height)" );
      return;
   }

   VAR_14 = VAR_5->Texture.Current2D->Image[VAR_7];

   if (VAR_14) {
      if (VAR_8 < -((GLint)VAR_14->Border)) {
         FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage2D(xoffset)" );
         return;
      }
      if (VAR_9 < -((GLint)VAR_14->Border)) {
         FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage2D(yoffset)" );
         return;
      }

      if (VAR_8+VAR_12 > VAR_14->Width+VAR_14->Border) {
         FUNC_2( VAR_5, VAR_2,
                   "glCopyTexSubImage2D(xoffset+width)" );
         return;
      }
      if (VAR_9+VAR_13 > VAR_14->Height+VAR_14->Border) {
         FUNC_2( VAR_5, VAR_2,
                   "glCopyTexSubImage2D(yoffset+height)" );
         return;
      }

      if (VAR_14->Data) {
         FUNC_1( VAR_5, VAR_14, VAR_12, VAR_13,
                             VAR_10, VAR_11, VAR_8, VAR_9);
      }
   }
   else {
      FUNC_2( VAR_5, VAR_1, "glCopyTexSubImage2D" );
   }
}
