
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
struct TYPE_7__ {void** ByteColor; } ;
struct TYPE_11__ {TYPE_4__* VB; TYPE_3__ Light; TYPE_2__* Visual; TYPE_1__ Current; } ;
struct TYPE_10__ {int MonoColor; } ;
struct TYPE_8__ {int RedScale; int GreenScale; int BlueScale; int AlphaScale; } ;
typedef int GLfloat ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,float,float) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;

void FUNC_3( GLcontext *VAR_1, const GLfloat *VAR_2 )
{
   VAR_1->Current.ByteColor[0] = FUNC_2(FUNC_1(VAR_2[0], 0.0F, 1.0F) * VAR_1->Visual->RedScale);
   VAR_1->Current.ByteColor[1] = FUNC_2(FUNC_1(VAR_2[1], 0.0F, 1.0F) * VAR_1->Visual->GreenScale);
   VAR_1->Current.ByteColor[2] = FUNC_2(FUNC_1(VAR_2[2], 0.0F, 1.0F) * VAR_1->Visual->BlueScale);
   VAR_1->Current.ByteColor[3] = FUNC_2(VAR_1->Visual->AlphaScale);
   FUNC_0( !VAR_1->Light.ColorMaterialEnabled );
   VAR_1->VB->MonoColor = VAR_0;
}
