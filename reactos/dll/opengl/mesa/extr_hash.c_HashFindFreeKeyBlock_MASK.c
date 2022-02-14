
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HashTable {scalar_t__ MaxKey; } ;
typedef scalar_t__ GLuint ;


 scalar_t__ FUNC_0 (struct HashTable const*,scalar_t__) ;

GLuint FUNC_1(const struct HashTable *VAR_0, GLuint VAR_1)
{
   GLuint VAR_2 = ~((GLuint) 0);
   if (VAR_2 - VAR_1 > VAR_0->MaxKey) {

      return VAR_0->MaxKey + 1;
   }
   else {

      GLuint VAR_3 = 0;
      GLuint VAR_4 = 0;
      GLuint VAR_5;
      for (VAR_5=0; VAR_5!=VAR_2; VAR_5++) {
  if (FUNC_0(VAR_0, VAR_5)) {

     VAR_3 = 0;
     VAR_4 = VAR_5+1;
  }
  else {

     VAR_3++;
     if (VAR_3 == VAR_1) {
        return VAR_4;
     }
  }
      }

      return 0;
   }
}
