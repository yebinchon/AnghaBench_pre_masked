
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* PixelMapfv ) (TYPE_3__*,int ,int,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int i; void* data; int e; } ;
typedef TYPE_2__ Node ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (void*,void*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int,int const*) ;

void FUNC_4( GLcontext *VAR_1,
                         GLenum VAR_2, GLint VAR_3, const GLfloat *VAR_4 )
{
   Node *VAR_5 = FUNC_1( VAR_1, VAR_0, 3 );
   if (VAR_5) {
      VAR_5[1].e = VAR_2;
      VAR_5[2].i = VAR_3;
      VAR_5[3].data = (void *) FUNC_2( VAR_3 * sizeof(GLfloat) );
      FUNC_0( VAR_5[3].data, (void *) VAR_4, VAR_3 * sizeof(GLfloat) );
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.PixelMapfv)( VAR_1, VAR_2, VAR_3, VAR_4 );
   }
}
