
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int LogicOp; } ;
struct TYPE_7__ {int (* ReadIndexSpan ) (TYPE_3__*,size_t,int ,int ,size_t*) ;} ;
struct TYPE_9__ {TYPE_2__ Color; TYPE_1__ Driver; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_3__ GLcontext ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*,size_t,int ,int ,size_t*) ;

void FUNC_2( GLcontext *VAR_2, GLuint VAR_3, GLint VAR_4, GLint VAR_5,
                         GLuint VAR_6[], GLubyte VAR_7[] )
{
   GLuint VAR_8[VAR_1];
   GLuint VAR_9;


   (*VAR_2->Driver.ReadIndexSpan)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8 );

   switch (VAR_2->Color.LogicOp) {
      case 140:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 129:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = 1;
     }
  }
  break;
      case 139:

  break;
      case 138:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~VAR_6[VAR_9];
     }
  }
  break;
      case 134:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = VAR_8[VAR_9];
     }
  }
  break;
      case 136:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~VAR_8[VAR_9];
     }
  }
  break;
      case 143:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] &= VAR_8[VAR_9];
     }
  }
  break;
      case 135:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~(VAR_6[VAR_9] & VAR_8[VAR_9]);
     }
  }
  break;
      case 132:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] |= VAR_8[VAR_9];
     }
  }
  break;
      case 133:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~(VAR_6[VAR_9] | VAR_8[VAR_9]);
     }
  }
  break;
      case 128:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] ^= VAR_8[VAR_9];
     }
  }
  break;
      case 137:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~(VAR_6[VAR_9] ^ VAR_8[VAR_9]);
     }
  }
  break;
      case 141:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = VAR_6[VAR_9] & ~VAR_8[VAR_9];
     }
  }
  break;
      case 142:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~VAR_6[VAR_9] & VAR_8[VAR_9];
     }
  }
  break;
      case 130:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = VAR_6[VAR_9] | ~VAR_8[VAR_9];
     }
  }
  break;
      case 131:
         for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
     if (VAR_7[VAR_9]) {
        VAR_6[VAR_9] = ~VAR_6[VAR_9] | VAR_8[VAR_9];
     }
  }
  break;
      default:
  FUNC_0( VAR_2, VAR_0, "gl_logic error" );
   }
}
