
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Lightfv ) (TYPE_3__*,void*,void*,int const*,int) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int f; void* e; } ;
typedef TYPE_2__ Node ;
typedef int GLint ;
typedef int GLfloat ;
typedef void* GLenum ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,int const*,int) ;

void FUNC_2( GLcontext *VAR_1, GLenum VAR_2, GLenum VAR_3,
                      const GLfloat *VAR_4, GLint VAR_5 )
{
   Node *VAR_6 = FUNC_0( VAR_1, VAR_0, 6 );
   if (VAR_0) {
      GLint VAR_7;
      VAR_6[1].e = VAR_2;
      VAR_6[2].e = VAR_3;
      for (VAR_7=0;VAR_7<VAR_5;VAR_7++) {
  VAR_6[3+VAR_7].f = VAR_4[VAR_7];
      }
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.Lightfv)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );
   }
}
