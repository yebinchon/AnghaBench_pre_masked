
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ SwapBytes; scalar_t__ LsbFirst; } ;
struct TYPE_5__ {TYPE_3__ Unpack; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ GLcontext ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (TYPE_3__*,int const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

GLvoid *FUNC_11( GLcontext *VAR_2,
                          GLsizei VAR_3, GLsizei VAR_4,
                          GLenum VAR_5, GLenum VAR_6,
                          const GLvoid *VAR_7 )
{
   GLint VAR_8, VAR_9;

   VAR_8 = FUNC_7( VAR_6 );
   if (VAR_8<0) {
      FUNC_4( VAR_2, VAR_1, "internal error in gl_unpack(type)" );
      return ((void*)0);
   }

   VAR_9 = FUNC_3( VAR_5 );
   if (VAR_9<0) {
      FUNC_4( VAR_2, VAR_1, "gl_unpack_pixels(format)" );
      return ((void*)0);
   }

   if (VAR_6==VAR_0) {

      GLint VAR_10, VAR_11, VAR_12;
      GLubyte *VAR_13, *VAR_14;
      GLvoid *VAR_15;


      VAR_10 = FUNC_0( VAR_3 * VAR_4 , 8 );
      VAR_13 = (GLubyte *) FUNC_10( VAR_10 );
      if (!VAR_13) {
  return ((void*)0);
      }


      VAR_12 = FUNC_0( VAR_3, 8 );
      VAR_14 = VAR_13;
      for (VAR_11=0;VAR_11<VAR_4;VAR_11++) {
         VAR_15 = FUNC_6( &VAR_2->Unpack, VAR_7, VAR_3, VAR_4,
                                       VAR_5, VAR_6, VAR_11);
         if (!VAR_15) {
            FUNC_2(VAR_13);
            return ((void*)0);
         }
  FUNC_1( VAR_14, VAR_15, VAR_12 );
  VAR_14 += VAR_12;
      }


      if (VAR_2->Unpack.LsbFirst) {
  FUNC_5( VAR_13, VAR_10 );
      }
      return (GLvoid *) VAR_13;
   }
   else {

      GLint VAR_16, VAR_17, VAR_18;
      GLubyte *VAR_19, *VAR_20;
      GLvoid *VAR_21;

      VAR_16 = VAR_3 * VAR_9 * VAR_8;


      VAR_17 = VAR_4 * VAR_16;
      VAR_19 = (GLubyte *) FUNC_10( VAR_17 );
      if (!VAR_19) {
  return ((void*)0);
      }


      VAR_20 = VAR_19;
      for (VAR_18=0;VAR_18<VAR_4;VAR_18++) {
         VAR_21 = FUNC_6( &VAR_2->Unpack, VAR_7, VAR_3, VAR_4,
                                       VAR_5, VAR_6, VAR_18);
         if (!VAR_21) {
            FUNC_2(VAR_19);
            return ((void*)0);
         }
  FUNC_1( VAR_20, VAR_21, VAR_16 );
  VAR_20 += VAR_16;
      }


      if (VAR_2->Unpack.SwapBytes && VAR_8>1) {
  if (VAR_8==2) {
     FUNC_8( (GLushort *) VAR_19, VAR_17/2 );
  }
  else if (VAR_8==4) {
     FUNC_9( (GLuint *) VAR_19, VAR_17/4 );
  }
      }
      return (GLvoid *) VAR_19;
   }
}
