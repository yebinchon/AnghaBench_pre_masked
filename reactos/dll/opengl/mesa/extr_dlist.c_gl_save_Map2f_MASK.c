
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Map2f ) (TYPE_3__*,int ,void*,void*,void*,void*,void*,void*,void*,void*,void* const*,int ) ;} ;
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
 int FUNC_1 (TYPE_3__*,int ,void*,void*,void*,void*,void*,void*,void*,void*,void* const*,int ) ;

void FUNC_2( GLcontext *VAR_2, GLenum VAR_3,
                    GLfloat VAR_4, GLfloat VAR_5, GLint VAR_6, GLint VAR_7,
                    GLfloat VAR_8, GLfloat VAR_9, GLint VAR_10, GLint VAR_11,
                    const GLfloat *VAR_12, GLboolean VAR_13 )
{
   Node *VAR_14 = FUNC_0( VAR_2, VAR_1, 10 );
   if (VAR_14) {
      VAR_14[1].e = VAR_3;
      VAR_14[2].f = VAR_4;
      VAR_14[3].f = VAR_5;
      VAR_14[4].f = VAR_8;
      VAR_14[5].f = VAR_9;
      VAR_14[6].i = VAR_6;
      VAR_14[7].i = VAR_10;
      VAR_14[8].i = VAR_7;
      VAR_14[9].i = VAR_11;
      VAR_14[10].data = (void *) VAR_12;
   }
   if (VAR_2->ExecuteFlag) {
      (*VAR_2->Exec.Map2f)( VAR_2, VAR_3,
                        VAR_4, VAR_5, VAR_6, VAR_7,
                        VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_0 );
   }
}
