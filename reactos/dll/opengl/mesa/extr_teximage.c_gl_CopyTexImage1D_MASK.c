
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_image {int dummy; } ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef int GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,int ,int ,struct gl_image*) ;
 int FUNC_3 (int *,int ,char*) ;
 struct gl_image* FUNC_4 (int *,scalar_t__,scalar_t__,int,int,scalar_t__) ;

void FUNC_5( GLcontext *VAR_9,
                        GLenum VAR_10, GLint VAR_11,
                        GLenum VAR_12,
                        GLint VAR_13, GLint VAR_14,
                        GLsizei VAR_15, GLint VAR_16 )
{
   GLint VAR_17;
   struct gl_image *VAR_18;

   if (FUNC_0(VAR_9)) {
      FUNC_3( VAR_9, VAR_1, "glCopyTexImage1D" );
      return;
   }
   if (VAR_10!=VAR_5) {
      FUNC_3( VAR_9, VAR_0, "glCopyTexImage1D(target)" );
      return;
   }
   if (VAR_11<0 || VAR_11>=VAR_7) {
      FUNC_3( VAR_9, VAR_2, "glCopyTexImage1D(level)" );
      return;
   }
   if (VAR_16!=0 && VAR_16!=1) {
      FUNC_3( VAR_9, VAR_2, "glCopyTexImage1D(border)" );
      return;
   }
   if (VAR_15<2*VAR_16 || VAR_15>2+VAR_8 || VAR_15<0) {
      FUNC_3( VAR_9, VAR_2, "glCopyTexImage1D(width)" );
      return;
   }
   VAR_17 = FUNC_1( VAR_12 );
   if (VAR_17<0 || (VAR_12>=1 && VAR_12<=4)) {
      FUNC_3( VAR_9, VAR_2, "glCopyTexImage1D(format)" );
      return;
   }

   VAR_18 = FUNC_4( VAR_9, VAR_13, VAR_14, VAR_15, 1, VAR_17 );
   if (!VAR_18) {
      FUNC_3( VAR_9, VAR_3, "glCopyTexImage1D" );
      return;
   }

   FUNC_2( VAR_9, VAR_10, VAR_11, VAR_12, VAR_15,
                  VAR_16, VAR_4, VAR_6, VAR_18 );


}
