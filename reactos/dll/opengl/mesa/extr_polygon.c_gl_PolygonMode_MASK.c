
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ FrontMode; scalar_t__ BackMode; int Unfilled; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Polygon; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_11, GLenum VAR_12, GLenum VAR_13 )
{
   if (FUNC_0(VAR_11)) {
      FUNC_1( VAR_11, VAR_6, "glPolygonMode" );
      return;
   }
   if (VAR_12!=VAR_3 && VAR_12!=VAR_0 && VAR_12!=VAR_4) {
      FUNC_1( VAR_11, VAR_5, "glPolygonMode(face)" );
      return;
   }
   else if (VAR_13!=VAR_8 && VAR_13!=VAR_7 && VAR_13!=VAR_2) {
      FUNC_1( VAR_11, VAR_5, "glPolygonMode(mode)" );
      return;
   }

   if (VAR_12==VAR_3 || VAR_12==VAR_4) {
      VAR_11->Polygon.FrontMode = VAR_13;
   }
   if (VAR_12==VAR_0 || VAR_12==VAR_4) {
      VAR_11->Polygon.BackMode = VAR_13;
   }


   if (VAR_11->Polygon.FrontMode!=VAR_2 || VAR_11->Polygon.BackMode!=VAR_2) {
      VAR_11->Polygon.Unfilled = VAR_9;
   }
   else {
      VAR_11->Polygon.Unfilled = VAR_1;
   }

   VAR_11->NewState |= VAR_10;
}
