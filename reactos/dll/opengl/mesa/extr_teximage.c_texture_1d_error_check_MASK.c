
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef int GLcontext ;
typedef int GLboolean ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;




 scalar_t__ VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static GLboolean FUNC_3( GLcontext *VAR_8, GLenum VAR_9,
                                         GLint VAR_10, GLenum VAR_11,
                                         GLenum VAR_12, GLenum VAR_13,
                                         GLint VAR_14, GLint VAR_15 )
{
   GLint VAR_16;
   if (VAR_9!=VAR_4 && VAR_9!=VAR_3) {
      FUNC_1( VAR_8, VAR_1, "glTexImage1D" );
      return VAR_5;
   }
   if (VAR_10<0 || VAR_10>=VAR_6) {
      FUNC_1( VAR_8, VAR_2, "glTexImage1D(level)" );
      return VAR_5;
   }
   VAR_16 = FUNC_0( VAR_11 );
   if (VAR_16<0) {
      FUNC_1( VAR_8, VAR_2, "glTexImage1D(internalFormat)" );
      return VAR_5;
   }
   if (VAR_15!=0 && VAR_15!=1) {
      if (VAR_9!=VAR_3) {
         FUNC_1( VAR_8, VAR_2, "glTexImage1D(border)" );
      }
      return VAR_5;
   }
   if (VAR_14<2*VAR_15 || VAR_14>2+VAR_7) {
      if (VAR_9!=VAR_3) {
         FUNC_1( VAR_8, VAR_2, "glTexImage1D(width)" );
      }
      return VAR_5;
   }
   if (FUNC_2( VAR_14-2*VAR_15 )<0) {
      FUNC_1( VAR_8, VAR_2,
               "glTexImage1D(width != 2^k + 2*border)");
      return VAR_5;
   }
   switch (VAR_12) {
      case 138:
      case 133:
      case 136:
      case 140:
      case 143:
      case 132:
      case 141:
      case 131:
      case 142:
      case 135:
      case 134:

         break;
      default:
         FUNC_1( VAR_8, VAR_1, "glTexImage1D(format)" );
         return VAR_5;
   }
   switch (VAR_13) {
      case 129:
      case 139:
      case 128:
      case 130:
      case 137:

         break;
      default:
         FUNC_1( VAR_8, VAR_1, "glTexImage1D(type)" );
         return VAR_5;
   }
   return VAR_0;
}
