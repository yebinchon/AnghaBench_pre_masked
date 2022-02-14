
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef size_t GLubyte ;
typedef size_t GLint ;
typedef int GLboolean ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t*,size_t***,size_t**,size_t,size_t,size_t,int ) ;
 int FUNC_1 (size_t*,size_t***,size_t**,size_t,size_t,size_t,int ) ;

__attribute__((used)) static void FUNC_2( GLubyte *VAR_7, GLubyte VAR_8[4][4][4],
                         GLint VAR_9, GLint VAR_10, GLuint VAR_11 )
{
   GLubyte *VAR_12[2];
   GLubyte VAR_13[2][3];
   GLubyte VAR_14, VAR_15;
   GLuint VAR_16, VAR_17, VAR_18;
   GLboolean VAR_19 = VAR_3;

   VAR_16 = VAR_17 = VAR_8[0][0][0] * VAR_8[0][0][0] * VAR_6 +
                          VAR_8[0][0][1] * VAR_8[0][0][1] * VAR_5 +
                          VAR_8[0][0][2] * VAR_8[0][0][2] * VAR_1;
   VAR_12[0] = VAR_12[1] = VAR_8[0][0];
   for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
      for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {

         if ((VAR_11 != VAR_2) || (VAR_8[VAR_15][VAR_14][3] > VAR_0)) {
            VAR_18 = VAR_8[VAR_15][VAR_14][0] * VAR_8[VAR_15][VAR_14][0] * VAR_6 +
                     VAR_8[VAR_15][VAR_14][1] * VAR_8[VAR_15][VAR_14][1] * VAR_5 +
                     VAR_8[VAR_15][VAR_14][2] * VAR_8[VAR_15][VAR_14][2] * VAR_1;
            if (VAR_18 > VAR_17) {
               VAR_17 = VAR_18;
               VAR_12[1] = VAR_8[VAR_15][VAR_14];
            }
            else if (VAR_18 < VAR_16) {
               VAR_16 = VAR_18;
               VAR_12[0] = VAR_8[VAR_15][VAR_14];
            }
         }
         else VAR_19 = VAR_4;
      }
   }

   for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
      for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
         VAR_13[VAR_15][VAR_14] = VAR_12[VAR_15][VAR_14];
      }
   }
   VAR_12[0] = VAR_13[0];
   VAR_12[1] = VAR_13[1];


   FUNC_0(VAR_7, VAR_8, VAR_12, VAR_9, VAR_10, VAR_11, VAR_19);

   FUNC_1(VAR_7, VAR_8, VAR_12, VAR_9, VAR_10, VAR_11, VAR_19);
}
