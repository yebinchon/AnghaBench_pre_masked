
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ColorMaterialBitmask; scalar_t__ ColorMaterialEnabled; } ;
struct TYPE_7__ {TYPE_1__ Light; } ;
typedef int GLuint ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;




 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int const*) ;

void FUNC_3( GLcontext *VAR_4,
                    GLenum VAR_5, GLenum VAR_6, const GLfloat *VAR_7 )
{
   GLuint VAR_8;


   if (VAR_5!=VAR_1 && VAR_5!=VAR_0 && VAR_5!=VAR_2) {
      FUNC_0( VAR_4, VAR_3, "glMaterial(face)" );
      return;
   }
   switch (VAR_6) {
      case 130:
      case 134:
      case 131:
      case 128:
      case 129:
      case 133:
      case 132:

         break;
      default:
         FUNC_0( VAR_4, VAR_3, "glMaterial(pname)" );
         return;
   }


   VAR_8 = FUNC_1( VAR_5, VAR_6 );

   if (VAR_4->Light.ColorMaterialEnabled) {


      VAR_8 &= ~VAR_4->Light.ColorMaterialBitmask;
   }

   FUNC_2( VAR_4, VAR_8, VAR_7 );
}
