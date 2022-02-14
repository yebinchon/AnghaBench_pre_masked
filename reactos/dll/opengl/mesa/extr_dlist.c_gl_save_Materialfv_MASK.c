
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Materialfv ) (TYPE_3__*,void*,void*,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int f; void* e; } ;
typedef TYPE_2__ Node ;
typedef int GLfloat ;
typedef void* GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,int const*) ;

void FUNC_2( GLcontext *VAR_1,
                         GLenum VAR_2, GLenum VAR_3, const GLfloat *VAR_4 )
{
   Node *VAR_5 = FUNC_0( VAR_1, VAR_0, 6 );
   if (VAR_5) {
      VAR_5[1].e = VAR_2;
      VAR_5[2].e = VAR_3;
      VAR_5[3].f = VAR_4[0];
      VAR_5[4].f = VAR_4[1];
      VAR_5[5].f = VAR_4[2];
      VAR_5[6].f = VAR_4[3];
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.Materialfv)( VAR_1, VAR_2, VAR_3, VAR_4 );
   }
}
