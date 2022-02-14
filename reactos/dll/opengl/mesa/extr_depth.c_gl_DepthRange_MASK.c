
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double Near; double Far; double Sz; double Tz; } ;
struct TYPE_7__ {TYPE_1__ Viewport; } ;
typedef double GLfloat ;
typedef TYPE_2__ GLcontext ;
typedef int GLclampd ;


 scalar_t__ FUNC_0 (int ,double,double) ;
 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext* VAR_2, GLclampd VAR_3, GLclampd VAR_4 )
{
   GLfloat VAR_5, VAR_6;

   if (FUNC_1(VAR_2)) {
      FUNC_2( VAR_2, VAR_1, "glDepthRange" );
      return;
   }

   VAR_5 = (GLfloat) FUNC_0( VAR_3, 0.0, 1.0 );
   VAR_6 = (GLfloat) FUNC_0( VAR_4, 0.0, 1.0 );

   VAR_2->Viewport.Near = VAR_5;
   VAR_2->Viewport.Far = VAR_6;
   VAR_2->Viewport.Sz = VAR_0 * ((VAR_6 - VAR_5) / 2.0);
   VAR_2->Viewport.Tz = VAR_0 * ((VAR_6 - VAR_5) / 2.0 + VAR_5);
}
