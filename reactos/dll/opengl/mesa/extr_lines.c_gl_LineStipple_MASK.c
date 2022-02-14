
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int StipplePattern; int StippleFactor; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Line; } ;
typedef int GLushort ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_2, GLint VAR_3, GLushort VAR_4 )
{
   if (FUNC_1(VAR_2)) {
      FUNC_2( VAR_2, VAR_0, "glLineStipple" );
      return;
   }
   VAR_2->Line.StippleFactor = FUNC_0( VAR_3, 1, 256 );
   VAR_2->Line.StipplePattern = VAR_4;
   VAR_2->NewState |= VAR_1;
}
