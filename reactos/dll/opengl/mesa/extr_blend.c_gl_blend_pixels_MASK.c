
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* ReadColorPixels ) (TYPE_2__*,int ,int const*,int const*,int *,int *,int *,int *,int *) ;} ;
struct TYPE_8__ {int RasterMask; TYPE_1__ Driver; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int const*,int const*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int const*,int const*,int *,int *,int *,int *,int *) ;

void FUNC_3( GLcontext* VAR_2,
                      GLuint VAR_3, const GLint VAR_4[], const GLint VAR_5[],
        GLubyte VAR_6[], GLubyte VAR_7[],
        GLubyte VAR_8[], GLubyte VAR_9[],
        GLubyte VAR_10[] )
{
   GLubyte VAR_11[VAR_1], VAR_12[VAR_1], VAR_13[VAR_1], VAR_14[VAR_1];


   (*VAR_2->Driver.ReadColorPixels)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_11, VAR_12, VAR_13, VAR_14, VAR_10 );
   if (VAR_2->RasterMask & VAR_0) {
      FUNC_1( VAR_2, VAR_3, VAR_4, VAR_5, VAR_14, VAR_10 );
   }

   FUNC_0( VAR_2, VAR_3, VAR_10, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11, VAR_12, VAR_13, VAR_14 );
}
