
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int LogicOp; } ;
struct TYPE_10__ {int (* ReadColorPixels ) (TYPE_4__*,size_t,int const*,int const*,int*,int*,int*,int*,int*) ;} ;
struct TYPE_12__ {int RasterMask; TYPE_1__* Visual; TYPE_3__ Color; TYPE_2__ Driver; } ;
struct TYPE_9__ {int AlphaScale; int BlueScale; int GreenScale; int RedScale; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_4__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,size_t,int const*,int const*,int*,int*) ;
 int FUNC_2 (TYPE_4__*,size_t,int const*,int const*,int*,int*,int*,int*,int*) ;

void FUNC_3( GLcontext *VAR_2,
                             GLuint VAR_3, const GLint VAR_4[], const GLint VAR_5[],
                             GLubyte VAR_6[], GLubyte VAR_7[],
                             GLubyte VAR_8[], GLubyte VAR_9[],
                             GLubyte VAR_10[] )
{
   GLubyte VAR_11[VAR_1], VAR_12[VAR_1], VAR_13[VAR_1], VAR_14[VAR_1];
   GLuint VAR_15;


   (*VAR_2->Driver.ReadColorPixels)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_11, VAR_12, VAR_13, VAR_14, VAR_10 );
   if (VAR_2->RasterMask & VAR_0) {
      FUNC_1( VAR_2, VAR_3, VAR_4, VAR_5, VAR_14, VAR_10 );
   }


   switch (VAR_2->Color.LogicOp) {
      case 140:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = VAR_7[VAR_15] = VAR_8[VAR_15] = VAR_9[VAR_15] = 0;
            }
         }
         break;
      case 129:
         {
            GLubyte VAR_16 = (GLint) VAR_2->Visual->RedScale;
            GLubyte VAR_17 = (GLint) VAR_2->Visual->GreenScale;
            GLubyte VAR_18 = (GLint) VAR_2->Visual->BlueScale;
            GLubyte VAR_19 = (GLint) VAR_2->Visual->AlphaScale;
            for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
               if (VAR_10[VAR_15]) {
                  VAR_6[VAR_15] = VAR_16;
                  VAR_7[VAR_15] = VAR_17;
                  VAR_8[VAR_15] = VAR_18;
                  VAR_9[VAR_15] = VAR_19;
               }
            }
         }
         break;
      case 139:

         break;
      case 138:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~VAR_6[VAR_15];
               VAR_7[VAR_15] = ~VAR_7[VAR_15];
               VAR_8[VAR_15] = ~VAR_8[VAR_15];
               VAR_9[VAR_15] = ~VAR_9[VAR_15];
            }
         }
         break;
      case 134:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = VAR_11[VAR_15];
               VAR_7[VAR_15] = VAR_12[VAR_15];
               VAR_8[VAR_15] = VAR_13[VAR_15];
               VAR_9[VAR_15] = VAR_14[VAR_15];
            }
         }
         break;
      case 136:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~VAR_11[VAR_15];
               VAR_7[VAR_15] = ~VAR_12[VAR_15];
               VAR_8[VAR_15] = ~VAR_13[VAR_15];
               VAR_9[VAR_15] = ~VAR_14[VAR_15];
            }
         }
         break;
      case 143:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] &= VAR_11[VAR_15];
               VAR_7[VAR_15] &= VAR_12[VAR_15];
               VAR_8[VAR_15] &= VAR_13[VAR_15];
               VAR_9[VAR_15] &= VAR_14[VAR_15];
            }
         }
         break;
      case 135:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~(VAR_6[VAR_15] & VAR_11[VAR_15]);
               VAR_7[VAR_15] = ~(VAR_7[VAR_15] & VAR_12[VAR_15]);
               VAR_8[VAR_15] = ~(VAR_8[VAR_15] & VAR_13[VAR_15]);
               VAR_9[VAR_15] = ~(VAR_9[VAR_15] & VAR_14[VAR_15]);
            }
         }
         break;
      case 132:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] |= VAR_11[VAR_15];
               VAR_7[VAR_15] |= VAR_12[VAR_15];
               VAR_8[VAR_15] |= VAR_13[VAR_15];
               VAR_9[VAR_15] |= VAR_14[VAR_15];
            }
         }
         break;
      case 133:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~(VAR_6[VAR_15] | VAR_11[VAR_15]);
               VAR_7[VAR_15] = ~(VAR_7[VAR_15] | VAR_12[VAR_15]);
               VAR_8[VAR_15] = ~(VAR_8[VAR_15] | VAR_13[VAR_15]);
               VAR_9[VAR_15] = ~(VAR_9[VAR_15] | VAR_14[VAR_15]);
            }
         }
         break;
      case 128:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] ^= VAR_11[VAR_15];
               VAR_7[VAR_15] ^= VAR_12[VAR_15];
               VAR_8[VAR_15] ^= VAR_13[VAR_15];
               VAR_9[VAR_15] ^= VAR_14[VAR_15];
            }
         }
         break;
      case 137:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~(VAR_6[VAR_15] ^ VAR_11[VAR_15]);
               VAR_7[VAR_15] = ~(VAR_7[VAR_15] ^ VAR_12[VAR_15]);
               VAR_8[VAR_15] = ~(VAR_8[VAR_15] ^ VAR_13[VAR_15]);
               VAR_9[VAR_15] = ~(VAR_9[VAR_15] ^ VAR_14[VAR_15]);
            }
         }
         break;
      case 141:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = VAR_6[VAR_15] & ~VAR_11[VAR_15];
               VAR_7[VAR_15] = VAR_7[VAR_15] & ~VAR_12[VAR_15];
               VAR_8[VAR_15] = VAR_8[VAR_15] & ~VAR_13[VAR_15];
               VAR_9[VAR_15] = VAR_9[VAR_15] & ~VAR_14[VAR_15];
            }
         }
         break;
      case 142:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~VAR_6[VAR_15] & VAR_11[VAR_15];
               VAR_7[VAR_15] = ~VAR_7[VAR_15] & VAR_12[VAR_15];
               VAR_8[VAR_15] = ~VAR_8[VAR_15] & VAR_13[VAR_15];
               VAR_9[VAR_15] = ~VAR_9[VAR_15] & VAR_14[VAR_15];
            }
         }
         break;
      case 130:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = VAR_6[VAR_15] | ~VAR_11[VAR_15];
               VAR_7[VAR_15] = VAR_7[VAR_15] | ~VAR_12[VAR_15];
               VAR_8[VAR_15] = VAR_8[VAR_15] | ~VAR_13[VAR_15];
               VAR_9[VAR_15] = VAR_9[VAR_15] | ~VAR_14[VAR_15];
            }
         }
         break;
      case 131:
         for (VAR_15=0;VAR_15<VAR_3;VAR_15++) {
            if (VAR_10[VAR_15]) {
               VAR_6[VAR_15] = ~VAR_6[VAR_15] | VAR_11[VAR_15];
               VAR_7[VAR_15] = ~VAR_7[VAR_15] | VAR_12[VAR_15];
               VAR_8[VAR_15] = ~VAR_8[VAR_15] | VAR_13[VAR_15];
               VAR_9[VAR_15] = ~VAR_9[VAR_15] | VAR_14[VAR_15];
            }
         }
         break;
      default:

         FUNC_0(VAR_2, "Bad function in gl_logicop_rgba_pixels");
         return;
   }
}
