
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ZoomX; int ZoomY; } ;
struct TYPE_8__ {TYPE_2__ Pixel; TYPE_1__* Buffer; } ;
struct TYPE_6__ {int Height; int Width; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLdepth ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int *,int *,int *,int *,int *,int ) ;

void
FUNC_4( GLcontext *VAR_2,
                            GLuint VAR_3, GLint VAR_4, GLint VAR_5, const GLdepth VAR_6[],
                            const GLubyte VAR_7[], const GLubyte VAR_8[],
                            const GLubyte VAR_9[], const GLubyte VAR_10[],
                            GLint VAR_11 )
{
   GLint VAR_12;
   GLint VAR_13, VAR_14, VAR_15, VAR_16;
   GLint VAR_17, VAR_18, VAR_19;
   GLubyte VAR_20[VAR_1], VAR_21[VAR_1];
   GLubyte VAR_22[VAR_1], VAR_23[VAR_1];
   GLdepth VAR_24[VAR_1];
   GLint VAR_25 = FUNC_1( VAR_2->Buffer->Width, VAR_1 );


   VAR_12 = (GLint) FUNC_0( VAR_3 * VAR_2->Pixel.ZoomX );
   if (VAR_12==0) {
      return;
   }
   if (VAR_2->Pixel.ZoomX<0.0) {

      VAR_4 = VAR_4 - VAR_12;
   }


   VAR_15 = VAR_5-VAR_11;
   VAR_13 = VAR_11 + (GLint) (VAR_15 * VAR_2->Pixel.ZoomY);
   VAR_14 = VAR_11 + (GLint) ((VAR_15+1) * VAR_2->Pixel.ZoomY);
   if (VAR_13==VAR_14) {
      return;
   }
   else if (VAR_14<VAR_13) {
      GLint VAR_26 = VAR_14;
      VAR_14 = VAR_13;
      VAR_13 = VAR_26;
   }


   if (VAR_13<0 && VAR_14<0) {

      return;
   }
   if (VAR_13>=VAR_2->Buffer->Height && VAR_14>=VAR_2->Buffer->Height) {

      return;
   }


   VAR_19 = 0;
   if (VAR_4<0) {
      VAR_19 = -VAR_4;
      VAR_12 += VAR_4;
   }

   if (VAR_12>VAR_25) {
      VAR_12 = VAR_25;
   }
   else if (VAR_12<=0) {
      return;
   }

   FUNC_2( VAR_12 <= VAR_1 );


   if (VAR_2->Pixel.ZoomX==-1.0F) {

      for (VAR_18=0;VAR_18<VAR_12;VAR_18++) {
         VAR_17 = VAR_3 - (VAR_18+VAR_19) - 1;
         VAR_20[VAR_18] = VAR_7[VAR_17];
         VAR_21[VAR_18] = VAR_8[VAR_17];
         VAR_22[VAR_18] = VAR_9[VAR_17];
         VAR_23[VAR_18] = VAR_10[VAR_17];
         VAR_24[VAR_18] = VAR_6[VAR_17];
      }
   }
   else {
      GLfloat VAR_27 = 1.0F / VAR_2->Pixel.ZoomX;
      for (VAR_18=0;VAR_18<VAR_12;VAR_18++) {
         VAR_17 = (VAR_18+VAR_19) * VAR_27;
         if (VAR_17<0) VAR_17 = VAR_3 + VAR_17 - 1;
         VAR_20[VAR_18] = VAR_7[VAR_17];
         VAR_21[VAR_18] = VAR_8[VAR_17];
         VAR_22[VAR_18] = VAR_9[VAR_17];
         VAR_23[VAR_18] = VAR_10[VAR_17];
         VAR_24[VAR_18] = VAR_6[VAR_17];
      }
   }


   for (VAR_16=VAR_13; VAR_16<VAR_14; VAR_16++) {
      FUNC_3( VAR_2, VAR_12, VAR_4+VAR_19, VAR_16, VAR_24,
                           VAR_20, VAR_21, VAR_22, VAR_23, VAR_0 );
   }
}
