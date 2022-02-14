
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
typedef int GLint ;
typedef int GLfloat ;
typedef int GLdepth ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int *,int*,int ) ;

void
FUNC_4( GLcontext *VAR_2,
                            GLuint VAR_3, GLint VAR_4, GLint VAR_5, const GLdepth VAR_6[],
                            const GLuint VAR_7[], GLint VAR_8 )
{
   GLint VAR_9;
   GLint VAR_10, VAR_11, VAR_12, VAR_13;
   GLint VAR_14, VAR_15, VAR_16;
   GLuint VAR_17[VAR_1];
   GLdepth VAR_18[VAR_1];
   GLint VAR_19 = FUNC_1( VAR_2->Buffer->Width, VAR_1 );


   VAR_9 = (GLint) FUNC_0( VAR_3 * VAR_2->Pixel.ZoomX );
   if (VAR_9==0) {
      return;
   }
   if (VAR_2->Pixel.ZoomX<0.0) {

      VAR_4 = VAR_4 - VAR_9;
   }


   VAR_12 = VAR_5-VAR_8;
   VAR_10 = VAR_8 + (GLint) (VAR_12 * VAR_2->Pixel.ZoomY);
   VAR_11 = VAR_8 + (GLint) ((VAR_12+1) * VAR_2->Pixel.ZoomY);
   if (VAR_10==VAR_11) {
      return;
   }
   else if (VAR_11<VAR_10) {
      GLint VAR_20 = VAR_11;
      VAR_11 = VAR_10;
      VAR_10 = VAR_20;
   }


   if (VAR_10<0 && VAR_11<0) {

      return;
   }
   if (VAR_10>=VAR_2->Buffer->Height && VAR_11>=VAR_2->Buffer->Height) {

      return;
   }


   VAR_16 = 0;
   if (VAR_4<0) {
      VAR_16 = -VAR_4;
      VAR_9 += VAR_4;
   }

   if (VAR_9>VAR_19) {
      VAR_9 = VAR_19;
   }
   else if (VAR_9<=0) {
      return;
   }

   FUNC_2( VAR_9 <= VAR_1 );


   if (VAR_2->Pixel.ZoomX==-1.0F) {

      for (VAR_15=0;VAR_15<VAR_9;VAR_15++) {
         VAR_14 = VAR_3 - (VAR_15+VAR_16) - 1;
         VAR_17[VAR_15] = VAR_7[VAR_14];
         VAR_18[VAR_15] = VAR_6[VAR_14];
      }
   }
   else {
      GLfloat VAR_21 = 1.0F / VAR_2->Pixel.ZoomX;
      for (VAR_15=0;VAR_15<VAR_9;VAR_15++) {
         VAR_14 = (VAR_15+VAR_16) * VAR_21;
         if (VAR_14<0) VAR_14 = VAR_3 + VAR_14 - 1;
         VAR_17[VAR_15] = VAR_7[VAR_14];
         VAR_18[VAR_15] = VAR_6[VAR_14];
      }
   }


   for (VAR_13=VAR_10; VAR_13<VAR_11; VAR_13++) {
      FUNC_3( VAR_2, VAR_9, VAR_4+VAR_16, VAR_13, VAR_18, VAR_17, VAR_0 );
   }
}
