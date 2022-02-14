
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLint ;



__attribute__((used)) static int FUNC_0( int VAR_0 )
{
   GLint VAR_1 = 1;
   GLint VAR_2 = 0;

   if (VAR_0<0) {
      return -1;
   }

   while ( VAR_0 > VAR_1 ) {
      VAR_1 *= 2;
      VAR_2++;
   }
   if (VAR_1 != VAR_0) {
      return -1;
   }
   else {
      return VAR_2;
   }
}
