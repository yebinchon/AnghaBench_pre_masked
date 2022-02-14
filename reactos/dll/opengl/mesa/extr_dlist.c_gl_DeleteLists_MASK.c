
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef int GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,char*) ;

void FUNC_3( GLcontext *VAR_2, GLuint VAR_3, GLsizei VAR_4 )
{
   GLuint VAR_5;

   if (FUNC_0(VAR_2)) {
      FUNC_2( VAR_2, VAR_0, "glDeleteLists" );
      return;
   }
   if (VAR_4<0) {
      FUNC_2( VAR_2, VAR_1, "glDeleteLists" );
      return;
   }
   for (VAR_5=VAR_3;VAR_5<VAR_3+VAR_4;VAR_5++) {
      FUNC_1( VAR_2, VAR_5 );
   }
}
