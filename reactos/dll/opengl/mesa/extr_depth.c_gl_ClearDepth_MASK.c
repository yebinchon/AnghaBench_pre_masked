
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Clear; } ;
struct TYPE_7__ {TYPE_1__ Depth; } ;
typedef scalar_t__ GLfloat ;
typedef TYPE_2__ GLcontext ;
typedef int GLclampd ;


 scalar_t__ FUNC_0 (int ,double,double) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext* VAR_1, GLclampd VAR_2 )
{
   if (FUNC_1(VAR_1)) {
      FUNC_2( VAR_1, VAR_0, "glClearDepth" );
      return;
   }
   VAR_1->Depth.Clear = (GLfloat) FUNC_0( VAR_2, 0.0, 1.0 );
}
