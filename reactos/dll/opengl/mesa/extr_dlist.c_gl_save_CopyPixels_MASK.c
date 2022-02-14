
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* CopyPixels ) (TYPE_3__*,void*,void*,scalar_t__,scalar_t__,int ) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int e; void* i; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,scalar_t__,scalar_t__,int ) ;

void FUNC_2( GLcontext *VAR_1, GLint VAR_2, GLint VAR_3,
    GLsizei VAR_4, GLsizei VAR_5, GLenum VAR_6 )
{
   Node *VAR_7 = FUNC_0( VAR_1, VAR_0, 5 );
   if (VAR_7) {
      VAR_7[1].i = VAR_2;
      VAR_7[2].i = VAR_3;
      VAR_7[3].i = (GLint) VAR_4;
      VAR_7[4].i = (GLint) VAR_5;
      VAR_7[5].e = VAR_6;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.CopyPixels)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );
   }
}
