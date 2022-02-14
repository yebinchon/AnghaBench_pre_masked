
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X; scalar_t__ Y; scalar_t__ Width; scalar_t__ Height; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Scissor; } ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_3,
                 GLint VAR_4, GLint VAR_5, GLsizei VAR_6, GLsizei VAR_7 )
{
   if (VAR_6<0 || VAR_7<0) {
      FUNC_1( VAR_3, VAR_1, "glScissor" );
      return;
   }
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_0, "glBegin" );
      return;
   }

   if (VAR_4!=VAR_3->Scissor.X || VAR_5!=VAR_3->Scissor.Y ||
       VAR_6!=VAR_3->Scissor.Width || VAR_7!=VAR_3->Scissor.Height) {
      VAR_3->Scissor.X = VAR_4;
      VAR_3->Scissor.Y = VAR_5;
      VAR_3->Scissor.Width = VAR_6;
      VAR_3->Scissor.Height = VAR_7;
      VAR_3->NewState |= VAR_2;
   }
}
