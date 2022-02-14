
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ColorMaterialEnabled; } ;
struct TYPE_8__ {int * ByteColor; } ;
struct TYPE_9__ {TYPE_2__* VB; TYPE_1__ Light; TYPE_3__ Current; } ;
struct TYPE_7__ {int MonoColor; } ;
typedef int GLfloat ;
typedef TYPE_4__ GLcontext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const) ;
 int VAR_0 ;

void FUNC_2( GLcontext *VAR_1, const GLfloat *VAR_2 )
{
   FUNC_1(VAR_1->Current.ByteColor[0], VAR_2[0]);
   FUNC_1(VAR_1->Current.ByteColor[1], VAR_2[1]);
   FUNC_1(VAR_1->Current.ByteColor[2], VAR_2[2]);
   FUNC_1(VAR_1->Current.ByteColor[3], VAR_2[3]);
   FUNC_0( !VAR_1->Light.ColorMaterialEnabled );
   VAR_1->VB->MonoColor = VAR_0;
}
