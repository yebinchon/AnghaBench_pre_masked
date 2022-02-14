
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static GLboolean FUNC_0( const GLfloat VAR_2[16] )
{
   if ( VAR_2[0]==1.0F && VAR_2[4]==0.0F && VAR_2[ 8]==0.0F && VAR_2[12]==0.0F
       && VAR_2[1]==0.0F && VAR_2[5]==1.0F && VAR_2[ 9]==0.0F && VAR_2[13]==0.0F
       && VAR_2[2]==0.0F && VAR_2[6]==0.0F && VAR_2[10]==1.0F && VAR_2[14]==0.0F
       && VAR_2[3]==0.0F && VAR_2[7]==0.0F && VAR_2[11]==0.0F && VAR_2[15]==1.0F) {
      return VAR_1;
   }
   else {
      return VAR_0;
   }
}
