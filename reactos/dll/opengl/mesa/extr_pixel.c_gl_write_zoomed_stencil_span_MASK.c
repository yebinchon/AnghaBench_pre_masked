
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
typedef TYPE_3__ GLcontext ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int *) ;

void
FUNC_4( GLcontext *VAR_1,
                              GLuint VAR_2, GLint VAR_3, GLint VAR_4,
                              const GLubyte VAR_5[], GLint VAR_6 )
{
   GLint VAR_7;
   GLint VAR_8, VAR_9, VAR_10, VAR_11;
   GLint VAR_12, VAR_13, VAR_14;
   GLubyte VAR_15[VAR_0];
   GLint VAR_16 = FUNC_1( VAR_1->Buffer->Width, VAR_0 );


   VAR_7 = (GLint) FUNC_0( VAR_2 * VAR_1->Pixel.ZoomX );
   if (VAR_7==0) {
      return;
   }
   if (VAR_1->Pixel.ZoomX<0.0) {

      VAR_3 = VAR_3 - VAR_7;
   }


   VAR_10 = VAR_4-VAR_6;
   VAR_8 = VAR_6 + (GLint) (VAR_10 * VAR_1->Pixel.ZoomY);
   VAR_9 = VAR_6 + (GLint) ((VAR_10+1) * VAR_1->Pixel.ZoomY);
   if (VAR_8==VAR_9) {
      return;
   }
   else if (VAR_9<VAR_8) {
      GLint VAR_17 = VAR_9;
      VAR_9 = VAR_8;
      VAR_8 = VAR_17;
   }


   if (VAR_8<0 && VAR_9<0) {

      return;
   }
   if (VAR_8>=VAR_1->Buffer->Height && VAR_9>=VAR_1->Buffer->Height) {

      return;
   }


   VAR_14 = 0;
   if (VAR_3<0) {
      VAR_14 = -VAR_3;
      VAR_7 += VAR_3;
   }

   if (VAR_7>VAR_16) {
      VAR_7 = VAR_16;
   }
   else if (VAR_7<=0) {
      return;
   }

   FUNC_2( VAR_7 <= VAR_0 );


   if (VAR_1->Pixel.ZoomX==-1.0F) {

      for (VAR_13=0;VAR_13<VAR_7;VAR_13++) {
         VAR_12 = VAR_2 - (VAR_13+VAR_14) - 1;
         VAR_15[VAR_13] = VAR_5[VAR_12];
      }
   }
   else {
      GLfloat VAR_18 = 1.0F / VAR_1->Pixel.ZoomX;
      for (VAR_13=0;VAR_13<VAR_7;VAR_13++) {
         VAR_12 = (VAR_13+VAR_14) * VAR_18;
         if (VAR_12<0) VAR_12 = VAR_2 + VAR_12 - 1;
         VAR_15[VAR_13] = VAR_5[VAR_12];
      }
   }


   for (VAR_11=VAR_8; VAR_11<VAR_9; VAR_11++) {
      FUNC_3( VAR_1, VAR_7, VAR_3+VAR_14, VAR_11, VAR_15 );
   }
}
