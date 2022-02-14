
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ FrontFace; } ;
struct TYPE_7__ {TYPE_1__ Polygon; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_4, GLenum VAR_5 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_3, "glFrontFace" );
      return;
   }
   if (VAR_5!=VAR_1 && VAR_5!=VAR_0) {
      FUNC_1( VAR_4, VAR_2, "glFrontFace" );
      return;
   }
   VAR_4->Polygon.FrontFace = VAR_5;
}
