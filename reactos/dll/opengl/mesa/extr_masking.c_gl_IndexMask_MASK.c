
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int IndexMask; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Color; } ;
typedef int GLuint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, GLuint VAR_3 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glIndexMask" );
      return;
   }
   VAR_2->Color.IndexMask = VAR_3;
   VAR_2->NewState |= VAR_1;
}
