
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ListBase; } ;
struct TYPE_6__ {int CompileFlag; TYPE_1__ List; } ;
typedef int GLvoid ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int const*) ;

void FUNC_2( GLcontext *VAR_1,
                   GLsizei VAR_2, GLenum VAR_3, const GLvoid *VAR_4 )
{
   GLuint VAR_5, VAR_6;
   GLboolean VAR_7;




   VAR_7 = VAR_1->CompileFlag;
   VAR_1->CompileFlag = VAR_0;

   for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
      VAR_6 = FUNC_1( VAR_5, VAR_3, VAR_4 );
      FUNC_0( VAR_1, VAR_1->List.ListBase + VAR_6 );
   }

   VAR_1->CompileFlag = VAR_7;
}
