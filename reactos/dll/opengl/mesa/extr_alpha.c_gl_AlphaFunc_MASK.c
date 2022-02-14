
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int AlphaFunc; int AlphaRef; int AlphaRefUbyte; } ;
struct TYPE_9__ {TYPE_1__* Visual; TYPE_2__ Color; } ;
struct TYPE_7__ {int AlphaScale; } ;
typedef int GLubyte ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;
typedef int GLclampf ;


 int FUNC_0 (int ,float,float) ;




 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

void FUNC_3( GLcontext* VAR_2, GLenum VAR_3, GLclampf VAR_4 )
{
   if (FUNC_1(VAR_2)) {
      FUNC_2( VAR_2, VAR_1, "glAlphaFunc" );
      return;
   }
   switch (VAR_3) {
      case 129:
      case 130:
      case 134:
      case 131:
      case 132:
      case 128:
      case 133:
      case 135:
         VAR_2->Color.AlphaFunc = VAR_3;
         VAR_2->Color.AlphaRef = FUNC_0( VAR_4, 0.0F, 1.0F );
         VAR_2->Color.AlphaRefUbyte = (GLubyte) (VAR_2->Color.AlphaRef
                                              * VAR_2->Visual->AlphaScale);
         break;
      default:
         FUNC_2( VAR_2, VAR_0, "glAlphaFunc(func)" );
         break;
   }
}
