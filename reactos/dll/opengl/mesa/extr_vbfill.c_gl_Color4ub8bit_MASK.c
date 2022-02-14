
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ColorMaterialEnabled; } ;
struct TYPE_6__ {int ByteColor; } ;
struct TYPE_9__ {TYPE_3__* VB; TYPE_2__ Light; TYPE_1__ Current; } ;
struct TYPE_8__ {int MonoColor; } ;
typedef int GLubyte ;
typedef TYPE_4__ GLcontext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

void FUNC_2( GLcontext *VAR_1,
                      GLubyte VAR_2, GLubyte VAR_3, GLubyte VAR_4, GLubyte VAR_5 )
{
   FUNC_1( VAR_1->Current.ByteColor, VAR_2, VAR_3, VAR_4, VAR_5 );
   FUNC_0( !VAR_1->Light.ColorMaterialEnabled );
   VAR_1->VB->MonoColor = VAR_0;
}
