
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ (* DrawPixels ) (TYPE_3__*,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int const*) ;} ;
struct TYPE_12__ {scalar_t__* RasterPos; } ;
struct TYPE_14__ {scalar_t__ RenderMode; scalar_t__ RasterMask; scalar_t__ CallDepth; scalar_t__ CompileFlag; scalar_t__ ExecuteFlag; scalar_t__ FastDrawPixels; TYPE_2__ Driver; TYPE_1__ Current; scalar_t__ NewState; } ;
typedef int const GLvoid ;
typedef scalar_t__ GLsizei ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const*) ;
 int const* FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__,scalar_t__,int const*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int const*) ;

void FUNC_8( GLcontext* VAR_6, GLsizei VAR_7, GLsizei VAR_8,
                    GLenum VAR_9, GLenum VAR_10, const GLvoid *VAR_11 )
{
   GLvoid *VAR_12;

   if (VAR_7<0 || VAR_8<0) {
      FUNC_2( VAR_6, VAR_1, "glDrawPixels" );
      return;
   }

   if (VAR_6->NewState) {
      FUNC_5(VAR_6);
   }


   if (!VAR_6->CompileFlag && VAR_6->Driver.DrawPixels) {
      GLint VAR_13 = (GLint) (VAR_6->Current.RasterPos[0] + 0.5F);
      GLint VAR_14 = (GLint) (VAR_6->Current.RasterPos[1] + 0.5F);
      if ((*VAR_6->Driver.DrawPixels)( VAR_6, VAR_13, VAR_14, VAR_7, VAR_8,
                                      VAR_9, VAR_10, VAR_0, VAR_11 )) {

         return;
      }
   }

   if (VAR_9==VAR_4 && VAR_10==VAR_5 && VAR_6->FastDrawPixels
       && !VAR_6->CompileFlag && VAR_6->RenderMode==VAR_3
       && VAR_6->RasterMask==0 && VAR_6->CallDepth==0) {

      if (FUNC_6( VAR_6, VAR_7, VAR_8, VAR_11 )) {

         return;
      }
   }






   if (VAR_6->CallDepth == 0) {
      VAR_12 = FUNC_4( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 );
      if (!VAR_12) {
         FUNC_2( VAR_6, VAR_2, "glDrawPixels" );
         return;
      }
   }
   else {
      VAR_12 = (GLvoid *) VAR_11;
   }

   if (VAR_6->CompileFlag) {
      FUNC_3( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12 );
   }
   if (VAR_6->ExecuteFlag) {
      FUNC_0( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12 );
      if (!VAR_6->CompileFlag) {

         if (VAR_12!=VAR_11)
            FUNC_1( VAR_12 );
      }
   }
}
