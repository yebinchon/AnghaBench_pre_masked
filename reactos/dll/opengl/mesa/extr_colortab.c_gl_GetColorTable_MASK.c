
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLenum ;
typedef int GLcontext ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3( GLcontext *VAR_2, GLenum VAR_3, GLenum VAR_4,
                       GLenum VAR_5, GLvoid *VAR_6 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glGetBooleanv" );
      return;
   }

   switch (VAR_3) {
      case 130:
         break;
      case 129:
         break;
      case 128:
         break;
      default:
         FUNC_1(VAR_2, VAR_0, "glGetColorTableEXT(target)");
         return;
   }

   FUNC_2(VAR_2, "glGetColorTableEXT not implemented!");
}
