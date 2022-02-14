
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ColorMask; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Color; } ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, GLboolean VAR_3, GLboolean VAR_4,
                   GLboolean VAR_5, GLboolean VAR_6 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glColorMask" );
      return;
   }
   VAR_2->Color.ColorMask = (VAR_3 << 3) | (VAR_4 << 2) | (VAR_5 << 1) | VAR_6;
   VAR_2->NewState |= VAR_1;
}
