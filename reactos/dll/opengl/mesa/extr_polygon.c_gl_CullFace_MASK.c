
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ CullFaceMode; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Polygon; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_6, GLenum VAR_7 )
{
   if (VAR_7!=VAR_1 && VAR_7!=VAR_0 && VAR_7!=VAR_2) {
      FUNC_1( VAR_6, VAR_3, "glCullFace" );
      return;
   }
   if (FUNC_0(VAR_6)) {
      FUNC_1( VAR_6, VAR_4, "glCullFace" );
      return;
   }
   VAR_6->Polygon.CullFaceMode = VAR_7;
   VAR_6->NewState |= VAR_5;
}
