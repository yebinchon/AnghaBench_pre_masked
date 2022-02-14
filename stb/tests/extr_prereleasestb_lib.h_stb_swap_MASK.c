
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb__8 ;
typedef int stb__4 ;
typedef int buffer ;


 int FUNC_0 (void*,char*,size_t) ;

void FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2)
{
   char VAR_3[256];
   if (VAR_0 == VAR_1) return;
   if (VAR_2 == 4) {
      stb__4 VAR_4 = * ( stb__4 *) VAR_0;
      * (stb__4 *) VAR_0 = * ( stb__4 *) VAR_1;
      * (stb__4 *) VAR_1 = VAR_4;
      return;
   } else if (VAR_2 == 8) {
      stb__8 VAR_5 = * ( stb__8 *) VAR_0;
      * (stb__8 *) VAR_0 = * ( stb__8 *) VAR_1;
      * (stb__8 *) VAR_1 = VAR_5;
      return;
   }

   while (VAR_2 > sizeof(VAR_3)) {
      FUNC_1(VAR_0, VAR_1, sizeof(VAR_3));
      VAR_0 = (char *) VAR_0 + sizeof(VAR_3);
      VAR_1 = (char *) VAR_1 + sizeof(VAR_3);
      VAR_2 -= sizeof(VAR_3);
   }

   FUNC_0(VAR_3, VAR_0 , VAR_2);
   FUNC_0(VAR_0 , VAR_1 , VAR_2);
   FUNC_0(VAR_1 , VAR_3, VAR_2);
}
