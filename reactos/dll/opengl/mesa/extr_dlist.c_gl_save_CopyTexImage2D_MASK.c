
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* CopyTexImage2D ) (TYPE_3__*,void*,void*,void*,void*,void*,void*,void*,void*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* i; void* e; } ;
typedef TYPE_2__ Node ;
typedef void* GLsizei ;
typedef void* GLint ;
typedef void* GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,void*,void*,void*,void*,void*,void*) ;

void FUNC_2( GLcontext *VAR_1,
                             GLenum VAR_2, GLint VAR_3,
                             GLenum VAR_4,
                             GLint VAR_5, GLint VAR_6, GLsizei VAR_7,
                             GLsizei VAR_8, GLint VAR_9 )
{
   Node *VAR_10 = FUNC_0( VAR_1, VAR_0, 8 );
   if (VAR_10) {
      VAR_10[1].e = VAR_2;
      VAR_10[2].i = VAR_3;
      VAR_10[3].e = VAR_4;
      VAR_10[4].i = VAR_5;
      VAR_10[5].i = VAR_6;
      VAR_10[6].i = VAR_7;
      VAR_10[7].i = VAR_8;
      VAR_10[8].i = VAR_9;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.CopyTexImage2D)( VAR_1, VAR_2, VAR_3, VAR_4,
                            VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 );
   }
}
