
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Viewport ) (TYPE_3__*,void*,void*,scalar_t__,scalar_t__) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* i; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,scalar_t__,scalar_t__) ;

void FUNC_2( GLcontext *VAR_1,
                       GLint VAR_2, GLint VAR_3, GLsizei VAR_4, GLsizei VAR_5 )
{
   Node *VAR_6 = FUNC_0( VAR_1, VAR_0, 4 );
   if (VAR_6) {
      VAR_6[1].i = VAR_2;
      VAR_6[2].i = VAR_3;
      VAR_6[3].i = (GLint) VAR_4;
      VAR_6[4].i = (GLint) VAR_5;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.Viewport)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );
   }
}
