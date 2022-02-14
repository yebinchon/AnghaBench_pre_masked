
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef int GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5( GLcontext *VAR_3,
                         GLenum VAR_4, GLint VAR_5, GLsizei VAR_6 )
{
   GLint VAR_7;

   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glDrawArrays" );
      return;
   }
   if (VAR_6<0) {
      FUNC_1( VAR_3, VAR_2, "glDrawArrays(count)" );
      return;
   }
   switch (VAR_4) {
      case 134:
      case 137:
      case 135:
      case 136:
      case 130:
      case 128:
      case 129:
      case 132:
      case 131:
      case 133:

         break;
      default:
         FUNC_1( VAR_3, VAR_0, "glDrawArrays(mode)" );
         return;
   }



   FUNC_3( VAR_3, VAR_4 );
   for (VAR_7=0;VAR_7<VAR_6;VAR_7++) {
      FUNC_2( VAR_3, VAR_5+VAR_7 );
   }
   FUNC_4( VAR_3 );
}
