
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int LogicOp; } ;
struct TYPE_9__ {TYPE_2__* Visual; TYPE_1__ Color; } ;
struct TYPE_8__ {int AlphaScale; int BlueScale; int GreenScale; int RedScale; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_3__ GLcontext ;
 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,size_t,int,int,int*,int*,int*,int*) ;

void FUNC_2( GLcontext *VAR_1,
                           GLuint VAR_2, GLint VAR_3, GLint VAR_4,
                           GLubyte VAR_5[], GLubyte VAR_6[],
                           GLubyte VAR_7[], GLubyte VAR_8[],
                           GLubyte VAR_9[] )
{
   GLubyte VAR_10[VAR_0], VAR_11[VAR_0];
   GLubyte VAR_12[VAR_0], VAR_13[VAR_0];
   GLuint VAR_14;


   FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_10, VAR_11, VAR_12, VAR_13 );


   switch (VAR_1->Color.LogicOp) {
      case 140:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = VAR_6[VAR_14] = VAR_7[VAR_14] = VAR_8[VAR_14] = 0;
            }
         }
         break;
      case 129:
         {
            GLubyte VAR_15 = (GLint) VAR_1->Visual->RedScale;
            GLubyte VAR_16 = (GLint) VAR_1->Visual->GreenScale;
            GLubyte VAR_17 = (GLint) VAR_1->Visual->BlueScale;
            GLubyte VAR_18 = (GLint) VAR_1->Visual->AlphaScale;
            for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
               if (VAR_9[VAR_14]) {
                  VAR_5[VAR_14] = VAR_15;
                  VAR_6[VAR_14] = VAR_16;
                  VAR_7[VAR_14] = VAR_17;
                  VAR_8[VAR_14] = VAR_18;
               }
            }
         }
         break;
      case 139:

         break;
      case 138:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~VAR_5[VAR_14];
               VAR_6[VAR_14] = ~VAR_6[VAR_14];
               VAR_7[VAR_14] = ~VAR_7[VAR_14];
               VAR_8[VAR_14] = ~VAR_8[VAR_14];
            }
         }
         break;
      case 134:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = VAR_10[VAR_14];
               VAR_6[VAR_14] = VAR_11[VAR_14];
               VAR_7[VAR_14] = VAR_12[VAR_14];
               VAR_8[VAR_14] = VAR_13[VAR_14];
            }
         }
         break;
      case 136:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~VAR_10[VAR_14];
               VAR_6[VAR_14] = ~VAR_11[VAR_14];
               VAR_7[VAR_14] = ~VAR_12[VAR_14];
               VAR_8[VAR_14] = ~VAR_13[VAR_14];
            }
         }
         break;
      case 143:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] &= VAR_10[VAR_14];
               VAR_6[VAR_14] &= VAR_11[VAR_14];
               VAR_7[VAR_14] &= VAR_12[VAR_14];
               VAR_8[VAR_14] &= VAR_13[VAR_14];
            }
         }
         break;
      case 135:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~(VAR_5[VAR_14] & VAR_10[VAR_14]);
               VAR_6[VAR_14] = ~(VAR_6[VAR_14] & VAR_11[VAR_14]);
               VAR_7[VAR_14] = ~(VAR_7[VAR_14] & VAR_12[VAR_14]);
               VAR_8[VAR_14] = ~(VAR_8[VAR_14] & VAR_13[VAR_14]);
            }
         }
         break;
      case 132:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] |= VAR_10[VAR_14];
               VAR_6[VAR_14] |= VAR_11[VAR_14];
               VAR_7[VAR_14] |= VAR_12[VAR_14];
               VAR_8[VAR_14] |= VAR_13[VAR_14];
            }
         }
         break;
      case 133:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~(VAR_5[VAR_14] | VAR_10[VAR_14]);
               VAR_6[VAR_14] = ~(VAR_6[VAR_14] | VAR_11[VAR_14]);
               VAR_7[VAR_14] = ~(VAR_7[VAR_14] | VAR_12[VAR_14]);
               VAR_8[VAR_14] = ~(VAR_8[VAR_14] | VAR_13[VAR_14]);
            }
         }
         break;
      case 128:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] ^= VAR_10[VAR_14];
               VAR_6[VAR_14] ^= VAR_11[VAR_14];
               VAR_7[VAR_14] ^= VAR_12[VAR_14];
               VAR_8[VAR_14] ^= VAR_13[VAR_14];
            }
         }
         break;
      case 137:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~(VAR_5[VAR_14] ^ VAR_10[VAR_14]);
               VAR_6[VAR_14] = ~(VAR_6[VAR_14] ^ VAR_11[VAR_14]);
               VAR_7[VAR_14] = ~(VAR_7[VAR_14] ^ VAR_12[VAR_14]);
               VAR_8[VAR_14] = ~(VAR_8[VAR_14] ^ VAR_13[VAR_14]);
            }
         }
         break;
      case 141:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = VAR_5[VAR_14] & ~VAR_10[VAR_14];
               VAR_6[VAR_14] = VAR_6[VAR_14] & ~VAR_11[VAR_14];
               VAR_7[VAR_14] = VAR_7[VAR_14] & ~VAR_12[VAR_14];
               VAR_8[VAR_14] = VAR_8[VAR_14] & ~VAR_13[VAR_14];
            }
         }
         break;
      case 142:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~VAR_5[VAR_14] & VAR_10[VAR_14];
               VAR_6[VAR_14] = ~VAR_6[VAR_14] & VAR_11[VAR_14];
               VAR_7[VAR_14] = ~VAR_7[VAR_14] & VAR_12[VAR_14];
               VAR_8[VAR_14] = ~VAR_8[VAR_14] & VAR_13[VAR_14];
            }
         }
         break;
      case 130:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = VAR_5[VAR_14] | ~VAR_10[VAR_14];
               VAR_6[VAR_14] = VAR_6[VAR_14] | ~VAR_11[VAR_14];
               VAR_7[VAR_14] = VAR_7[VAR_14] | ~VAR_12[VAR_14];
               VAR_8[VAR_14] = VAR_8[VAR_14] | ~VAR_13[VAR_14];
            }
         }
         break;
      case 131:
         for (VAR_14=0;VAR_14<VAR_2;VAR_14++) {
            if (VAR_9[VAR_14]) {
               VAR_5[VAR_14] = ~VAR_5[VAR_14] | VAR_10[VAR_14];
               VAR_6[VAR_14] = ~VAR_6[VAR_14] | VAR_11[VAR_14];
               VAR_7[VAR_14] = ~VAR_7[VAR_14] | VAR_12[VAR_14];
               VAR_8[VAR_14] = ~VAR_8[VAR_14] | VAR_13[VAR_14];
            }
         }
         break;
      default:

         FUNC_0(VAR_1, "Bad function in gl_logicop_rgba_span");
         return;
   }
}
