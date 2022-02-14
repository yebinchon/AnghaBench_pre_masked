
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ColorMaterialFace; int ColorMaterialMode; int ColorMaterialBitmask; } ;
struct TYPE_7__ {TYPE_1__ Light; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int,int) ;

void FUNC_3( GLcontext *VAR_2, GLenum VAR_3, GLenum VAR_4 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glColorMaterial" );
      return;
   }
   switch (VAR_3) {
      case 130:
      case 133:
      case 129:
         VAR_2->Light.ColorMaterialFace = VAR_3;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glColorMaterial(face)" );
         return;
   }
   switch (VAR_4) {
      case 131:
      case 135:
      case 132:
      case 128:
      case 134:
         VAR_2->Light.ColorMaterialMode = VAR_4;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glColorMaterial(mode)" );
         return;
   }

   VAR_2->Light.ColorMaterialBitmask = FUNC_2( VAR_3, VAR_4 );
}
