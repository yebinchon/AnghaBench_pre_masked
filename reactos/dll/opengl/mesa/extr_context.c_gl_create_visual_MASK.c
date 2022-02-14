
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double RedScale; double GreenScale; double BlueScale; double AlphaScale; float InvRedScale; float InvGreenScale; float InvBlueScale; float InvAlphaScale; int RedBits; int GreenBits; int BlueBits; int AlphaBits; int IndexBits; int DepthBits; int AccumBits; int StencilBits; void* BackAlphaEnabled; void* FrontAlphaEnabled; void* EightBitColor; void* DBflag; void* RGBAflag; } ;
typedef TYPE_1__ GLvisual ;
typedef int GLubyte ;
typedef int GLstencil ;
typedef int GLint ;
typedef double GLfloat ;
typedef int GLdepth ;
typedef void* GLboolean ;
typedef int GLaccum ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;

GLvisual *FUNC_2( GLboolean VAR_2,
                            GLboolean VAR_3,
                            GLboolean VAR_4,
                            GLint VAR_5,
                            GLint VAR_6,
                            GLint VAR_7,
                            GLint VAR_8,
                            GLfloat VAR_9,
                            GLfloat VAR_10,
                            GLfloat VAR_11,
                            GLfloat VAR_12,
                            GLint VAR_13,
                            GLint VAR_14,
                            GLint VAR_15,
                            GLint VAR_16 )
{
   GLvisual *VAR_17;


   FUNC_0( VAR_9<=255.0 );
   FUNC_0( VAR_10<=255.0 );
   FUNC_0( VAR_11<=255.0 );
   FUNC_0( VAR_12<=255.0 );

   if (VAR_5 > 8*sizeof(GLdepth)) {

      return ((void*)0);
   }
   if (VAR_6 > 8*sizeof(GLstencil)) {

      return ((void*)0);
   }
   if (VAR_7 > 8*sizeof(GLaccum)) {

      return ((void*)0);
   }

   VAR_17 = (GLvisual *) FUNC_1( 1, sizeof(GLvisual) );
   if (!VAR_17) {
      return ((void*)0);
   }

   VAR_17->RGBAflag = VAR_2;
   VAR_17->DBflag = VAR_4;
   VAR_17->RedScale = VAR_9;
   VAR_17->GreenScale = VAR_10;
   VAR_17->BlueScale = VAR_11;
   VAR_17->AlphaScale = VAR_12;
   if (VAR_9) {
      VAR_17->InvRedScale = 1.0F / VAR_9;
   }
   if (VAR_10) {
      VAR_17->InvGreenScale = 1.0F / VAR_10;
   }
   if (VAR_11) {
      VAR_17->InvBlueScale = 1.0F / VAR_11;
   }
   if (VAR_12) {
      VAR_17->InvAlphaScale = 1.0F / VAR_12;
   }

   VAR_17->RedBits = VAR_13;
   VAR_17->GreenBits = VAR_14;
   VAR_17->BlueBits = VAR_15;
   VAR_17->AlphaBits = VAR_3 ? 8*sizeof(GLubyte) : VAR_16;

   VAR_17->IndexBits = VAR_8;
   VAR_17->DepthBits = (VAR_5>0) ? 8*sizeof(GLdepth) : 0;
   VAR_17->AccumBits = (VAR_7>0) ? 8*sizeof(GLaccum) : 0;
   VAR_17->StencilBits = (VAR_6>0) ? 8*sizeof(GLstencil) : 0;

   if (VAR_9==255.0F && VAR_10==255.0F
       && VAR_11==255.0F && VAR_12==255.0F) {
      VAR_17->EightBitColor = VAR_1;
   }
   else {
      VAR_17->EightBitColor = VAR_0;
   }


   if (VAR_3) {
      VAR_17->FrontAlphaEnabled = VAR_1;
      if (VAR_4) {
         VAR_17->BackAlphaEnabled = VAR_1;
      }
   }

   return VAR_17;
}
