
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ColorMaterialEnabled; } ;
struct TYPE_7__ {float* ByteColor; } ;
struct TYPE_11__ {TYPE_4__* VB; TYPE_3__ Light; TYPE_2__* Visual; TYPE_1__ Current; } ;
struct TYPE_10__ {int MonoColor; } ;
struct TYPE_8__ {float RedScale; float GreenScale; float BlueScale; float AlphaScale; } ;
typedef float GLubyte ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1( GLcontext *VAR_1,
                  GLubyte VAR_2, GLubyte VAR_3, GLubyte VAR_4, GLubyte VAR_5 )
{
   VAR_1->Current.ByteColor[0] = VAR_2 * VAR_1->Visual->RedScale * (1.0F/255.0F);
   VAR_1->Current.ByteColor[1] = VAR_3 * VAR_1->Visual->GreenScale * (1.0F/255.0F);
   VAR_1->Current.ByteColor[2] = VAR_4 * VAR_1->Visual->BlueScale * (1.0F/255.0F);
   VAR_1->Current.ByteColor[3] = VAR_5 * VAR_1->Visual->AlphaScale * (1.0F/255.0F);
   FUNC_0( !VAR_1->Light.ColorMaterialEnabled );
   VAR_1->VB->MonoColor = VAR_0;
}
