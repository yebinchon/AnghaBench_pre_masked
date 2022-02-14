
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_image {int RefCount; } ;
struct TYPE_8__ {int (* TexImage2D ) (TYPE_3__*,void*,void*,void*,scalar_t__,scalar_t__,void*,void*,void*,struct gl_image*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {struct gl_image* data; void* e; void* i; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef void* GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*,void*,scalar_t__,scalar_t__,void*,void*,void*,struct gl_image*) ;

void FUNC_2( GLcontext *VAR_1, GLenum VAR_2,
                         GLint VAR_3, GLint VAR_4,
    GLsizei VAR_5, GLsizei VAR_6, GLint VAR_7,
                         GLenum VAR_8, GLenum VAR_9,
    struct gl_image *VAR_10 )
{
   Node *VAR_11 = FUNC_0( VAR_1, VAR_0, 9 );
   if (VAR_11) {
      VAR_11[1].e = VAR_2;
      VAR_11[2].i = VAR_3;
      VAR_11[3].i = VAR_4;
      VAR_11[4].i = (GLint) VAR_5;
      VAR_11[5].i = (GLint) VAR_6;
      VAR_11[6].i = VAR_7;
      VAR_11[7].e = VAR_8;
      VAR_11[8].e = VAR_9;
      VAR_11[9].data = VAR_10;
      if (VAR_10) {

         VAR_10->RefCount = 1;
      }
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.TexImage2D)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                        VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 );
   }
}
