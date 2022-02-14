
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_image {int RefCount; } ;
struct TYPE_8__ {int (* TexImage1D ) (TYPE_3__*,void*,void*,void*,scalar_t__,void*,void*,void*,struct gl_image*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {struct gl_image* data; void* e; void* i; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef void* GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,void*,scalar_t__,void*,void*,void*,struct gl_image*) ;

void FUNC_2( GLcontext *VAR_1, GLenum VAR_2,
                         GLint VAR_3, GLint VAR_4,
    GLsizei VAR_5, GLint VAR_6,
                         GLenum VAR_7, GLenum VAR_8,
    struct gl_image *VAR_9 )
{
   Node *VAR_10 = FUNC_0( VAR_1, VAR_0, 8 );
   if (VAR_10) {
      VAR_10[1].e = VAR_2;
      VAR_10[2].i = VAR_3;
      VAR_10[3].i = VAR_4;
      VAR_10[4].i = (GLint) VAR_5;
      VAR_10[5].i = VAR_6;
      VAR_10[6].e = VAR_7;
      VAR_10[7].e = VAR_8;
      VAR_10[8].data = VAR_9;
      if (VAR_9) {

         VAR_9->RefCount = 1;
      }
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.TexImage1D)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                        VAR_6, VAR_7, VAR_8, VAR_9 );
   }
}
