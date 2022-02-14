
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* BindTexture ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int ui; int e; } ;
typedef TYPE_2__ Node ;
typedef int GLuint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

void FUNC_2( GLcontext *VAR_1, GLenum VAR_2, GLuint VAR_3 )
{
   Node *VAR_4 = FUNC_0( VAR_1, VAR_0, 2 );
   if (VAR_4) {
      VAR_4[1].e = VAR_2;
      VAR_4[2].ui = VAR_3;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.BindTexture)( VAR_1, VAR_2, VAR_3 );
   }
}
