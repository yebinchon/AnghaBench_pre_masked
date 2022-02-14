
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_texture_image {scalar_t__ Border; scalar_t__ Width; scalar_t__ Data; } ;
struct TYPE_9__ {TYPE_1__* Current1D; } ;
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
 int FUNC_1 (TYPE_3__*,struct gl_texture_image*,scalar_t__,int,size_t,size_t,size_t,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_5,
                              GLenum VAR_6, GLint VAR_7,
                              GLint VAR_8, GLint VAR_9, GLint VAR_10, GLsizei VAR_11 )
{
   struct gl_texture_image *VAR_12;

   if (FUNC_0(VAR_5)) {
      FUNC_2( VAR_5, VAR_1, "glCopyTexSubImage1D" );
      return;
   }
   if (VAR_6!=VAR_3) {
      FUNC_2( VAR_5, VAR_0, "glCopyTexSubImage1D(target)" );
      return;
   }
   if (VAR_7<0 || VAR_7>=VAR_4) {
      FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage1D(level)" );
      return;
   }
   if (VAR_11<0) {
      FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage1D(width)" );
      return;
   }

   VAR_12 = VAR_5->Texture.Current1D->Image[VAR_7];

   if (VAR_12) {
      if (VAR_8 < -((GLint)VAR_12->Border)) {
         FUNC_2( VAR_5, VAR_2, "glCopyTexSubImage1D(xoffset)" );
         return;
      }

      if (VAR_8+VAR_11 > VAR_12->Width+VAR_12->Border) {
         FUNC_2( VAR_5, VAR_2,
                   "glCopyTexSubImage1D(xoffset+width)" );
         return;
      }
      if (VAR_12->Data) {
         FUNC_1( VAR_5, VAR_12, VAR_11, 1, VAR_9, VAR_10, VAR_8, 0);
      }
   }
   else {
      FUNC_2( VAR_5, VAR_1, "glCopyTexSubImage1D" );
   }
}
