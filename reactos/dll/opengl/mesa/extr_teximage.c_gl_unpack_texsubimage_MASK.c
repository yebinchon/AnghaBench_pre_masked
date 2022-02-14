
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_image {int dummy; } ;
typedef int GLvoid ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef int GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct gl_image* FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__,int const*) ;

struct gl_image *
FUNC_2( GLcontext *VAR_4, GLint VAR_5, GLint VAR_6,
                       GLenum VAR_7, GLenum VAR_8, const GLvoid *VAR_9 )
{
   if (VAR_8==VAR_0 && VAR_7!=VAR_1) {
      return ((void*)0);
   }

   if (VAR_7==VAR_3 || VAR_7==VAR_2){
      return ((void*)0);
   }

   if (FUNC_0(VAR_8)<=0) {
      return ((void*)0);
   }

   return FUNC_1( VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 );
}
