
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_image {int dummy; } ;
struct TYPE_8__ {int (* Bitmap ) (TYPE_3__*,scalar_t__,scalar_t__,void*,void*,void*,void*,struct gl_image const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* data; void* f; void* i; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef void* GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__,void*,void*,void*,void*,struct gl_image const*) ;

void FUNC_2( GLcontext *VAR_1,
                     GLsizei VAR_2, GLsizei VAR_3,
       GLfloat VAR_4, GLfloat VAR_5,
       GLfloat VAR_6, GLfloat VAR_7,
       const struct gl_image *VAR_8 )
{
   Node *VAR_9 = FUNC_0( VAR_1, VAR_0, 7 );
   if (VAR_9) {
      VAR_9[1].i = (GLint) VAR_2;
      VAR_9[2].i = (GLint) VAR_3;
      VAR_9[3].f = VAR_4;
      VAR_9[4].f = VAR_5;
      VAR_9[5].f = VAR_6;
      VAR_9[6].f = VAR_7;
      VAR_9[7].data = (void *) VAR_8;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.Bitmap)( VAR_1, VAR_2, VAR_3,
                    VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 );
   }
}
