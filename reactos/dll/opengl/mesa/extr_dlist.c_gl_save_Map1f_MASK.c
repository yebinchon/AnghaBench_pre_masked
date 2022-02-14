
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Map1f ) (TYPE_3__*,int ,void*,void*,void*,void*,void* const*,int ) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* data; void* i; void* f; int e; } ;
typedef TYPE_2__ Node ;
typedef void* GLint ;
typedef void* GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,void*,void*,void*,void*,void* const*,int ) ;

void FUNC_2( GLcontext *VAR_2,
                   GLenum VAR_3, GLfloat VAR_4, GLfloat VAR_5, GLint VAR_6,
     GLint VAR_7, const GLfloat *VAR_8, GLboolean VAR_9 )
{
   Node *VAR_10 = FUNC_0( VAR_2, VAR_1, 6 );
   if (VAR_10) {
      VAR_10[1].e = VAR_3;
      VAR_10[2].f = VAR_4;
      VAR_10[3].f = VAR_5;
      VAR_10[4].i = VAR_6;
      VAR_10[5].i = VAR_7;
      VAR_10[6].data = (void *) VAR_8;
   }
   if (VAR_2->ExecuteFlag) {
      (*VAR_2->Exec.Map1f)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0 );
   }
}
