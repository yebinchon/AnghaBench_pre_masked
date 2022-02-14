
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* CopyTexSubImage1D ) (TYPE_3__*,int ,void*,void*,void*,void*,void*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* i; int e; } ;
typedef TYPE_2__ Node ;
typedef void* GLsizei ;
typedef void* GLint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,void*,void*,void*,void*,void*) ;

void FUNC_2( GLcontext *VAR_1,
                                GLenum VAR_2, GLint VAR_3,
                                GLint VAR_4, GLint VAR_5, GLint VAR_6,
                                GLsizei VAR_7 )
{
   Node *VAR_8 = FUNC_0( VAR_1, VAR_0, 6 );
   if (VAR_8) {
      VAR_8[1].e = VAR_2;
      VAR_8[2].i = VAR_3;
      VAR_8[3].i = VAR_4;
      VAR_8[4].i = VAR_5;
      VAR_8[5].i = VAR_6;
      VAR_8[6].i = VAR_7;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.CopyTexSubImage1D)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 );
   }
}
