
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Color4ubv; int Color4ub; int Color4fv; int Color4f; int Color3fv; int Color3f; } ;
struct TYPE_10__ {int Color4ubv; int Color4ub; int Color4fv; int Color4f; int Color3fv; int Color3f; } ;
struct TYPE_8__ {scalar_t__ ColorMaterialEnabled; } ;
struct TYPE_12__ {TYPE_4__ Exec; TYPE_3__ API; int CompileFlag; TYPE_2__* Visual; TYPE_1__ Light; } ;
struct TYPE_9__ {scalar_t__ EightBitColor; } ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_2( GLcontext *VAR_18 )
{
   FUNC_0( !FUNC_1(VAR_18) );

   if (VAR_18->Light.ColorMaterialEnabled) {
      VAR_18->Exec.Color3f = VAR_12;
      VAR_18->Exec.Color3fv = VAR_13;
      VAR_18->Exec.Color4f = VAR_14;
      VAR_18->Exec.Color4fv = VAR_15;
      VAR_18->Exec.Color4ub = VAR_16;
      VAR_18->Exec.Color4ubv = VAR_17;
   }
   else if (VAR_18->Visual->EightBitColor) {
      VAR_18->Exec.Color3f = VAR_1;
      VAR_18->Exec.Color3fv = VAR_3;
      VAR_18->Exec.Color4f = VAR_5;
      VAR_18->Exec.Color4fv = VAR_7;
      VAR_18->Exec.Color4ub = VAR_9;
      VAR_18->Exec.Color4ubv = VAR_11;
   }
   else {
      VAR_18->Exec.Color3f = VAR_0;
      VAR_18->Exec.Color3fv = VAR_2;
      VAR_18->Exec.Color4f = VAR_4;
      VAR_18->Exec.Color4fv = VAR_6;
      VAR_18->Exec.Color4ub = VAR_8;
      VAR_18->Exec.Color4ubv = VAR_10;
   }
   if (!VAR_18->CompileFlag) {
      VAR_18->API.Color3f = VAR_18->Exec.Color3f;
      VAR_18->API.Color3fv = VAR_18->Exec.Color3fv;
      VAR_18->API.Color4f = VAR_18->Exec.Color4f;
      VAR_18->API.Color4fv = VAR_18->Exec.Color4fv;
      VAR_18->API.Color4ub = VAR_18->Exec.Color4ub;
      VAR_18->API.Color4ubv = VAR_18->Exec.Color4ubv;
   }
}
